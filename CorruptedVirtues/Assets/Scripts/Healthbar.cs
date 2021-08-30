using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Healthbar : MonoBehaviour
{
    public Slider healthbar;
    public Color low;
    public Color high;
    public Vector3 offset;

    public void SetHeatlh(CharacterStats_SO characterDefinition)
    {
        healthbar.maxValue = characterDefinition.maxHealth;
        healthbar.value = characterDefinition.currentHealth;

        healthbar.fillRect.GetComponentInChildren<Image>().color = Color.Lerp(low, high, healthbar.normalizedValue);
    }
    void Update()
    {
        healthbar.transform.position = Camera.main.WorldToScreenPoint(transform.parent.position + offset);
    }
}

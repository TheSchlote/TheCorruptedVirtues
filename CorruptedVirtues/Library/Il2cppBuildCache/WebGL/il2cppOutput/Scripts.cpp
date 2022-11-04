﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Func`2<UnityEngine.GameObject,System.Single>
struct Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16;
// System.Func`2<System.Object,System.Single>
struct Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t59A95566E6FBF6B195B841B400D0A6B7264A738B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Linq.IOrderedEnumerable`1<UnityEngine.GameObject>
struct IOrderedEnumerable_1_t22EC0CAEE4317637119C1FC0200D53D8C0B80083;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_tB9F2319177B9E63FFCBB89F9E57F8529A97CC77B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<ItemPickUp_SO>
struct List_1_t719B7099343D75876AA738F8F2405139C3EA21BF;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Quest_SO>
struct List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665;
// System.Collections.Generic.List`1<Skill_SO>
struct List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// System.Collections.Generic.Queue`1<System.String>
struct Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// ItemPickUp_SO[]
struct ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Quest_SO[]
struct Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// Skill_SO[]
struct Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// CharacterStats_SO/CharLevelUps[]
struct CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// BattleBaseState
struct BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98;
// BattleEndState
struct BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86;
// BattleEnemyState
struct BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E;
// BattlePlayerState
struct BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329;
// BattleStartState
struct BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2;
// BattleSystem
struct BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E;
// BattleUI
struct BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D;
// BattleWhosNextState
struct BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraFollows
struct CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CharacterInventory
struct CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E;
// CharacterStats
struct CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB;
// CharacterStats_SO
struct CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// CollisionHandler
struct CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Dialogue
struct Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795;
// DialogueManger
struct DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B;
// DialogueTrigger
struct DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameBaseState
struct GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C;
// GameBattleState
struct GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A;
// GameManger
struct GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE;
// GameMenuState
struct GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GameOverWorldState
struct GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// Healthbar
struct Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// ItemPickUp
struct ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4;
// ItemPickUp_SO
struct ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51;
// MainMenu
struct MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OverworldEnemy
struct OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61;
// OverworldMovement
struct OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// QuestGiver
struct QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C;
// Quest_SO
struct Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// SkillPatternUtil
struct SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74;
// Skill_SO
struct Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SplashSequence
struct SplashSequence_tF73C0C4C47982BAF298C794B7CA1C41646594B5D;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// BattleStartState/<>c
struct U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002;
// BattleSystem/<WaitForOneSec>d__19
struct U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6;
// BattleUI/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692;
// BattleUI/<>c__DisplayClass27_1
struct U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6;
// BattleWhosNextState/<>c
struct U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CharacterStats_SO/CharLevelUps
struct CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E;
// DialogueManger/<TypeSentence>d__10
struct U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478;
// GameManger/AreaData
struct AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9;
// GameManger/PartyData
struct PartyData_t4526868E24A37E230B89308E1F624E73B9951643;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Quest_SO/QuestGoal
struct QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// SplashSequence/<ToMainMenu>d__1
struct U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523;

IL2CPP_EXTERN_C RuntimeClass* BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t719B7099343D75876AA738F8F2405139C3EA21BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E001B7AD1116D41624205DEB44C5A16B60EA21;
IL2CPP_EXTERN_C String_t* _stringLiteral0906A8107B55AC0E7B967F1F0EB18FCA35A016CC;
IL2CPP_EXTERN_C String_t* _stringLiteral0A5DD9AEDC3AC45F3006878CD9DA2B4679F117A9;
IL2CPP_EXTERN_C String_t* _stringLiteral12953315450AEF385864C34930B754DE716B3F06;
IL2CPP_EXTERN_C String_t* _stringLiteral15445EDC7C6655D6FC691273B2B82C7581616EFD;
IL2CPP_EXTERN_C String_t* _stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895;
IL2CPP_EXTERN_C String_t* _stringLiteral23C1C15697849A9FE6569294B1CB7F4CA3E4DFDD;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral26BBF49F74445B23D05A4BC52E5D813318E09384;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral3C02A0BE48156170EB186E5F3AA2FDA7E3E55F5E;
IL2CPP_EXTERN_C String_t* _stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D;
IL2CPP_EXTERN_C String_t* _stringLiteral46DE5783C291FE01880CA4D33F58ED585DFF721F;
IL2CPP_EXTERN_C String_t* _stringLiteral578089E2A1400FD0CC9509BAD26FFC854281EE0A;
IL2CPP_EXTERN_C String_t* _stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral611C901A7EF81AF31F8AC53AD8E49AD7792222E1;
IL2CPP_EXTERN_C String_t* _stringLiteral61768E5AE4652F143F0C608992D048B532617092;
IL2CPP_EXTERN_C String_t* _stringLiteral6238B8057C05CD652138E4AF75006A11A88E4CEF;
IL2CPP_EXTERN_C String_t* _stringLiteral62BE79FF4F6D4186B2DBED0B74848627AD1972FF;
IL2CPP_EXTERN_C String_t* _stringLiteral685BD9119C7B33F925ACBD57F19DB756B61993D3;
IL2CPP_EXTERN_C String_t* _stringLiteral70DD7414AF2EA2EE656B0D578EC9201BA1404D5D;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8507E3FD361C6887FAE9B0A9004AAD0B32596D12;
IL2CPP_EXTERN_C String_t* _stringLiteral8873D38D7A18C7EE68D7BCAEF30A84909721ACE5;
IL2CPP_EXTERN_C String_t* _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2;
IL2CPP_EXTERN_C String_t* _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC70D972C06319B918543D92FF2677A1363C0D4;
IL2CPP_EXTERN_C String_t* _stringLiteralA14E47533248C9324CADC61C1C69DC6CE64AF40E;
IL2CPP_EXTERN_C String_t* _stringLiteralA6347AFDF4947BA3B839950F3624BF34967EA28A;
IL2CPP_EXTERN_C String_t* _stringLiteralAF21751F694B4474071AE18EF40CB53B9C1F8464;
IL2CPP_EXTERN_C String_t* _stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C38436478968960F97323B0285144E41B3AEA0;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC535BA3E44368EFD97D1865B14D083CE16FF51A;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9FE63D49D60E7DF5869DD0F8F6E32B9C0CEB2E;
IL2CPP_EXTERN_C String_t* _stringLiteralF1C2A5F0BDC807BE18A7D4198BEA0A35D0E4B1C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF3665B7FA5EE3CB1836D81568C790A9ABBFFB15B;
IL2CPP_EXTERN_C String_t* _stringLiteralF8A0FAFEAF74CB7D42602C756CCF8FB3E1146E21;
IL2CPP_EXTERN_C String_t* _stringLiteralF9A1B8A0AF0475A9C4974D3FB03316BA0853530B;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE02C44F68D4FA16E72507670298808A6B9ECFA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mF84E0FEF3A19A2E4FCCC824DB717AC06E7487C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39AD1FEAE1ED69C373012C3815391386C650A9E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC4FDC631A0EAC150E6C525213A789D2D9CE97DCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102_m8F58F3D30C95AAF7CD3068E8A7008C7CEC3744EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCE7987B8D9203CE08CD90F89CF7A0DCB8F488F5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3C1E296AF7BAAD6919D3220FF48308CE0A6F4DA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m42466EBBF62A6A6A56C47AE017A98052DEA80F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9B363B2E0DE0E28EA74506118BB8F2F046749102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE9EFADE4AF37789D015781E1FDF9BF48094BF902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEFB7A71C1D72EE5CBC0AA4EE8F8754660CD82107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B_mAD343E93EA70455C0779C7B49A4A6DD472038D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m1D8BC0D358085A0C76DC4EBB50B79781B9F8EB45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m8E582C120D348CF28DEECA38CB63A609FD1BD9B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD31335DFB51B4E0C68657790AAF0963EA8E7A059_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m3D79180EA2D2D7897016B383AA035A8B0AE08591_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mD7C8C22580B59BE7F224C7E5AC3C079592F54D58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CToMainMenuU3Ed__1_System_Collections_IEnumerator_Reset_m26729FC4C5CEBAF46E413C73EF7144CE22C79FA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTypeSentenceU3Ed__10_System_Collections_IEnumerator_Reset_mDA8A52682C40C0395A1B9C7DE13857D23A733A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPopulateCharactersInBattleU3Eb__3_0_m032CA2F6420CC3F1C012D5B7A67413B977A75BA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRePopulateCharactersInBattleU3Eb__5_0_m2B9B73235808A6DD17AC737EA9846DA0C983AE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass27_1_U3CSkillsButtonU3Eb__0_mF11FF283A5285A87BEB25977DCD0C721D61DBB74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitForOneSecU3Ed__19_System_Collections_IEnumerator_Reset_m3E8F1FC775D045C1F7D3B37AE068B510C4BE2F96_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE868A023BBD09CF7B00C07AF4219511F84B4DAE2 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ItemPickUp_SO>
struct  List_1_t719B7099343D75876AA738F8F2405139C3EA21BF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF, ____items_1)); }
	inline ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0* get__items_1() const { return ____items_1; }
	inline ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t719B7099343D75876AA738F8F2405139C3EA21BF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF_StaticFields, ____emptyArray_5)); }
	inline ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemPickUp_SOU5BU5D_tEBDAF6872726B068A772A69E344135F5014F5AF0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Quest_SO>
struct  List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665, ____items_1)); }
	inline Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C* get__items_1() const { return ____items_1; }
	inline Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665_StaticFields, ____emptyArray_5)); }
	inline Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Quest_SOU5BU5D_tCFAEDADB655A8FE81E810F2E4CA0DB4334C4381C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Skill_SO>
struct  List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864, ____items_1)); }
	inline Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E* get__items_1() const { return ____items_1; }
	inline Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864_StaticFields, ____emptyArray_5)); }
	inline Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Skill_SOU5BU5D_t25B06EBADCF64437EDF8B61790A8D4ABD6773C7E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.String>
struct  Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D, ____array_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__array_0() const { return ____array_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// BattleBaseState
struct  BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98  : public RuntimeObject
{
public:

public:
};


// Dialogue
struct  Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795  : public RuntimeObject
{
public:
	// UnityEngine.Sprite Dialogue::charImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___charImage_0;
	// System.String Dialogue::name
	String_t* ___name_1;
	// System.String[] Dialogue::sentences
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___sentences_2;

public:
	inline static int32_t get_offset_of_charImage_0() { return static_cast<int32_t>(offsetof(Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795, ___charImage_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_charImage_0() const { return ___charImage_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_charImage_0() { return &___charImage_0; }
	inline void set_charImage_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___charImage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charImage_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_sentences_2() { return static_cast<int32_t>(offsetof(Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795, ___sentences_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_sentences_2() const { return ___sentences_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_sentences_2() { return &___sentences_2; }
	inline void set_sentences_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___sentences_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sentences_2), (void*)value);
	}
};


// GameBaseState
struct  GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C  : public RuntimeObject
{
public:

public:
};


// SkillPatternUtil
struct  SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// BattleStartState/<>c
struct  U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields
{
public:
	// BattleStartState/<>c BattleStartState/<>c::<>9
	U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Single> BattleStartState/<>c::<>9__3_0
	Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// BattleSystem/<WaitForOneSec>d__19
struct  U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6  : public RuntimeObject
{
public:
	// System.Int32 BattleSystem/<WaitForOneSec>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BattleSystem/<WaitForOneSec>d__19::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// BattleSystem BattleSystem/<WaitForOneSec>d__19::<>4__this
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6, ___U3CU3E4__this_2)); }
	inline BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// BattleUI/<>c__DisplayClass27_0
struct  U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692  : public RuntimeObject
{
public:
	// BattleUI BattleUI/<>c__DisplayClass27_0::<>4__this
	BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * ___U3CU3E4__this_0;
	// System.Collections.Generic.List`1<Skill_SO> BattleUI/<>c__DisplayClass27_0::skills
	List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * ___skills_1;

public:
	inline static int32_t get_offset_of_U3CU3E4__this_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692, ___U3CU3E4__this_0)); }
	inline BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * get_U3CU3E4__this_0() const { return ___U3CU3E4__this_0; }
	inline BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D ** get_address_of_U3CU3E4__this_0() { return &___U3CU3E4__this_0; }
	inline void set_U3CU3E4__this_0(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * value)
	{
		___U3CU3E4__this_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_0), (void*)value);
	}

	inline static int32_t get_offset_of_skills_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692, ___skills_1)); }
	inline List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * get_skills_1() const { return ___skills_1; }
	inline List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 ** get_address_of_skills_1() { return &___skills_1; }
	inline void set_skills_1(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * value)
	{
		___skills_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skills_1), (void*)value);
	}
};


// BattleUI/<>c__DisplayClass27_1
struct  U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6  : public RuntimeObject
{
public:
	// UnityEngine.GameObject BattleUI/<>c__DisplayClass27_1::go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___go_0;
	// BattleUI/<>c__DisplayClass27_0 BattleUI/<>c__DisplayClass27_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_go_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6, ___go_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_go_0() const { return ___go_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_go_0() { return &___go_0; }
	inline void set_go_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___go_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___go_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// BattleWhosNextState/<>c
struct  U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields
{
public:
	// BattleWhosNextState/<>c BattleWhosNextState/<>c::<>9
	U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.GameObject,System.Single> BattleWhosNextState/<>c::<>9__5_0
	Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * ___U3CU3E9__5_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields, ___U3CU3E9__5_0_1)); }
	inline Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * get_U3CU3E9__5_0_1() const { return ___U3CU3E9__5_0_1; }
	inline Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 ** get_address_of_U3CU3E9__5_0_1() { return &___U3CU3E9__5_0_1; }
	inline void set_U3CU3E9__5_0_1(Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * value)
	{
		___U3CU3E9__5_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_1), (void*)value);
	}
};


// CharacterStats_SO/CharLevelUps
struct  CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E  : public RuntimeObject
{
public:
	// System.Int32 CharacterStats_SO/CharLevelUps::maxHealth
	int32_t ___maxHealth_0;
	// System.Int32 CharacterStats_SO/CharLevelUps::maxMagic
	int32_t ___maxMagic_1;
	// System.Int32 CharacterStats_SO/CharLevelUps::baseAttack
	int32_t ___baseAttack_2;
	// System.Int32 CharacterStats_SO/CharLevelUps::baseDefense
	int32_t ___baseDefense_3;
	// System.Int32 CharacterStats_SO/CharLevelUps::baseSpeed
	int32_t ___baseSpeed_4;

public:
	inline static int32_t get_offset_of_maxHealth_0() { return static_cast<int32_t>(offsetof(CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E, ___maxHealth_0)); }
	inline int32_t get_maxHealth_0() const { return ___maxHealth_0; }
	inline int32_t* get_address_of_maxHealth_0() { return &___maxHealth_0; }
	inline void set_maxHealth_0(int32_t value)
	{
		___maxHealth_0 = value;
	}

	inline static int32_t get_offset_of_maxMagic_1() { return static_cast<int32_t>(offsetof(CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E, ___maxMagic_1)); }
	inline int32_t get_maxMagic_1() const { return ___maxMagic_1; }
	inline int32_t* get_address_of_maxMagic_1() { return &___maxMagic_1; }
	inline void set_maxMagic_1(int32_t value)
	{
		___maxMagic_1 = value;
	}

	inline static int32_t get_offset_of_baseAttack_2() { return static_cast<int32_t>(offsetof(CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E, ___baseAttack_2)); }
	inline int32_t get_baseAttack_2() const { return ___baseAttack_2; }
	inline int32_t* get_address_of_baseAttack_2() { return &___baseAttack_2; }
	inline void set_baseAttack_2(int32_t value)
	{
		___baseAttack_2 = value;
	}

	inline static int32_t get_offset_of_baseDefense_3() { return static_cast<int32_t>(offsetof(CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E, ___baseDefense_3)); }
	inline int32_t get_baseDefense_3() const { return ___baseDefense_3; }
	inline int32_t* get_address_of_baseDefense_3() { return &___baseDefense_3; }
	inline void set_baseDefense_3(int32_t value)
	{
		___baseDefense_3 = value;
	}

	inline static int32_t get_offset_of_baseSpeed_4() { return static_cast<int32_t>(offsetof(CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E, ___baseSpeed_4)); }
	inline int32_t get_baseSpeed_4() const { return ___baseSpeed_4; }
	inline int32_t* get_address_of_baseSpeed_4() { return &___baseSpeed_4; }
	inline void set_baseSpeed_4(int32_t value)
	{
		___baseSpeed_4 = value;
	}
};


// DialogueManger/<TypeSentence>d__10
struct  U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478  : public RuntimeObject
{
public:
	// System.Int32 DialogueManger/<TypeSentence>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueManger/<TypeSentence>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DialogueManger DialogueManger/<TypeSentence>d__10::<>4__this
	DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * ___U3CU3E4__this_2;
	// System.String DialogueManger/<TypeSentence>d__10::sentence
	String_t* ___sentence_3;
	// System.Char[] DialogueManger/<TypeSentence>d__10::<>7__wrap1
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___U3CU3E7__wrap1_4;
	// System.Int32 DialogueManger/<TypeSentence>d__10::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478, ___U3CU3E4__this_2)); }
	inline DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_sentence_3() { return static_cast<int32_t>(offsetof(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478, ___sentence_3)); }
	inline String_t* get_sentence_3() const { return ___sentence_3; }
	inline String_t** get_address_of_sentence_3() { return &___sentence_3; }
	inline void set_sentence_3(String_t* value)
	{
		___sentence_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sentence_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_4() { return static_cast<int32_t>(offsetof(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478, ___U3CU3E7__wrap1_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_U3CU3E7__wrap1_4() const { return ___U3CU3E7__wrap1_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_U3CU3E7__wrap1_4() { return &___U3CU3E7__wrap1_4; }
	inline void set_U3CU3E7__wrap1_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___U3CU3E7__wrap1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_5() { return static_cast<int32_t>(offsetof(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478, ___U3CU3E7__wrap2_5)); }
	inline int32_t get_U3CU3E7__wrap2_5() const { return ___U3CU3E7__wrap2_5; }
	inline int32_t* get_address_of_U3CU3E7__wrap2_5() { return &___U3CU3E7__wrap2_5; }
	inline void set_U3CU3E7__wrap2_5(int32_t value)
	{
		___U3CU3E7__wrap2_5 = value;
	}
};


// GameManger/AreaData
struct  AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9  : public RuntimeObject
{
public:
	// System.String GameManger/AreaData::regionName
	String_t* ___regionName_0;
	// System.Int32 GameManger/AreaData::maxAmountEnemys
	int32_t ___maxAmountEnemys_1;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManger/AreaData::possibleEnemys
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___possibleEnemys_2;

public:
	inline static int32_t get_offset_of_regionName_0() { return static_cast<int32_t>(offsetof(AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9, ___regionName_0)); }
	inline String_t* get_regionName_0() const { return ___regionName_0; }
	inline String_t** get_address_of_regionName_0() { return &___regionName_0; }
	inline void set_regionName_0(String_t* value)
	{
		___regionName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regionName_0), (void*)value);
	}

	inline static int32_t get_offset_of_maxAmountEnemys_1() { return static_cast<int32_t>(offsetof(AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9, ___maxAmountEnemys_1)); }
	inline int32_t get_maxAmountEnemys_1() const { return ___maxAmountEnemys_1; }
	inline int32_t* get_address_of_maxAmountEnemys_1() { return &___maxAmountEnemys_1; }
	inline void set_maxAmountEnemys_1(int32_t value)
	{
		___maxAmountEnemys_1 = value;
	}

	inline static int32_t get_offset_of_possibleEnemys_2() { return static_cast<int32_t>(offsetof(AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9, ___possibleEnemys_2)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_possibleEnemys_2() const { return ___possibleEnemys_2; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_possibleEnemys_2() { return &___possibleEnemys_2; }
	inline void set_possibleEnemys_2(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___possibleEnemys_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___possibleEnemys_2), (void*)value);
	}
};


// GameManger/PartyData
struct  PartyData_t4526868E24A37E230B89308E1F624E73B9951643  : public RuntimeObject
{
public:
	// System.Int32 GameManger/PartyData::maxPartySize
	int32_t ___maxPartySize_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameManger/PartyData::PlayerParty
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___PlayerParty_1;

public:
	inline static int32_t get_offset_of_maxPartySize_0() { return static_cast<int32_t>(offsetof(PartyData_t4526868E24A37E230B89308E1F624E73B9951643, ___maxPartySize_0)); }
	inline int32_t get_maxPartySize_0() const { return ___maxPartySize_0; }
	inline int32_t* get_address_of_maxPartySize_0() { return &___maxPartySize_0; }
	inline void set_maxPartySize_0(int32_t value)
	{
		___maxPartySize_0 = value;
	}

	inline static int32_t get_offset_of_PlayerParty_1() { return static_cast<int32_t>(offsetof(PartyData_t4526868E24A37E230B89308E1F624E73B9951643, ___PlayerParty_1)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_PlayerParty_1() const { return ___PlayerParty_1; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_PlayerParty_1() { return &___PlayerParty_1; }
	inline void set_PlayerParty_1(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___PlayerParty_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerParty_1), (void*)value);
	}
};


// Quest_SO/QuestGoal
struct  QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD  : public RuntimeObject
{
public:
	// System.Int32 Quest_SO/QuestGoal::currentAmount
	int32_t ___currentAmount_0;
	// System.Int32 Quest_SO/QuestGoal::goalAmount
	int32_t ___goalAmount_1;

public:
	inline static int32_t get_offset_of_currentAmount_0() { return static_cast<int32_t>(offsetof(QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD, ___currentAmount_0)); }
	inline int32_t get_currentAmount_0() const { return ___currentAmount_0; }
	inline int32_t* get_address_of_currentAmount_0() { return &___currentAmount_0; }
	inline void set_currentAmount_0(int32_t value)
	{
		___currentAmount_0 = value;
	}

	inline static int32_t get_offset_of_goalAmount_1() { return static_cast<int32_t>(offsetof(QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD, ___goalAmount_1)); }
	inline int32_t get_goalAmount_1() const { return ___goalAmount_1; }
	inline int32_t* get_address_of_goalAmount_1() { return &___goalAmount_1; }
	inline void set_goalAmount_1(int32_t value)
	{
		___goalAmount_1 = value;
	}
};


// SplashSequence/<ToMainMenu>d__1
struct  U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523  : public RuntimeObject
{
public:
	// System.Int32 SplashSequence/<ToMainMenu>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SplashSequence/<ToMainMenu>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Quest_SO>
struct  Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D, ___list_0)); }
	inline List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * get_list_0() const { return ___list_0; }
	inline List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D, ___current_3)); }
	inline Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * get_current_3() const { return ___current_3; }
	inline Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// BattleEndState
struct  BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86  : public BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98
{
public:

public:
};


// BattleEnemyState
struct  BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E  : public BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98
{
public:

public:
};


// BattlePlayerState
struct  BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329  : public BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98
{
public:

public:
};


// BattleStartState
struct  BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2  : public BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98
{
public:

public:
};


// BattleWhosNextState
struct  BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9  : public BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98
{
public:

public:
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// GameBattleState
struct  GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A  : public GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C
{
public:

public:
};


// GameMenuState
struct  GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66  : public GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C
{
public:

public:
};


// GameOverWorldState
struct  GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2  : public GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C
{
public:

public:
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision2D
struct  Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// ItemTypeDefinitions
struct  ItemTypeDefinitions_t6553B2F0A38810F9B3E38C9D0EEE19E6E761B0DA 
{
public:
	// System.Int32 ItemTypeDefinitions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ItemTypeDefinitions_t6553B2F0A38810F9B3E38C9D0EEE19E6E761B0DA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct  ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Skill_SO/SkillPattern
struct  SkillPattern_tAC3CA5B0616D4CED81E7F9A446DD6C853EC8BBF1 
{
public:
	// System.Int32 Skill_SO/SkillPattern::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SkillPattern_tAC3CA5B0616D4CED81E7F9A446DD6C853EC8BBF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Skill_SO/SkillType
struct  SkillType_t483EDBD65A16FF3DE24D75506005D61E00F8D0DD 
{
public:
	// System.Int32 Skill_SO/SkillType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SkillType_t483EDBD65A16FF3DE24D75506005D61E00F8D0DD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Func`2<UnityEngine.GameObject,System.Single>
struct  Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// CharacterStats_SO
struct  CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean CharacterStats_SO::SetManualy
	bool ___SetManualy_4;
	// System.Boolean CharacterStats_SO::saveDataOnClose
	bool ___saveDataOnClose_5;
	// System.Boolean CharacterStats_SO::Enemy
	bool ___Enemy_6;
	// ItemPickUp CharacterStats_SO::<weapon>k__BackingField
	ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___U3CweaponU3Ek__BackingField_7;
	// ItemPickUp CharacterStats_SO::<shield>k__BackingField
	ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___U3CshieldU3Ek__BackingField_8;
	// ItemPickUp CharacterStats_SO::<accessory>k__BackingField
	ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___U3CaccessoryU3Ek__BackingField_9;
	// System.Int32 CharacterStats_SO::maxHealth
	int32_t ___maxHealth_10;
	// System.Int32 CharacterStats_SO::currentHealth
	int32_t ___currentHealth_11;
	// System.Int32 CharacterStats_SO::maxMagic
	int32_t ___maxMagic_12;
	// System.Int32 CharacterStats_SO::currentMagic
	int32_t ___currentMagic_13;
	// System.Int32 CharacterStats_SO::Wealth
	int32_t ___Wealth_14;
	// System.Int32 CharacterStats_SO::baseAttack
	int32_t ___baseAttack_15;
	// System.Int32 CharacterStats_SO::currentAttack
	int32_t ___currentAttack_16;
	// System.Int32 CharacterStats_SO::baseSpecialAttack
	int32_t ___baseSpecialAttack_17;
	// System.Int32 CharacterStats_SO::currentSpecialAttack
	int32_t ___currentSpecialAttack_18;
	// System.Int32 CharacterStats_SO::baseDefense
	int32_t ___baseDefense_19;
	// System.Int32 CharacterStats_SO::currentDefense
	int32_t ___currentDefense_20;
	// System.Int32 CharacterStats_SO::baseSpecialDefense
	int32_t ___baseSpecialDefense_21;
	// System.Int32 CharacterStats_SO::currentSpecialDefense
	int32_t ___currentSpecialDefense_22;
	// System.Single CharacterStats_SO::baseSpeed
	float ___baseSpeed_23;
	// System.Single CharacterStats_SO::currentSpeed
	float ___currentSpeed_24;
	// System.Int32 CharacterStats_SO::charExperience
	int32_t ___charExperience_25;
	// System.Int32 CharacterStats_SO::charLevel
	int32_t ___charLevel_26;
	// CharacterStats_SO/CharLevelUps[] CharacterStats_SO::charLevelUps
	CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* ___charLevelUps_27;
	// System.Collections.Generic.List`1<Skill_SO> CharacterStats_SO::SkillList
	List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * ___SkillList_28;

public:
	inline static int32_t get_offset_of_SetManualy_4() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___SetManualy_4)); }
	inline bool get_SetManualy_4() const { return ___SetManualy_4; }
	inline bool* get_address_of_SetManualy_4() { return &___SetManualy_4; }
	inline void set_SetManualy_4(bool value)
	{
		___SetManualy_4 = value;
	}

	inline static int32_t get_offset_of_saveDataOnClose_5() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___saveDataOnClose_5)); }
	inline bool get_saveDataOnClose_5() const { return ___saveDataOnClose_5; }
	inline bool* get_address_of_saveDataOnClose_5() { return &___saveDataOnClose_5; }
	inline void set_saveDataOnClose_5(bool value)
	{
		___saveDataOnClose_5 = value;
	}

	inline static int32_t get_offset_of_Enemy_6() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___Enemy_6)); }
	inline bool get_Enemy_6() const { return ___Enemy_6; }
	inline bool* get_address_of_Enemy_6() { return &___Enemy_6; }
	inline void set_Enemy_6(bool value)
	{
		___Enemy_6 = value;
	}

	inline static int32_t get_offset_of_U3CweaponU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___U3CweaponU3Ek__BackingField_7)); }
	inline ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * get_U3CweaponU3Ek__BackingField_7() const { return ___U3CweaponU3Ek__BackingField_7; }
	inline ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 ** get_address_of_U3CweaponU3Ek__BackingField_7() { return &___U3CweaponU3Ek__BackingField_7; }
	inline void set_U3CweaponU3Ek__BackingField_7(ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * value)
	{
		___U3CweaponU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CweaponU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CshieldU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___U3CshieldU3Ek__BackingField_8)); }
	inline ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * get_U3CshieldU3Ek__BackingField_8() const { return ___U3CshieldU3Ek__BackingField_8; }
	inline ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 ** get_address_of_U3CshieldU3Ek__BackingField_8() { return &___U3CshieldU3Ek__BackingField_8; }
	inline void set_U3CshieldU3Ek__BackingField_8(ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * value)
	{
		___U3CshieldU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CshieldU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CaccessoryU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___U3CaccessoryU3Ek__BackingField_9)); }
	inline ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * get_U3CaccessoryU3Ek__BackingField_9() const { return ___U3CaccessoryU3Ek__BackingField_9; }
	inline ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 ** get_address_of_U3CaccessoryU3Ek__BackingField_9() { return &___U3CaccessoryU3Ek__BackingField_9; }
	inline void set_U3CaccessoryU3Ek__BackingField_9(ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * value)
	{
		___U3CaccessoryU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaccessoryU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_maxHealth_10() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___maxHealth_10)); }
	inline int32_t get_maxHealth_10() const { return ___maxHealth_10; }
	inline int32_t* get_address_of_maxHealth_10() { return &___maxHealth_10; }
	inline void set_maxHealth_10(int32_t value)
	{
		___maxHealth_10 = value;
	}

	inline static int32_t get_offset_of_currentHealth_11() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentHealth_11)); }
	inline int32_t get_currentHealth_11() const { return ___currentHealth_11; }
	inline int32_t* get_address_of_currentHealth_11() { return &___currentHealth_11; }
	inline void set_currentHealth_11(int32_t value)
	{
		___currentHealth_11 = value;
	}

	inline static int32_t get_offset_of_maxMagic_12() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___maxMagic_12)); }
	inline int32_t get_maxMagic_12() const { return ___maxMagic_12; }
	inline int32_t* get_address_of_maxMagic_12() { return &___maxMagic_12; }
	inline void set_maxMagic_12(int32_t value)
	{
		___maxMagic_12 = value;
	}

	inline static int32_t get_offset_of_currentMagic_13() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentMagic_13)); }
	inline int32_t get_currentMagic_13() const { return ___currentMagic_13; }
	inline int32_t* get_address_of_currentMagic_13() { return &___currentMagic_13; }
	inline void set_currentMagic_13(int32_t value)
	{
		___currentMagic_13 = value;
	}

	inline static int32_t get_offset_of_Wealth_14() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___Wealth_14)); }
	inline int32_t get_Wealth_14() const { return ___Wealth_14; }
	inline int32_t* get_address_of_Wealth_14() { return &___Wealth_14; }
	inline void set_Wealth_14(int32_t value)
	{
		___Wealth_14 = value;
	}

	inline static int32_t get_offset_of_baseAttack_15() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___baseAttack_15)); }
	inline int32_t get_baseAttack_15() const { return ___baseAttack_15; }
	inline int32_t* get_address_of_baseAttack_15() { return &___baseAttack_15; }
	inline void set_baseAttack_15(int32_t value)
	{
		___baseAttack_15 = value;
	}

	inline static int32_t get_offset_of_currentAttack_16() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentAttack_16)); }
	inline int32_t get_currentAttack_16() const { return ___currentAttack_16; }
	inline int32_t* get_address_of_currentAttack_16() { return &___currentAttack_16; }
	inline void set_currentAttack_16(int32_t value)
	{
		___currentAttack_16 = value;
	}

	inline static int32_t get_offset_of_baseSpecialAttack_17() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___baseSpecialAttack_17)); }
	inline int32_t get_baseSpecialAttack_17() const { return ___baseSpecialAttack_17; }
	inline int32_t* get_address_of_baseSpecialAttack_17() { return &___baseSpecialAttack_17; }
	inline void set_baseSpecialAttack_17(int32_t value)
	{
		___baseSpecialAttack_17 = value;
	}

	inline static int32_t get_offset_of_currentSpecialAttack_18() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentSpecialAttack_18)); }
	inline int32_t get_currentSpecialAttack_18() const { return ___currentSpecialAttack_18; }
	inline int32_t* get_address_of_currentSpecialAttack_18() { return &___currentSpecialAttack_18; }
	inline void set_currentSpecialAttack_18(int32_t value)
	{
		___currentSpecialAttack_18 = value;
	}

	inline static int32_t get_offset_of_baseDefense_19() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___baseDefense_19)); }
	inline int32_t get_baseDefense_19() const { return ___baseDefense_19; }
	inline int32_t* get_address_of_baseDefense_19() { return &___baseDefense_19; }
	inline void set_baseDefense_19(int32_t value)
	{
		___baseDefense_19 = value;
	}

	inline static int32_t get_offset_of_currentDefense_20() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentDefense_20)); }
	inline int32_t get_currentDefense_20() const { return ___currentDefense_20; }
	inline int32_t* get_address_of_currentDefense_20() { return &___currentDefense_20; }
	inline void set_currentDefense_20(int32_t value)
	{
		___currentDefense_20 = value;
	}

	inline static int32_t get_offset_of_baseSpecialDefense_21() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___baseSpecialDefense_21)); }
	inline int32_t get_baseSpecialDefense_21() const { return ___baseSpecialDefense_21; }
	inline int32_t* get_address_of_baseSpecialDefense_21() { return &___baseSpecialDefense_21; }
	inline void set_baseSpecialDefense_21(int32_t value)
	{
		___baseSpecialDefense_21 = value;
	}

	inline static int32_t get_offset_of_currentSpecialDefense_22() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentSpecialDefense_22)); }
	inline int32_t get_currentSpecialDefense_22() const { return ___currentSpecialDefense_22; }
	inline int32_t* get_address_of_currentSpecialDefense_22() { return &___currentSpecialDefense_22; }
	inline void set_currentSpecialDefense_22(int32_t value)
	{
		___currentSpecialDefense_22 = value;
	}

	inline static int32_t get_offset_of_baseSpeed_23() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___baseSpeed_23)); }
	inline float get_baseSpeed_23() const { return ___baseSpeed_23; }
	inline float* get_address_of_baseSpeed_23() { return &___baseSpeed_23; }
	inline void set_baseSpeed_23(float value)
	{
		___baseSpeed_23 = value;
	}

	inline static int32_t get_offset_of_currentSpeed_24() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___currentSpeed_24)); }
	inline float get_currentSpeed_24() const { return ___currentSpeed_24; }
	inline float* get_address_of_currentSpeed_24() { return &___currentSpeed_24; }
	inline void set_currentSpeed_24(float value)
	{
		___currentSpeed_24 = value;
	}

	inline static int32_t get_offset_of_charExperience_25() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___charExperience_25)); }
	inline int32_t get_charExperience_25() const { return ___charExperience_25; }
	inline int32_t* get_address_of_charExperience_25() { return &___charExperience_25; }
	inline void set_charExperience_25(int32_t value)
	{
		___charExperience_25 = value;
	}

	inline static int32_t get_offset_of_charLevel_26() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___charLevel_26)); }
	inline int32_t get_charLevel_26() const { return ___charLevel_26; }
	inline int32_t* get_address_of_charLevel_26() { return &___charLevel_26; }
	inline void set_charLevel_26(int32_t value)
	{
		___charLevel_26 = value;
	}

	inline static int32_t get_offset_of_charLevelUps_27() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___charLevelUps_27)); }
	inline CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* get_charLevelUps_27() const { return ___charLevelUps_27; }
	inline CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406** get_address_of_charLevelUps_27() { return &___charLevelUps_27; }
	inline void set_charLevelUps_27(CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* value)
	{
		___charLevelUps_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charLevelUps_27), (void*)value);
	}

	inline static int32_t get_offset_of_SkillList_28() { return static_cast<int32_t>(offsetof(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F, ___SkillList_28)); }
	inline List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * get_SkillList_28() const { return ___SkillList_28; }
	inline List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 ** get_address_of_SkillList_28() { return &___SkillList_28; }
	inline void set_SkillList_28(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * value)
	{
		___SkillList_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillList_28), (void*)value);
	}
};


// ItemPickUp_SO
struct  ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// ItemTypeDefinitions ItemPickUp_SO::itemType
	int32_t ___itemType_4;
	// System.Int32 ItemPickUp_SO::itemAmount
	int32_t ___itemAmount_5;

public:
	inline static int32_t get_offset_of_itemType_4() { return static_cast<int32_t>(offsetof(ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51, ___itemType_4)); }
	inline int32_t get_itemType_4() const { return ___itemType_4; }
	inline int32_t* get_address_of_itemType_4() { return &___itemType_4; }
	inline void set_itemType_4(int32_t value)
	{
		___itemType_4 = value;
	}

	inline static int32_t get_offset_of_itemAmount_5() { return static_cast<int32_t>(offsetof(ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51, ___itemAmount_5)); }
	inline int32_t get_itemAmount_5() const { return ___itemAmount_5; }
	inline int32_t* get_address_of_itemAmount_5() { return &___itemAmount_5; }
	inline void set_itemAmount_5(int32_t value)
	{
		___itemAmount_5 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Quest_SO
struct  Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Quest_SO::title
	String_t* ___title_4;
	// System.String Quest_SO::description
	String_t* ___description_5;
	// System.Boolean Quest_SO::isActive
	bool ___isActive_6;
	// UnityEngine.GameObject Quest_SO::questCharacter
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___questCharacter_7;
	// Quest_SO/QuestGoal Quest_SO::goal
	QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * ___goal_8;
	// System.Boolean Quest_SO::isComplete
	bool ___isComplete_9;

public:
	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13, ___title_4)); }
	inline String_t* get_title_4() const { return ___title_4; }
	inline String_t** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(String_t* value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_4), (void*)value);
	}

	inline static int32_t get_offset_of_description_5() { return static_cast<int32_t>(offsetof(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13, ___description_5)); }
	inline String_t* get_description_5() const { return ___description_5; }
	inline String_t** get_address_of_description_5() { return &___description_5; }
	inline void set_description_5(String_t* value)
	{
		___description_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_5), (void*)value);
	}

	inline static int32_t get_offset_of_isActive_6() { return static_cast<int32_t>(offsetof(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13, ___isActive_6)); }
	inline bool get_isActive_6() const { return ___isActive_6; }
	inline bool* get_address_of_isActive_6() { return &___isActive_6; }
	inline void set_isActive_6(bool value)
	{
		___isActive_6 = value;
	}

	inline static int32_t get_offset_of_questCharacter_7() { return static_cast<int32_t>(offsetof(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13, ___questCharacter_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_questCharacter_7() const { return ___questCharacter_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_questCharacter_7() { return &___questCharacter_7; }
	inline void set_questCharacter_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___questCharacter_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questCharacter_7), (void*)value);
	}

	inline static int32_t get_offset_of_goal_8() { return static_cast<int32_t>(offsetof(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13, ___goal_8)); }
	inline QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * get_goal_8() const { return ___goal_8; }
	inline QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD ** get_address_of_goal_8() { return &___goal_8; }
	inline void set_goal_8(QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * value)
	{
		___goal_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goal_8), (void*)value);
	}

	inline static int32_t get_offset_of_isComplete_9() { return static_cast<int32_t>(offsetof(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13, ___isComplete_9)); }
	inline bool get_isComplete_9() const { return ___isComplete_9; }
	inline bool* get_address_of_isComplete_9() { return &___isComplete_9; }
	inline void set_isComplete_9(bool value)
	{
		___isComplete_9 = value;
	}
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Skill_SO
struct  Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Skill_SO::skillName
	String_t* ___skillName_4;
	// Skill_SO/SkillType Skill_SO::skillType
	int32_t ___skillType_5;
	// System.Int32 Skill_SO::skillAmout
	int32_t ___skillAmout_6;
	// System.Int32 Skill_SO::MPCost
	int32_t ___MPCost_7;
	// Skill_SO/SkillPattern Skill_SO::skillPattern
	int32_t ___skillPattern_8;

public:
	inline static int32_t get_offset_of_skillName_4() { return static_cast<int32_t>(offsetof(Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35, ___skillName_4)); }
	inline String_t* get_skillName_4() const { return ___skillName_4; }
	inline String_t** get_address_of_skillName_4() { return &___skillName_4; }
	inline void set_skillName_4(String_t* value)
	{
		___skillName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skillName_4), (void*)value);
	}

	inline static int32_t get_offset_of_skillType_5() { return static_cast<int32_t>(offsetof(Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35, ___skillType_5)); }
	inline int32_t get_skillType_5() const { return ___skillType_5; }
	inline int32_t* get_address_of_skillType_5() { return &___skillType_5; }
	inline void set_skillType_5(int32_t value)
	{
		___skillType_5 = value;
	}

	inline static int32_t get_offset_of_skillAmout_6() { return static_cast<int32_t>(offsetof(Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35, ___skillAmout_6)); }
	inline int32_t get_skillAmout_6() const { return ___skillAmout_6; }
	inline int32_t* get_address_of_skillAmout_6() { return &___skillAmout_6; }
	inline void set_skillAmout_6(int32_t value)
	{
		___skillAmout_6 = value;
	}

	inline static int32_t get_offset_of_MPCost_7() { return static_cast<int32_t>(offsetof(Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35, ___MPCost_7)); }
	inline int32_t get_MPCost_7() const { return ___MPCost_7; }
	inline int32_t* get_address_of_MPCost_7() { return &___MPCost_7; }
	inline void set_MPCost_7(int32_t value)
	{
		___MPCost_7 = value;
	}

	inline static int32_t get_offset_of_skillPattern_8() { return static_cast<int32_t>(offsetof(Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35, ___skillPattern_8)); }
	inline int32_t get_skillPattern_8() const { return ___skillPattern_8; }
	inline int32_t* get_address_of_skillPattern_8() { return &___skillPattern_8; }
	inline void set_skillPattern_8(int32_t value)
	{
		___skillPattern_8 = value;
	}
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// BattleSystem
struct  BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BattleBaseState BattleSystem::currentState
	BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * ___currentState_4;
	// BattleStartState BattleSystem::startState
	BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * ___startState_5;
	// BattleWhosNextState BattleSystem::whosNextState
	BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * ___whosNextState_6;
	// BattlePlayerState BattleSystem::playerState
	BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * ___playerState_7;
	// BattleEnemyState BattleSystem::enemyState
	BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * ___enemyState_8;
	// BattleEndState BattleSystem::endState
	BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * ___endState_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> BattleSystem::charactersInBattle
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___charactersInBattle_10;
	// UnityEngine.GameObject[] BattleSystem::EnemiesInBattle
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___EnemiesInBattle_11;
	// UnityEngine.GameObject[] BattleSystem::PlayersInBattle
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___PlayersInBattle_12;
	// System.Boolean BattleSystem::attack
	bool ___attack_13;
	// System.Boolean BattleSystem::frontRow
	bool ___frontRow_14;
	// System.Boolean BattleSystem::flee
	bool ___flee_15;
	// System.Boolean BattleSystem::returnToOverWorld
	bool ___returnToOverWorld_16;
	// System.Int32 BattleSystem::attackSlot
	int32_t ___attackSlot_17;
	// System.Int32 BattleSystem::TotalEnemyXP
	int32_t ___TotalEnemyXP_18;

public:
	inline static int32_t get_offset_of_currentState_4() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___currentState_4)); }
	inline BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * get_currentState_4() const { return ___currentState_4; }
	inline BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 ** get_address_of_currentState_4() { return &___currentState_4; }
	inline void set_currentState_4(BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * value)
	{
		___currentState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_4), (void*)value);
	}

	inline static int32_t get_offset_of_startState_5() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___startState_5)); }
	inline BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * get_startState_5() const { return ___startState_5; }
	inline BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 ** get_address_of_startState_5() { return &___startState_5; }
	inline void set_startState_5(BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * value)
	{
		___startState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startState_5), (void*)value);
	}

	inline static int32_t get_offset_of_whosNextState_6() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___whosNextState_6)); }
	inline BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * get_whosNextState_6() const { return ___whosNextState_6; }
	inline BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 ** get_address_of_whosNextState_6() { return &___whosNextState_6; }
	inline void set_whosNextState_6(BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * value)
	{
		___whosNextState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___whosNextState_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerState_7() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___playerState_7)); }
	inline BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * get_playerState_7() const { return ___playerState_7; }
	inline BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 ** get_address_of_playerState_7() { return &___playerState_7; }
	inline void set_playerState_7(BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * value)
	{
		___playerState_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerState_7), (void*)value);
	}

	inline static int32_t get_offset_of_enemyState_8() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___enemyState_8)); }
	inline BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * get_enemyState_8() const { return ___enemyState_8; }
	inline BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E ** get_address_of_enemyState_8() { return &___enemyState_8; }
	inline void set_enemyState_8(BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * value)
	{
		___enemyState_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyState_8), (void*)value);
	}

	inline static int32_t get_offset_of_endState_9() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___endState_9)); }
	inline BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * get_endState_9() const { return ___endState_9; }
	inline BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 ** get_address_of_endState_9() { return &___endState_9; }
	inline void set_endState_9(BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * value)
	{
		___endState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endState_9), (void*)value);
	}

	inline static int32_t get_offset_of_charactersInBattle_10() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___charactersInBattle_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_charactersInBattle_10() const { return ___charactersInBattle_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_charactersInBattle_10() { return &___charactersInBattle_10; }
	inline void set_charactersInBattle_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___charactersInBattle_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charactersInBattle_10), (void*)value);
	}

	inline static int32_t get_offset_of_EnemiesInBattle_11() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___EnemiesInBattle_11)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_EnemiesInBattle_11() const { return ___EnemiesInBattle_11; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_EnemiesInBattle_11() { return &___EnemiesInBattle_11; }
	inline void set_EnemiesInBattle_11(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___EnemiesInBattle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemiesInBattle_11), (void*)value);
	}

	inline static int32_t get_offset_of_PlayersInBattle_12() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___PlayersInBattle_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_PlayersInBattle_12() const { return ___PlayersInBattle_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_PlayersInBattle_12() { return &___PlayersInBattle_12; }
	inline void set_PlayersInBattle_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___PlayersInBattle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayersInBattle_12), (void*)value);
	}

	inline static int32_t get_offset_of_attack_13() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___attack_13)); }
	inline bool get_attack_13() const { return ___attack_13; }
	inline bool* get_address_of_attack_13() { return &___attack_13; }
	inline void set_attack_13(bool value)
	{
		___attack_13 = value;
	}

	inline static int32_t get_offset_of_frontRow_14() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___frontRow_14)); }
	inline bool get_frontRow_14() const { return ___frontRow_14; }
	inline bool* get_address_of_frontRow_14() { return &___frontRow_14; }
	inline void set_frontRow_14(bool value)
	{
		___frontRow_14 = value;
	}

	inline static int32_t get_offset_of_flee_15() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___flee_15)); }
	inline bool get_flee_15() const { return ___flee_15; }
	inline bool* get_address_of_flee_15() { return &___flee_15; }
	inline void set_flee_15(bool value)
	{
		___flee_15 = value;
	}

	inline static int32_t get_offset_of_returnToOverWorld_16() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___returnToOverWorld_16)); }
	inline bool get_returnToOverWorld_16() const { return ___returnToOverWorld_16; }
	inline bool* get_address_of_returnToOverWorld_16() { return &___returnToOverWorld_16; }
	inline void set_returnToOverWorld_16(bool value)
	{
		___returnToOverWorld_16 = value;
	}

	inline static int32_t get_offset_of_attackSlot_17() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___attackSlot_17)); }
	inline int32_t get_attackSlot_17() const { return ___attackSlot_17; }
	inline int32_t* get_address_of_attackSlot_17() { return &___attackSlot_17; }
	inline void set_attackSlot_17(int32_t value)
	{
		___attackSlot_17 = value;
	}

	inline static int32_t get_offset_of_TotalEnemyXP_18() { return static_cast<int32_t>(offsetof(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E, ___TotalEnemyXP_18)); }
	inline int32_t get_TotalEnemyXP_18() const { return ___TotalEnemyXP_18; }
	inline int32_t* get_address_of_TotalEnemyXP_18() { return &___TotalEnemyXP_18; }
	inline void set_TotalEnemyXP_18(int32_t value)
	{
		___TotalEnemyXP_18 = value;
	}
};


// BattleUI
struct  BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// BattleSystem BattleUI::battleSystem
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem_4;
	// BattleEndState BattleUI::endState
	BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * ___endState_5;
	// UnityEngine.GameObject[] BattleUI::EnemySprites
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___EnemySprites_6;
	// UnityEngine.GameObject[] BattleUI::PlayerSprites
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___PlayerSprites_7;
	// UnityEngine.GameObject BattleUI::TurnOrder
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TurnOrder_8;
	// UnityEngine.GameObject BattleUI::PlayerChoice
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerChoice_9;
	// UnityEngine.GameObject BattleUI::PlayerStat
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerStat_10;
	// UnityEngine.GameObject BattleUI::PlayerCharacters
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___PlayerCharacters_11;
	// UnityEngine.GameObject BattleUI::EnemyCharacters
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___EnemyCharacters_12;
	// UnityEngine.GameObject BattleUI::CharacterTurn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CharacterTurn_13;
	// UnityEngine.GameObject BattleUI::SkillChoice
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SkillChoice_14;
	// UnityEngine.GameObject BattleUI::btnSkill
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnSkill_15;
	// UnityEngine.GameObject BattleUI::EndBattlePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___EndBattlePanel_16;
	// UnityEngine.GameObject BattleUI::AttackOrBack
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AttackOrBack_17;
	// System.Boolean BattleUI::verticalInputInUse
	bool ___verticalInputInUse_18;
	// System.Boolean BattleUI::horizontalInputInUse
	bool ___horizontalInputInUse_19;
	// System.Boolean BattleUI::updateTurnOrder
	bool ___updateTurnOrder_20;
	// Skill_SO BattleUI::skill
	Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill_21;

public:
	inline static int32_t get_offset_of_battleSystem_4() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___battleSystem_4)); }
	inline BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * get_battleSystem_4() const { return ___battleSystem_4; }
	inline BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E ** get_address_of_battleSystem_4() { return &___battleSystem_4; }
	inline void set_battleSystem_4(BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * value)
	{
		___battleSystem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___battleSystem_4), (void*)value);
	}

	inline static int32_t get_offset_of_endState_5() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___endState_5)); }
	inline BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * get_endState_5() const { return ___endState_5; }
	inline BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 ** get_address_of_endState_5() { return &___endState_5; }
	inline void set_endState_5(BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * value)
	{
		___endState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___endState_5), (void*)value);
	}

	inline static int32_t get_offset_of_EnemySprites_6() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___EnemySprites_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_EnemySprites_6() const { return ___EnemySprites_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_EnemySprites_6() { return &___EnemySprites_6; }
	inline void set_EnemySprites_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___EnemySprites_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemySprites_6), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerSprites_7() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___PlayerSprites_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_PlayerSprites_7() const { return ___PlayerSprites_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_PlayerSprites_7() { return &___PlayerSprites_7; }
	inline void set_PlayerSprites_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___PlayerSprites_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerSprites_7), (void*)value);
	}

	inline static int32_t get_offset_of_TurnOrder_8() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___TurnOrder_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TurnOrder_8() const { return ___TurnOrder_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TurnOrder_8() { return &___TurnOrder_8; }
	inline void set_TurnOrder_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TurnOrder_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnOrder_8), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerChoice_9() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___PlayerChoice_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerChoice_9() const { return ___PlayerChoice_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerChoice_9() { return &___PlayerChoice_9; }
	inline void set_PlayerChoice_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerChoice_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerChoice_9), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerStat_10() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___PlayerStat_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerStat_10() const { return ___PlayerStat_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerStat_10() { return &___PlayerStat_10; }
	inline void set_PlayerStat_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerStat_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerStat_10), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerCharacters_11() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___PlayerCharacters_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_PlayerCharacters_11() const { return ___PlayerCharacters_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_PlayerCharacters_11() { return &___PlayerCharacters_11; }
	inline void set_PlayerCharacters_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___PlayerCharacters_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerCharacters_11), (void*)value);
	}

	inline static int32_t get_offset_of_EnemyCharacters_12() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___EnemyCharacters_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_EnemyCharacters_12() const { return ___EnemyCharacters_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_EnemyCharacters_12() { return &___EnemyCharacters_12; }
	inline void set_EnemyCharacters_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___EnemyCharacters_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyCharacters_12), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterTurn_13() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___CharacterTurn_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CharacterTurn_13() const { return ___CharacterTurn_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CharacterTurn_13() { return &___CharacterTurn_13; }
	inline void set_CharacterTurn_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CharacterTurn_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterTurn_13), (void*)value);
	}

	inline static int32_t get_offset_of_SkillChoice_14() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___SkillChoice_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SkillChoice_14() const { return ___SkillChoice_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SkillChoice_14() { return &___SkillChoice_14; }
	inline void set_SkillChoice_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SkillChoice_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkillChoice_14), (void*)value);
	}

	inline static int32_t get_offset_of_btnSkill_15() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___btnSkill_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnSkill_15() const { return ___btnSkill_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnSkill_15() { return &___btnSkill_15; }
	inline void set_btnSkill_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnSkill_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnSkill_15), (void*)value);
	}

	inline static int32_t get_offset_of_EndBattlePanel_16() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___EndBattlePanel_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_EndBattlePanel_16() const { return ___EndBattlePanel_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_EndBattlePanel_16() { return &___EndBattlePanel_16; }
	inline void set_EndBattlePanel_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___EndBattlePanel_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndBattlePanel_16), (void*)value);
	}

	inline static int32_t get_offset_of_AttackOrBack_17() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___AttackOrBack_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AttackOrBack_17() const { return ___AttackOrBack_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AttackOrBack_17() { return &___AttackOrBack_17; }
	inline void set_AttackOrBack_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AttackOrBack_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AttackOrBack_17), (void*)value);
	}

	inline static int32_t get_offset_of_verticalInputInUse_18() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___verticalInputInUse_18)); }
	inline bool get_verticalInputInUse_18() const { return ___verticalInputInUse_18; }
	inline bool* get_address_of_verticalInputInUse_18() { return &___verticalInputInUse_18; }
	inline void set_verticalInputInUse_18(bool value)
	{
		___verticalInputInUse_18 = value;
	}

	inline static int32_t get_offset_of_horizontalInputInUse_19() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___horizontalInputInUse_19)); }
	inline bool get_horizontalInputInUse_19() const { return ___horizontalInputInUse_19; }
	inline bool* get_address_of_horizontalInputInUse_19() { return &___horizontalInputInUse_19; }
	inline void set_horizontalInputInUse_19(bool value)
	{
		___horizontalInputInUse_19 = value;
	}

	inline static int32_t get_offset_of_updateTurnOrder_20() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___updateTurnOrder_20)); }
	inline bool get_updateTurnOrder_20() const { return ___updateTurnOrder_20; }
	inline bool* get_address_of_updateTurnOrder_20() { return &___updateTurnOrder_20; }
	inline void set_updateTurnOrder_20(bool value)
	{
		___updateTurnOrder_20 = value;
	}

	inline static int32_t get_offset_of_skill_21() { return static_cast<int32_t>(offsetof(BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D, ___skill_21)); }
	inline Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * get_skill_21() const { return ___skill_21; }
	inline Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 ** get_address_of_skill_21() { return &___skill_21; }
	inline void set_skill_21(Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * value)
	{
		___skill_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skill_21), (void*)value);
	}
};


// CameraFollows
struct  CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraFollows::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// System.Single CameraFollows::smoothTime
	float ___smoothTime_5;
	// UnityEngine.Vector3 CameraFollows::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_6;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_smoothTime_5() { return static_cast<int32_t>(offsetof(CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2, ___smoothTime_5)); }
	inline float get_smoothTime_5() const { return ___smoothTime_5; }
	inline float* get_address_of_smoothTime_5() { return &___smoothTime_5; }
	inline void set_smoothTime_5(float value)
	{
		___smoothTime_5 = value;
	}

	inline static int32_t get_offset_of_velocity_6() { return static_cast<int32_t>(offsetof(CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2, ___velocity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_6() const { return ___velocity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_6() { return &___velocity_6; }
	inline void set_velocity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_6 = value;
	}
};


// CharacterInventory
struct  CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_StaticFields
{
public:
	// CharacterInventory CharacterInventory::instance
	CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_StaticFields, ___instance_4)); }
	inline CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * get_instance_4() const { return ___instance_4; }
	inline CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// CharacterStats
struct  CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CharacterStats_SO CharacterStats::characterDefinition
	CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * ___characterDefinition_4;
	// CharacterInventory CharacterStats::charInv
	CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * ___charInv_5;
	// UnityEngine.GameObject CharacterStats::characterItemSlot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___characterItemSlot_6;
	// Healthbar CharacterStats::healthbar
	Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * ___healthbar_7;

public:
	inline static int32_t get_offset_of_characterDefinition_4() { return static_cast<int32_t>(offsetof(CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB, ___characterDefinition_4)); }
	inline CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * get_characterDefinition_4() const { return ___characterDefinition_4; }
	inline CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F ** get_address_of_characterDefinition_4() { return &___characterDefinition_4; }
	inline void set_characterDefinition_4(CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * value)
	{
		___characterDefinition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterDefinition_4), (void*)value);
	}

	inline static int32_t get_offset_of_charInv_5() { return static_cast<int32_t>(offsetof(CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB, ___charInv_5)); }
	inline CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * get_charInv_5() const { return ___charInv_5; }
	inline CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E ** get_address_of_charInv_5() { return &___charInv_5; }
	inline void set_charInv_5(CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * value)
	{
		___charInv_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charInv_5), (void*)value);
	}

	inline static int32_t get_offset_of_characterItemSlot_6() { return static_cast<int32_t>(offsetof(CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB, ___characterItemSlot_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_characterItemSlot_6() const { return ___characterItemSlot_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_characterItemSlot_6() { return &___characterItemSlot_6; }
	inline void set_characterItemSlot_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___characterItemSlot_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterItemSlot_6), (void*)value);
	}

	inline static int32_t get_offset_of_healthbar_7() { return static_cast<int32_t>(offsetof(CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB, ___healthbar_7)); }
	inline Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * get_healthbar_7() const { return ___healthbar_7; }
	inline Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 ** get_address_of_healthbar_7() { return &___healthbar_7; }
	inline void set_healthbar_7(Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * value)
	{
		___healthbar_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthbar_7), (void*)value);
	}
};


// CollisionHandler
struct  CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String CollisionHandler::SceneToLoad
	String_t* ___SceneToLoad_4;
	// System.String CollisionHandler::NextSceneSpawnPoint
	String_t* ___NextSceneSpawnPoint_5;
	// UnityEngine.GameObject CollisionHandler::spawnPoint
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___spawnPoint_6;

public:
	inline static int32_t get_offset_of_SceneToLoad_4() { return static_cast<int32_t>(offsetof(CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102, ___SceneToLoad_4)); }
	inline String_t* get_SceneToLoad_4() const { return ___SceneToLoad_4; }
	inline String_t** get_address_of_SceneToLoad_4() { return &___SceneToLoad_4; }
	inline void set_SceneToLoad_4(String_t* value)
	{
		___SceneToLoad_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SceneToLoad_4), (void*)value);
	}

	inline static int32_t get_offset_of_NextSceneSpawnPoint_5() { return static_cast<int32_t>(offsetof(CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102, ___NextSceneSpawnPoint_5)); }
	inline String_t* get_NextSceneSpawnPoint_5() const { return ___NextSceneSpawnPoint_5; }
	inline String_t** get_address_of_NextSceneSpawnPoint_5() { return &___NextSceneSpawnPoint_5; }
	inline void set_NextSceneSpawnPoint_5(String_t* value)
	{
		___NextSceneSpawnPoint_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextSceneSpawnPoint_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoint_6() { return static_cast<int32_t>(offsetof(CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102, ___spawnPoint_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_spawnPoint_6() const { return ___spawnPoint_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_spawnPoint_6() { return &___spawnPoint_6; }
	inline void set_spawnPoint_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___spawnPoint_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoint_6), (void*)value);
	}
};


// DialogueManger
struct  DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DialogueManger::DialogueBox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DialogueBox_4;
	// UnityEngine.UI.Text DialogueManger::nameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameText_5;
	// UnityEngine.UI.Text DialogueManger::dialogueText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dialogueText_6;
	// UnityEngine.UI.Image DialogueManger::picture
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___picture_7;
	// System.Collections.Generic.Queue`1<System.String> DialogueManger::sentences
	Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * ___sentences_8;
	// UnityEngine.Animator DialogueManger::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_9;

public:
	inline static int32_t get_offset_of_DialogueBox_4() { return static_cast<int32_t>(offsetof(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B, ___DialogueBox_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DialogueBox_4() const { return ___DialogueBox_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DialogueBox_4() { return &___DialogueBox_4; }
	inline void set_DialogueBox_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DialogueBox_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DialogueBox_4), (void*)value);
	}

	inline static int32_t get_offset_of_nameText_5() { return static_cast<int32_t>(offsetof(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B, ___nameText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameText_5() const { return ___nameText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameText_5() { return &___nameText_5; }
	inline void set_nameText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_5), (void*)value);
	}

	inline static int32_t get_offset_of_dialogueText_6() { return static_cast<int32_t>(offsetof(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B, ___dialogueText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dialogueText_6() const { return ___dialogueText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dialogueText_6() { return &___dialogueText_6; }
	inline void set_dialogueText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dialogueText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogueText_6), (void*)value);
	}

	inline static int32_t get_offset_of_picture_7() { return static_cast<int32_t>(offsetof(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B, ___picture_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_picture_7() const { return ___picture_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_picture_7() { return &___picture_7; }
	inline void set_picture_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___picture_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___picture_7), (void*)value);
	}

	inline static int32_t get_offset_of_sentences_8() { return static_cast<int32_t>(offsetof(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B, ___sentences_8)); }
	inline Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * get_sentences_8() const { return ___sentences_8; }
	inline Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D ** get_address_of_sentences_8() { return &___sentences_8; }
	inline void set_sentences_8(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * value)
	{
		___sentences_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sentences_8), (void*)value);
	}

	inline static int32_t get_offset_of_animator_9() { return static_cast<int32_t>(offsetof(DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B, ___animator_9)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_9() const { return ___animator_9; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_9() { return &___animator_9; }
	inline void set_animator_9(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_9), (void*)value);
	}
};


// DialogueTrigger
struct  DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Dialogue DialogueTrigger::dialogue
	Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * ___dialogue_4;
	// System.Boolean DialogueTrigger::withinTalkingRange
	bool ___withinTalkingRange_5;
	// UnityEngine.GameObject DialogueTrigger::dialogueBox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dialogueBox_6;

public:
	inline static int32_t get_offset_of_dialogue_4() { return static_cast<int32_t>(offsetof(DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B, ___dialogue_4)); }
	inline Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * get_dialogue_4() const { return ___dialogue_4; }
	inline Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 ** get_address_of_dialogue_4() { return &___dialogue_4; }
	inline void set_dialogue_4(Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * value)
	{
		___dialogue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogue_4), (void*)value);
	}

	inline static int32_t get_offset_of_withinTalkingRange_5() { return static_cast<int32_t>(offsetof(DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B, ___withinTalkingRange_5)); }
	inline bool get_withinTalkingRange_5() const { return ___withinTalkingRange_5; }
	inline bool* get_address_of_withinTalkingRange_5() { return &___withinTalkingRange_5; }
	inline void set_withinTalkingRange_5(bool value)
	{
		___withinTalkingRange_5 = value;
	}

	inline static int32_t get_offset_of_dialogueBox_6() { return static_cast<int32_t>(offsetof(DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B, ___dialogueBox_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dialogueBox_6() const { return ___dialogueBox_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dialogueBox_6() { return &___dialogueBox_6; }
	inline void set_dialogueBox_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dialogueBox_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogueBox_6), (void*)value);
	}
};


// GameManger
struct  GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Quest_SO> GameManger::ActiveQuests
	List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * ___ActiveQuests_4;
	// System.Collections.Generic.List`1<ItemPickUp_SO> GameManger::PlayerInventory
	List_1_t719B7099343D75876AA738F8F2405139C3EA21BF * ___PlayerInventory_5;
	// GameManger/PartyData GameManger::party
	PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * ___party_7;
	// GameManger/AreaData GameManger::areaData
	AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * ___areaData_8;
	// UnityEngine.GameObject GameManger::OverWorldCharacter
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___OverWorldCharacter_9;
	// UnityEngine.Transform GameManger::nextCharacterPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___nextCharacterPosition_10;
	// UnityEngine.Transform GameManger::lastCharacterPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___lastCharacterPosition_11;
	// System.String GameManger::sceneToLoad
	String_t* ___sceneToLoad_12;
	// System.String GameManger::lastScene
	String_t* ___lastScene_13;
	// System.String GameManger::sceneSpawnPoint
	String_t* ___sceneSpawnPoint_14;
	// UnityEngine.Vector3 GameManger::playerOverworldPositionOnBattle
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___playerOverworldPositionOnBattle_15;
	// GameBaseState GameManger::currentState
	GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * ___currentState_16;
	// GameBattleState GameManger::BattleState
	GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * ___BattleState_17;
	// GameOverWorldState GameManger::OverWorldState
	GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * ___OverWorldState_18;
	// GameMenuState GameManger::MenuState
	GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * ___MenuState_19;
	// System.Boolean GameManger::battleHasStarted
	bool ___battleHasStarted_20;
	// System.Boolean GameManger::bossBattle
	bool ___bossBattle_21;
	// System.Boolean GameManger::inMenuScreen
	bool ___inMenuScreen_22;
	// System.Collections.Generic.List`1<System.String> GameManger::EncounteredEnemyNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___EncounteredEnemyNames_23;
	// System.Collections.Generic.List`1<System.String> GameManger::OverworldEnemyFought
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___OverworldEnemyFought_24;

public:
	inline static int32_t get_offset_of_ActiveQuests_4() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___ActiveQuests_4)); }
	inline List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * get_ActiveQuests_4() const { return ___ActiveQuests_4; }
	inline List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 ** get_address_of_ActiveQuests_4() { return &___ActiveQuests_4; }
	inline void set_ActiveQuests_4(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * value)
	{
		___ActiveQuests_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ActiveQuests_4), (void*)value);
	}

	inline static int32_t get_offset_of_PlayerInventory_5() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___PlayerInventory_5)); }
	inline List_1_t719B7099343D75876AA738F8F2405139C3EA21BF * get_PlayerInventory_5() const { return ___PlayerInventory_5; }
	inline List_1_t719B7099343D75876AA738F8F2405139C3EA21BF ** get_address_of_PlayerInventory_5() { return &___PlayerInventory_5; }
	inline void set_PlayerInventory_5(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF * value)
	{
		___PlayerInventory_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PlayerInventory_5), (void*)value);
	}

	inline static int32_t get_offset_of_party_7() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___party_7)); }
	inline PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * get_party_7() const { return ___party_7; }
	inline PartyData_t4526868E24A37E230B89308E1F624E73B9951643 ** get_address_of_party_7() { return &___party_7; }
	inline void set_party_7(PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * value)
	{
		___party_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___party_7), (void*)value);
	}

	inline static int32_t get_offset_of_areaData_8() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___areaData_8)); }
	inline AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * get_areaData_8() const { return ___areaData_8; }
	inline AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 ** get_address_of_areaData_8() { return &___areaData_8; }
	inline void set_areaData_8(AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * value)
	{
		___areaData_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___areaData_8), (void*)value);
	}

	inline static int32_t get_offset_of_OverWorldCharacter_9() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___OverWorldCharacter_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_OverWorldCharacter_9() const { return ___OverWorldCharacter_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_OverWorldCharacter_9() { return &___OverWorldCharacter_9; }
	inline void set_OverWorldCharacter_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___OverWorldCharacter_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverWorldCharacter_9), (void*)value);
	}

	inline static int32_t get_offset_of_nextCharacterPosition_10() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___nextCharacterPosition_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_nextCharacterPosition_10() const { return ___nextCharacterPosition_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_nextCharacterPosition_10() { return &___nextCharacterPosition_10; }
	inline void set_nextCharacterPosition_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___nextCharacterPosition_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextCharacterPosition_10), (void*)value);
	}

	inline static int32_t get_offset_of_lastCharacterPosition_11() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___lastCharacterPosition_11)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_lastCharacterPosition_11() const { return ___lastCharacterPosition_11; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_lastCharacterPosition_11() { return &___lastCharacterPosition_11; }
	inline void set_lastCharacterPosition_11(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___lastCharacterPosition_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastCharacterPosition_11), (void*)value);
	}

	inline static int32_t get_offset_of_sceneToLoad_12() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___sceneToLoad_12)); }
	inline String_t* get_sceneToLoad_12() const { return ___sceneToLoad_12; }
	inline String_t** get_address_of_sceneToLoad_12() { return &___sceneToLoad_12; }
	inline void set_sceneToLoad_12(String_t* value)
	{
		___sceneToLoad_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneToLoad_12), (void*)value);
	}

	inline static int32_t get_offset_of_lastScene_13() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___lastScene_13)); }
	inline String_t* get_lastScene_13() const { return ___lastScene_13; }
	inline String_t** get_address_of_lastScene_13() { return &___lastScene_13; }
	inline void set_lastScene_13(String_t* value)
	{
		___lastScene_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastScene_13), (void*)value);
	}

	inline static int32_t get_offset_of_sceneSpawnPoint_14() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___sceneSpawnPoint_14)); }
	inline String_t* get_sceneSpawnPoint_14() const { return ___sceneSpawnPoint_14; }
	inline String_t** get_address_of_sceneSpawnPoint_14() { return &___sceneSpawnPoint_14; }
	inline void set_sceneSpawnPoint_14(String_t* value)
	{
		___sceneSpawnPoint_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneSpawnPoint_14), (void*)value);
	}

	inline static int32_t get_offset_of_playerOverworldPositionOnBattle_15() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___playerOverworldPositionOnBattle_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_playerOverworldPositionOnBattle_15() const { return ___playerOverworldPositionOnBattle_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_playerOverworldPositionOnBattle_15() { return &___playerOverworldPositionOnBattle_15; }
	inline void set_playerOverworldPositionOnBattle_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___playerOverworldPositionOnBattle_15 = value;
	}

	inline static int32_t get_offset_of_currentState_16() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___currentState_16)); }
	inline GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * get_currentState_16() const { return ___currentState_16; }
	inline GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C ** get_address_of_currentState_16() { return &___currentState_16; }
	inline void set_currentState_16(GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * value)
	{
		___currentState_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentState_16), (void*)value);
	}

	inline static int32_t get_offset_of_BattleState_17() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___BattleState_17)); }
	inline GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * get_BattleState_17() const { return ___BattleState_17; }
	inline GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A ** get_address_of_BattleState_17() { return &___BattleState_17; }
	inline void set_BattleState_17(GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * value)
	{
		___BattleState_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BattleState_17), (void*)value);
	}

	inline static int32_t get_offset_of_OverWorldState_18() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___OverWorldState_18)); }
	inline GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * get_OverWorldState_18() const { return ___OverWorldState_18; }
	inline GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 ** get_address_of_OverWorldState_18() { return &___OverWorldState_18; }
	inline void set_OverWorldState_18(GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * value)
	{
		___OverWorldState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverWorldState_18), (void*)value);
	}

	inline static int32_t get_offset_of_MenuState_19() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___MenuState_19)); }
	inline GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * get_MenuState_19() const { return ___MenuState_19; }
	inline GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 ** get_address_of_MenuState_19() { return &___MenuState_19; }
	inline void set_MenuState_19(GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * value)
	{
		___MenuState_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MenuState_19), (void*)value);
	}

	inline static int32_t get_offset_of_battleHasStarted_20() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___battleHasStarted_20)); }
	inline bool get_battleHasStarted_20() const { return ___battleHasStarted_20; }
	inline bool* get_address_of_battleHasStarted_20() { return &___battleHasStarted_20; }
	inline void set_battleHasStarted_20(bool value)
	{
		___battleHasStarted_20 = value;
	}

	inline static int32_t get_offset_of_bossBattle_21() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___bossBattle_21)); }
	inline bool get_bossBattle_21() const { return ___bossBattle_21; }
	inline bool* get_address_of_bossBattle_21() { return &___bossBattle_21; }
	inline void set_bossBattle_21(bool value)
	{
		___bossBattle_21 = value;
	}

	inline static int32_t get_offset_of_inMenuScreen_22() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___inMenuScreen_22)); }
	inline bool get_inMenuScreen_22() const { return ___inMenuScreen_22; }
	inline bool* get_address_of_inMenuScreen_22() { return &___inMenuScreen_22; }
	inline void set_inMenuScreen_22(bool value)
	{
		___inMenuScreen_22 = value;
	}

	inline static int32_t get_offset_of_EncounteredEnemyNames_23() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___EncounteredEnemyNames_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_EncounteredEnemyNames_23() const { return ___EncounteredEnemyNames_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_EncounteredEnemyNames_23() { return &___EncounteredEnemyNames_23; }
	inline void set_EncounteredEnemyNames_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___EncounteredEnemyNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EncounteredEnemyNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_OverworldEnemyFought_24() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE, ___OverworldEnemyFought_24)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_OverworldEnemyFought_24() const { return ___OverworldEnemyFought_24; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_OverworldEnemyFought_24() { return &___OverworldEnemyFought_24; }
	inline void set_OverworldEnemyFought_24(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___OverworldEnemyFought_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverworldEnemyFought_24), (void*)value);
	}
};

struct GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields
{
public:
	// GameManger GameManger::gameManger
	GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger_6;

public:
	inline static int32_t get_offset_of_gameManger_6() { return static_cast<int32_t>(offsetof(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields, ___gameManger_6)); }
	inline GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * get_gameManger_6() const { return ___gameManger_6; }
	inline GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE ** get_address_of_gameManger_6() { return &___gameManger_6; }
	inline void set_gameManger_6(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * value)
	{
		___gameManger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManger_6), (void*)value);
	}
};


// Healthbar
struct  Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider Healthbar::healthbar
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___healthbar_4;
	// UnityEngine.Color Healthbar::low
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___low_5;
	// UnityEngine.Color Healthbar::high
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___high_6;
	// UnityEngine.Vector3 Healthbar::offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___offset_7;

public:
	inline static int32_t get_offset_of_healthbar_4() { return static_cast<int32_t>(offsetof(Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7, ___healthbar_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_healthbar_4() const { return ___healthbar_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_healthbar_4() { return &___healthbar_4; }
	inline void set_healthbar_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___healthbar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthbar_4), (void*)value);
	}

	inline static int32_t get_offset_of_low_5() { return static_cast<int32_t>(offsetof(Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7, ___low_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_low_5() const { return ___low_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_low_5() { return &___low_5; }
	inline void set_low_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___low_5 = value;
	}

	inline static int32_t get_offset_of_high_6() { return static_cast<int32_t>(offsetof(Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7, ___high_6)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_high_6() const { return ___high_6; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_high_6() { return &___high_6; }
	inline void set_high_6(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___high_6 = value;
	}

	inline static int32_t get_offset_of_offset_7() { return static_cast<int32_t>(offsetof(Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7, ___offset_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_offset_7() const { return ___offset_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_offset_7() { return &___offset_7; }
	inline void set_offset_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___offset_7 = value;
	}
};


// ItemPickUp
struct  ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// ItemPickUp_SO ItemPickUp::itemDefinition
	ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * ___itemDefinition_4;

public:
	inline static int32_t get_offset_of_itemDefinition_4() { return static_cast<int32_t>(offsetof(ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4, ___itemDefinition_4)); }
	inline ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * get_itemDefinition_4() const { return ___itemDefinition_4; }
	inline ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 ** get_address_of_itemDefinition_4() { return &___itemDefinition_4; }
	inline void set_itemDefinition_4(ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * value)
	{
		___itemDefinition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemDefinition_4), (void*)value);
	}
};


// MainMenu
struct  MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManger MainMenu::gameManger
	GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger_4;
	// UnityEngine.GameObject MainMenu::btnNewGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___btnNewGame_5;
	// UnityEngine.GameObject MainMenu::panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_6;
	// UnityEngine.GameObject MainMenu::character1Button
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character1Button_7;
	// UnityEngine.GameObject MainMenu::character1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character1_8;
	// UnityEngine.GameObject MainMenu::character2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character2_9;
	// UnityEngine.GameObject MainMenu::character2Button
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character2Button_10;
	// UnityEngine.GameObject MainMenu::guardian
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___guardian_11;

public:
	inline static int32_t get_offset_of_gameManger_4() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___gameManger_4)); }
	inline GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * get_gameManger_4() const { return ___gameManger_4; }
	inline GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE ** get_address_of_gameManger_4() { return &___gameManger_4; }
	inline void set_gameManger_4(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * value)
	{
		___gameManger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManger_4), (void*)value);
	}

	inline static int32_t get_offset_of_btnNewGame_5() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___btnNewGame_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_btnNewGame_5() const { return ___btnNewGame_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_btnNewGame_5() { return &___btnNewGame_5; }
	inline void set_btnNewGame_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___btnNewGame_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnNewGame_5), (void*)value);
	}

	inline static int32_t get_offset_of_panel_6() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___panel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_6() const { return ___panel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_6() { return &___panel_6; }
	inline void set_panel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_6), (void*)value);
	}

	inline static int32_t get_offset_of_character1Button_7() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___character1Button_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character1Button_7() const { return ___character1Button_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character1Button_7() { return &___character1Button_7; }
	inline void set_character1Button_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character1Button_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character1Button_7), (void*)value);
	}

	inline static int32_t get_offset_of_character1_8() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___character1_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character1_8() const { return ___character1_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character1_8() { return &___character1_8; }
	inline void set_character1_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character1_8), (void*)value);
	}

	inline static int32_t get_offset_of_character2_9() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___character2_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character2_9() const { return ___character2_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character2_9() { return &___character2_9; }
	inline void set_character2_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character2_9), (void*)value);
	}

	inline static int32_t get_offset_of_character2Button_10() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___character2Button_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character2Button_10() const { return ___character2Button_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character2Button_10() { return &___character2Button_10; }
	inline void set_character2Button_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character2Button_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character2Button_10), (void*)value);
	}

	inline static int32_t get_offset_of_guardian_11() { return static_cast<int32_t>(offsetof(MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A, ___guardian_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_guardian_11() const { return ___guardian_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_guardian_11() { return &___guardian_11; }
	inline void set_guardian_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___guardian_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___guardian_11), (void*)value);
	}
};


// OverworldEnemy
struct  OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String OverworldEnemy::EnemyName
	String_t* ___EnemyName_4;

public:
	inline static int32_t get_offset_of_EnemyName_4() { return static_cast<int32_t>(offsetof(OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61, ___EnemyName_4)); }
	inline String_t* get_EnemyName_4() const { return ___EnemyName_4; }
	inline String_t** get_address_of_EnemyName_4() { return &___EnemyName_4; }
	inline void set_EnemyName_4(String_t* value)
	{
		___EnemyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnemyName_4), (void*)value);
	}
};


// OverworldMovement
struct  OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D OverworldMovement::body
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___body_4;
	// System.Single OverworldMovement::horizontal
	float ___horizontal_5;
	// System.Single OverworldMovement::vertical
	float ___vertical_6;
	// System.Single OverworldMovement::moveLimiter
	float ___moveLimiter_7;
	// System.Single OverworldMovement::runSpeed
	float ___runSpeed_8;
	// UnityEngine.SpriteRenderer OverworldMovement::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_9;
	// UnityEngine.Animator OverworldMovement::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_10;
	// UnityEngine.Vector2 OverworldMovement::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_11;

public:
	inline static int32_t get_offset_of_body_4() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___body_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_body_4() const { return ___body_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_body_4() { return &___body_4; }
	inline void set_body_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___body_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___body_4), (void*)value);
	}

	inline static int32_t get_offset_of_horizontal_5() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___horizontal_5)); }
	inline float get_horizontal_5() const { return ___horizontal_5; }
	inline float* get_address_of_horizontal_5() { return &___horizontal_5; }
	inline void set_horizontal_5(float value)
	{
		___horizontal_5 = value;
	}

	inline static int32_t get_offset_of_vertical_6() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___vertical_6)); }
	inline float get_vertical_6() const { return ___vertical_6; }
	inline float* get_address_of_vertical_6() { return &___vertical_6; }
	inline void set_vertical_6(float value)
	{
		___vertical_6 = value;
	}

	inline static int32_t get_offset_of_moveLimiter_7() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___moveLimiter_7)); }
	inline float get_moveLimiter_7() const { return ___moveLimiter_7; }
	inline float* get_address_of_moveLimiter_7() { return &___moveLimiter_7; }
	inline void set_moveLimiter_7(float value)
	{
		___moveLimiter_7 = value;
	}

	inline static int32_t get_offset_of_runSpeed_8() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___runSpeed_8)); }
	inline float get_runSpeed_8() const { return ___runSpeed_8; }
	inline float* get_address_of_runSpeed_8() { return &___runSpeed_8; }
	inline void set_runSpeed_8(float value)
	{
		___runSpeed_8 = value;
	}

	inline static int32_t get_offset_of_sprite_9() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___sprite_9)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_9() const { return ___sprite_9; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_9() { return &___sprite_9; }
	inline void set_sprite_9(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_9), (void*)value);
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_10() const { return ___animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_10), (void*)value);
	}

	inline static int32_t get_offset_of_movement_11() { return static_cast<int32_t>(offsetof(OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604, ___movement_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_11() const { return ___movement_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_11() { return &___movement_11; }
	inline void set_movement_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_11 = value;
	}
};


// QuestGiver
struct  QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Quest_SO QuestGiver::quest
	Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * ___quest_4;
	// UnityEngine.GameObject QuestGiver::questWindow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___questWindow_5;
	// UnityEngine.GameObject QuestGiver::questPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___questPanel_6;
	// UnityEngine.UI.Text QuestGiver::titleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___titleText_7;
	// UnityEngine.UI.Text QuestGiver::descriptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___descriptionText_8;
	// System.Boolean QuestGiver::withinQuestRange
	bool ___withinQuestRange_9;

public:
	inline static int32_t get_offset_of_quest_4() { return static_cast<int32_t>(offsetof(QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C, ___quest_4)); }
	inline Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * get_quest_4() const { return ___quest_4; }
	inline Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 ** get_address_of_quest_4() { return &___quest_4; }
	inline void set_quest_4(Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * value)
	{
		___quest_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___quest_4), (void*)value);
	}

	inline static int32_t get_offset_of_questWindow_5() { return static_cast<int32_t>(offsetof(QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C, ___questWindow_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_questWindow_5() const { return ___questWindow_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_questWindow_5() { return &___questWindow_5; }
	inline void set_questWindow_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___questWindow_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questWindow_5), (void*)value);
	}

	inline static int32_t get_offset_of_questPanel_6() { return static_cast<int32_t>(offsetof(QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C, ___questPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_questPanel_6() const { return ___questPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_questPanel_6() { return &___questPanel_6; }
	inline void set_questPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___questPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_titleText_7() { return static_cast<int32_t>(offsetof(QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C, ___titleText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_titleText_7() const { return ___titleText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_titleText_7() { return &___titleText_7; }
	inline void set_titleText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___titleText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_7), (void*)value);
	}

	inline static int32_t get_offset_of_descriptionText_8() { return static_cast<int32_t>(offsetof(QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C, ___descriptionText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_descriptionText_8() const { return ___descriptionText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_descriptionText_8() { return &___descriptionText_8; }
	inline void set_descriptionText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___descriptionText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___descriptionText_8), (void*)value);
	}

	inline static int32_t get_offset_of_withinQuestRange_9() { return static_cast<int32_t>(offsetof(QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C, ___withinQuestRange_9)); }
	inline bool get_withinQuestRange_9() const { return ___withinQuestRange_9; }
	inline bool* get_address_of_withinQuestRange_9() { return &___withinQuestRange_9; }
	inline void set_withinQuestRange_9(bool value)
	{
		___withinQuestRange_9 = value;
	}
};


// SplashSequence
struct  SplashSequence_tF73C0C4C47982BAF298C794B7CA1C41646594B5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CharacterStats_SO/CharLevelUps[]
struct CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * m_Items[1];

public:
	inline CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_First_TisRuntimeObject_mFC89774BB9348B656E12C9D2C73495237A31A399_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared (Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderByDescending_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m81DD6E76C1A490445BFC866C47621F135FBF9580_gshared (RuntimeObject* ___source0, Func_2_t78F21BB7B6C7D754A8C4D71ACB39668A8F967BA1 * ___keySelector1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
inline void List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean BattleEndState::EveryPlayerIsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleEndState_EveryPlayerIsDead_mF257C901EE577A1FA604DCD664E6738078FE3A75 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, const RuntimeMethod* method);
// System.Void BattleEndState::PlayerWins(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState_PlayerWins_mAE4CA7ACAEDA15293379BD608FCD07E2940B3C60 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void BattleEndState::GiveXPToAlivePlayers(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState_GiveXPToAlivePlayers_m9022030129A7A1C0BD424B65AB2ADFAF74F59158 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<CharacterStats>()
inline CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::ApplyExperience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_ApplyExperience_mE9158EFFB30F96A280DC6E4BD6A44B42D638238A (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___xpAmount0, const RuntimeMethod* method);
// System.Void BattleBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34 (BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * __this, const RuntimeMethod* method);
// System.Void BattleEnemyState::EnemyTurnAction(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEnemyState_EnemyTurnAction_mEFD46FCE68C595A1D83D70EE6B11BFAA8A6617C1 (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void BattleSystem::TransitionToState(BattleBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * ___state0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::First<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<!!0>)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mFC89774BB9348B656E12C9D2C73495237A31A399_gshared)(___source0, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Remove(!0)
inline bool List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void CharacterStats::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_TakeDamage_mF154444F5FC48749AB3305A5CC3F11BE3CB19070 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void BattlePlayerState::AttackEnemy(BattleSystem,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_AttackEnemy_m738259554CF3D71431C38F277B3C7251AE69EDE5 (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Quest_SO>::GetEnumerator()
inline Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D  List_1_GetEnumerator_m3C1E296AF7BAAD6919D3220FF48308CE0A6F4DA4 (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D  (*) (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Quest_SO>::get_Current()
inline Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * Enumerator_get_Current_mC4FDC631A0EAC150E6C525213A789D2D9CE97DCA_inline (Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D * __this, const RuntimeMethod* method)
{
	return ((  Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * (*) (Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean Quest_SO::IsQuestEnemy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quest_SO_IsQuestEnemy_m1D8813E6EFD96725CCBD1AB06047104171B53F2D (Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___killedCharacter0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Quest_SO>::MoveNext()
inline bool Enumerator_MoveNext_m39AD1FEAE1ED69C373012C3815391386C650A9E3 (Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Quest_SO>::Dispose()
inline void Enumerator_Dispose_mF84E0FEF3A19A2E4FCCC824DB717AC06E7487C88 (Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void BattlePlayerState::EndOfPlayersTurn(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_EndOfPlayersTurn_m92670B1527646FDC8AFBD701D3F6245C23309D1A (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void SkillPatternUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil__ctor_mA94E8A4A872AD7B9CFDDD6ED471B73863FDE0DF6 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, const RuntimeMethod* method);
// System.Void SkillPatternUtil::WhichSkillToUse(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_WhichSkillToUse_mDC5B4F33D3004B2B38CEA6D1D26DAB05015989FA (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void BattleStartState::PopulatePrefabsInBattle(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_PopulatePrefabsInBattle_m97AECB4C69CE9D6D1A91265F44BD999D4EA541B9 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void BattleStartState::PopulateCharactersInBattle(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_PopulateCharactersInBattle_m4133E4A5E980F3E606D6F2F1C634AFFA07F42FD4 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void BattleStartState::ResetCharactersHealthToFull(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_ResetCharactersHealthToFull_m4008497A9A7A7317FF09363E42969A644BB2AED4 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<UnityEngine.GameObject,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8 (Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m58A51FA150C3A0C8F5868AF68C4FEA3896ED1752_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<!!0> System.Linq.Enumerable::OrderByDescending<UnityEngine.GameObject,System.Single>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B (RuntimeObject* ___source0, Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 *, const RuntimeMethod*))Enumerable_OrderByDescending_TisRuntimeObject_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m81DD6E76C1A490445BFC866C47621F135FBF9580_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void CharacterStats_SO::FullyHealCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_FullyHealCharacter_mAE0AF244FDF5A8F9DD11335653B863FA55DAEB0F (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator BattleSystem::WaitForOneSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleSystem_WaitForOneSec_m9B219D0A6BBFC3745524A83373AF1009791CA11F (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void BattleSystem/<WaitForOneSec>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForOneSecU3Ed__19__ctor_mE5BB3B67022371C9613E1349F03736AAA8D90C2B (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void BattleStartState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState__ctor_m3022F1318798D26434968C25404EAC5258DA88F8 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, const RuntimeMethod* method);
// System.Void BattleWhosNextState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState__ctor_m989DF2EF146AC5B07220E8D710254722901BCCCE (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, const RuntimeMethod* method);
// System.Void BattlePlayerState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState__ctor_m4361475FD095B3658268C5B85467E32B0130597E (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, const RuntimeMethod* method);
// System.Void BattleEnemyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEnemyState__ctor_m3D5B29B38F8D18E6BFE025181BDF55BEE2C05E1C (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * __this, const RuntimeMethod* method);
// System.Void BattleEndState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState__ctor_m72C42D2EEA0315410848BA308658280A239EEAC8 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void BattleUI::InstantiateCharactersForBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_InstantiateCharactersForBattle_m6B32E49B9C2DA3A7A74CB208BD9164860B5C1EEA (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void BattleUI::UpdateHealthbars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_UpdateHealthbars_m8EDF18EECFF19D524BBC481645F17589D0616D0F (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void BattleUI::RemoveDeadCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_RemoveDeadCharacters_m04BE6CF0C3DB4845FAC74BF42A5E3BD57A926CD7 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void BattleUI::UpdateTurnOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_UpdateTurnOrder_m1C19A10F6700FD84314593DF24C2073DD9874288 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void BattleUI::EnemySelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_EnemySelection_mBCE2109D0621AE02DC731E33DDC3E0EAA2FA1CA6 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void BattleUI::DestroyEnemy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_DestroyEnemy_m7E06534C2A098F1102A548213C34C844773C920F (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, int32_t ___CharacterSlot0, const RuntimeMethod* method);
// System.Void BattleUI::DestroyPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_DestroyPlayer_mDF96C86E60A94D56D9234F0523A8A9937C6BEF37 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, int32_t ___CharacterSlot0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m7B696202BBB75B9EABAEA52D2D463236406A6302_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// System.Void Healthbar::SetHeatlh(CharacterStats_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Healthbar_SetHeatlh_mB00BF771148A86AC3B91C10CED50AD313F86403B (Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * __this, CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * ___characterDefinition0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 BattleUI::get_CoinFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BattleUI_get_CoinFlip_m35C47531F1E6968E89075199456E34D16632C86A (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void BattleUI::DeSelectAllSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_DeSelectAllSlots_m2AA46637CD0BA7EC4F5A868EA6D8ACF5B6C4E26C (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void BattleUI/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m82E5A997E1F91026E3D897E6AC321C89DD7A22D8 (U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Skill_SO>::get_Count()
inline int32_t List_1_get_Count_mEFB7A71C1D72EE5CBC0AA4EE8F8754660CD82107_inline (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void BattleUI/<>c__DisplayClass27_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1__ctor_mA891A57FFF50F6086A907C89EB11A593BB7E33D0 (U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Skill_SO>::get_Item(System.Int32)
inline Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_inline (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * (*) (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void BattleUI::SelectProperSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_SelectProperSlots_mED02583109EFD4D66BDBC59AF4F5F14EFDF9BFFC (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButton(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void BattleUI::AttackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_AttackButton_mB71EF5452A46F7432BA1C059BBD26D4EE91D5989 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method);
// System.Void BattleWhosNextState::CheckCharactersHealth(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_CheckCharactersHealth_m08EE22F05DB791D05128B1F38BE9EFFD2802670B (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Boolean BattleWhosNextState::DidEveryoneTakeATurn(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleWhosNextState_DidEveryoneTakeATurn_m3125747E1A352A175838AB9BA42791B818D066E9 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void BattleWhosNextState::TransitionToCorrectState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_TransitionToCorrectState_mDB56826C68F9AD318224533326CC50FB9378FBEC (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Boolean BattleWhosNextState::AreAllEnemiesDead(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleWhosNextState_AreAllEnemiesDead_mB07EA9355252193E147BE4426037EE3F48B86C18 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Boolean BattleWhosNextState::AreAllPlayerDead(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleWhosNextState_AreAllPlayerDead_mA440D2A3411B628F25049951DF29F3708BC2FD94 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// System.Void BattleWhosNextState::RePopulateCharactersInBattle(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_RePopulateCharactersInBattle_mDA37EDCB3BFC646C697EE6018C34C65F39C3D39D (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Transform>()
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::ApplyHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_ApplyHealth_m0193AF39CECA1F6BBF25B4EFC669D1131E0740E7 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___healthAmount0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::ApplyMagic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_ApplyMagic_m1B0240F7831E3B8200C610E9A710835395D11DA3 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___magicAmount0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::GiveWeath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_GiveWeath_mD51C00DE253FB8F3D1C51E6B72C46C4417D1108B (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___wealthAmount0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_TakeDamage_mD4D4F5727E133E0A139D62F5ED1F03A491A7BCC8 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::SpendMagic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_SpendMagic_m81FFF00D2E148FABC09D44FC35FED082B17CB42A (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Boolean CharacterStats_SO::UnEquipItem(ItemPickUp,CharacterInventory,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterStats_SO_UnEquipItem_mD6DC460B68D00D3FD7387AA17FFEA6AAC97A3B04 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___itemPickup0, CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * ___charInventory1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Slot2, const RuntimeMethod* method);
// System.Void CharacterStats_SO::Equip(ItemPickUp,CharacterInventory,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_Equip_m81D50FEDE63F90375DD7F6921D9F2F7483FF9CF6 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___itemPickup0, CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * ___charInventory1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Slot2, const RuntimeMethod* method);
// ItemPickUp CharacterStats_SO::get_weapon()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method);
// System.Boolean CharacterStats_SO::IsMaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterStats_SO_IsMaxLevel_mD300249E5B3926C2E4FF68045CEE2CFB23505577 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method);
// System.Void CharacterStats_SO::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_LevelUp_mF6078C34F8AD7200E2B8B9A6B828A4AE2B21415A (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method);
// System.Void CharacterStats_SO::set_weapon(ItemPickUp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterStats_SO_set_weapon_m0D1C2DE0C413D7699558FFE10586B2D33148C149_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method);
// System.Void CharacterStats_SO::set_shield(ItemPickUp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterStats_SO_set_shield_m9929DF23114361952FADA767CA387477C5C703C7_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method);
// ItemPickUp CharacterStats_SO::get_shield()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_shield_mD81FC7CC77F5686CE11876A5D4C08E5D98C32F45_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method);
// System.Void CharacterStats_SO::set_accessory(ItemPickUp)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterStats_SO_set_accessory_m76858843C2304B65B6B8BD734075C34928DAB107_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method);
// ItemPickUp CharacterStats_SO::get_accessory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_accessory_m7DB6D247B2B2381B637C210EA5B4EAC69C848F55_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Skill_SO>::.ctor()
inline void List_1__ctor_mE9EFADE4AF37789D015781E1FDF9BF48094BF902 (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.String>::.ctor()
inline void Queue_1__ctor_m3D79180EA2D2D7897016B383AA035A8B0AE08591 (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void DialogueManger::DisplayNextSentence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_DisplayNextSentence_m0272C70E00DEE92A27015BDA6F13F82F0A6D1067 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.String>::Clear()
inline void Queue_1_Clear_m1D8BC0D358085A0C76DC4EBB50B79781B9F8EB45 (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.String>::Enqueue(!0)
inline void Queue_1_Enqueue_mD31335DFB51B4E0C68657790AAF0963EA8E7A059 (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D *, String_t*, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.String>::get_Count()
inline int32_t Queue_1_get_Count_mD7C8C22580B59BE7F224C7E5AC3C079592F54D58_inline (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void DialogueManger::EndDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_EndDialogue_m608143D087B36B20395BD29BAF4E0716A063BB43 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.String>::Dequeue()
inline String_t* Queue_1_Dequeue_m8E582C120D348CF28DEECA38CB63A609FD1BD9B7 (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DialogueManger::TypeSentence(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueManger_TypeSentence_m434F504BB25D14805BBBA07B41FDEB3C25416F31 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, String_t* ___sentence0, const RuntimeMethod* method);
// System.Void DialogueManger/<TypeSentence>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__10__ctor_m6C9918F6751FC851B1175B665A3D35E0DC53C0B3 (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<DialogueManger>()
inline DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * Object_FindObjectOfType_TisDialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B_mAD343E93EA70455C0779C7B49A4A6DD472038D71 (const RuntimeMethod* method)
{
	return ((  DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void DialogueManger::StartDialogue(Dialogue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_StartDialogue_m655C6686A41B6F73033B629243CBA973E581F776 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * ___dialogue0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void DialogueTrigger::TriggerDialoge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTrigger_TriggerDialoge_m7C5396A125135ED3035C3DF069FAC2AE601E9BFE (DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void GameManger::TransistinoToState(GameBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_TransistinoToState_m259442641C2F649E79C13C11D738D614B4911063 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * ___state0, const RuntimeMethod* method);
// System.Void GameBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBaseState__ctor_mE9E423D90DE8C71638B9D45129F30DAB24A80FFD (GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * __this, const RuntimeMethod* method);
// System.Void GameManger::ThereShouldOnlyBeOneGameManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_ThereShouldOnlyBeOneGameManager_mD02488C2DFA643BB22DD81CF056E509D3426EBF3 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<Quest_SO>::.ctor()
inline void List_1__ctor_m42466EBBF62A6A6A56C47AE017A98052DEA80F72 (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ItemPickUp_SO>::.ctor()
inline void List_1__ctor_m9B363B2E0DE0E28EA74506118BB8F2F046749102 (List_1_t719B7099343D75876AA738F8F2405139C3EA21BF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t719B7099343D75876AA738F8F2405139C3EA21BF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameBattleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBattleState__ctor_m1A87B56963133A0F4F7D039CFA200490D8309A8B (GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * __this, const RuntimeMethod* method);
// System.Void GameOverWorldState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWorldState__ctor_m46337E45BA69ABE6F767F9C49770FC451F211F04 (GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * __this, const RuntimeMethod* method);
// System.Void GameMenuState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuState__ctor_m0F03FFD166808635AA8D38006A08C56FBA1AEB3D (GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameManger::ThereShouldOnlyBeOneOverWorldCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_ThereShouldOnlyBeOneOverWorldCharacter_m6BC10015FE360CC57883D364ED88124A87C53864 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method);
// System.Void GameOverWorldState::StartBattle(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWorldState_StartBattle_mA111D59BB3368DCE19CCB146118FC33321A72FB5 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Slider_get_fillRect_m4D02B70BFAA5C003B34E8132C10CB80A0F022CAA_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Slider_get_normalizedValue_m09A06767F3E8064200CA1C954AF5C362C5138EC3 (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean OverworldEnemy::RegularEnemyTouchesPlayer(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OverworldEnemy_RegularEnemyTouchesPlayer_mFD3DB46869EBC42A2E29B559ED981C9E5187334F (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(!0)
inline bool List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Void OverworldMovement::KeepSpriteFromSpinning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_KeepSpriteFromSpinning_m45775DD5779A1958AF4C5E315B7165385287932C (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void OverworldMovement::LimitMovementSpeedDiagonally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_LimitMovementSpeedDiagonally_mC8DE90D1E544926087E85BF69816B896F72EE087 (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void OverworldMovement::LoadNextScene(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_LoadNextScene_m5978C754CC5A6EA4B5AAE0C1E83C3DA8010E8ABA (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<CollisionHandler>()
inline CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * GameObject_GetComponent_TisCollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102_m8F58F3D30C95AAF7CD3068E8A7008C7CEC3744EB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameManger::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_LoadNextScene_m2E92FD16FFA6EECC205FC3DA1C2D616945B15DD3 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method);
// System.Void QuestGiver::OpenQuestWIndow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_OpenQuestWIndow_m80CE2ADCB1E51D54076C8FE59D9A2BC54EE0EB67 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Quest_SO>::Add(!0)
inline void List_1_Add_mCE7987B8D9203CE08CD90F89CF7A0DCB8F488F5C (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * __this, Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 *, Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void SkillPatternUtil::SingleSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_SingleSlot_mA0794E3FE378C449D2D97C895CD4DD0D0D772894 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::DoubleSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_DoubleSlot_mBE7FBE13C17FCB46253DBDB2FCE8434B1B40A743 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::DoubleEveryOtherSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_DoubleEveryOtherSlot_mD422133FF34DDEDA7AD8105FC1030CBABE8D4C3F (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::TripleSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_TripleSlot_m6C2DC98795815A8DEBDF3B7BE1DAD16ECEAE03AC (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::TripleEveryOtherSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_TripleEveryOtherSlot_m8502A2D88D41F8CBAA983F70D9280519CF1B2B61 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::QuadSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_QuadSlot_m1D794A9BB328F0A9287BE5B0BA67574995208E20 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::Quad2X2Slot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_Quad2X2Slot_m2B23422263C1B20E12B94CD61C79F5961C763654 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Void SkillPatternUtil::PentaSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_PentaSlot_mE58365329C03A71E57EB3B4BD79BC7E5B8834453 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Int32 SkillPatternUtil::GetDamageType(BattleSystem,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkillPatternUtil_GetDamageType_m309ACC33172C71BF219E50CBF7EF623545BAB839 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill1, const RuntimeMethod* method);
// System.Void SkillPatternUtil::AttackEnemyWithSkill(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method);
// System.Collections.IEnumerator SplashSequence::ToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashSequence_ToMainMenu_m60AC1BB04E4408F3F625630A2E83ED75DC542744 (SplashSequence_tF73C0C4C47982BAF298C794B7CA1C41646594B5D * __this, const RuntimeMethod* method);
// System.Void SplashSequence/<ToMainMenu>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToMainMenuU3Ed__1__ctor_m5E61AC8DB8AD89E408BF7B0B98D50A7126DD101C (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void BattleStartState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m30C7C919FE568CB8451B8E1BA44901810C997051 (U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void BattleWhosNextState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0F9939F61174E85BE03E445ED17DE4BE0EEB0E4E (U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * __this, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34 (BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleEndState::EnterState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState_EnterState_mDE5C15403839C7D5AE991C60A024B03AC6A813D9 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (battleSystem.flee)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		bool L_1 = L_0->get_flee_15();
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// GameManger.gameManger.OverworldEnemyFought.Clear();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = L_2->get_OverworldEnemyFought_24();
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_3, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// GameManger.gameManger.playerOverworldPositionOnBattle = Vector3.zero; //starting area
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_4 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		L_4->set_playerOverworldPositionOnBattle_15(L_5);
		// }
		return;
	}

IL_0027:
	{
		// if (EveryPlayerIsDead())
		bool L_6;
		L_6 = BattleEndState_EveryPlayerIsDead_mF257C901EE577A1FA604DCD664E6738078FE3A75(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		// PlayerWins(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_7 = ___battleSystem0;
		BattleEndState_PlayerWins_mAE4CA7ACAEDA15293379BD608FCD07E2940B3C60(__this, L_7, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void BattleEndState::PlayerWins(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState_PlayerWins_mAE4CA7ACAEDA15293379BD608FCD07E2940B3C60 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GameManger.gameManger.bossBattle)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_1 = L_0->get_bossBattle_21();
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// GiveXPToAlivePlayers(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = ___battleSystem0;
		BattleEndState_GiveXPToAlivePlayers_m9022030129A7A1C0BD424B65AB2ADFAF74F59158(__this, L_2, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Boolean BattleEndState::EveryPlayerIsDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleEndState_EveryPlayerIsDead_mF257C901EE577A1FA604DCD664E6738078FE3A75 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_1 = L_0->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = L_1->get_PlayerParty_1();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_3;
		L_3 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_2, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0034;
		}

IL_0017:
		{
			// foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// if(Player.GetComponent<CharacterStats>().characterDefinition.currentHealth > 0)
			CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_5;
			L_5 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_4, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
			CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_6 = L_5->get_characterDefinition_4();
			int32_t L_7 = L_6->get_currentHealth_11();
			if ((((int32_t)L_7) <= ((int32_t)0)))
			{
				goto IL_0034;
			}
		}

IL_0030:
		{
			// return false;
			V_1 = (bool)0;
			IL2CPP_LEAVE(0x4F, FINALLY_003f);
		}

IL_0034:
		{
			// foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
			bool L_8;
			L_8 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0017;
			}
		}

IL_003d:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4F, IL_004f)
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
	}

IL_004d:
	{
		// return true;
		return (bool)1;
	}

IL_004f:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Void BattleEndState::Update(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState_Update_mD7B10781218F84CC90029DBADC3784B6CF6B362E (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Return) && !GameManger.gameManger.bossBattle)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)13), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_1 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_2 = L_1->get_bossBattle_21();
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// GameManger.gameManger.battleHasStarted = false;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_3 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_3->set_battleHasStarted_20((bool)0);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void BattleEndState::GiveXPToAlivePlayers(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState_GiveXPToAlivePlayers_m9022030129A7A1C0BD424B65AB2ADFAF74F59158 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_1 = L_0->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = L_1->get_PlayerParty_1();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_3;
		L_3 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_2, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0017:
		{
			// foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
			L_4 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_4;
			// if (Player.GetComponent<CharacterStats>().characterDefinition.currentHealth > 0)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
			CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_6;
			L_6 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_5, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
			CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_7 = L_6->get_characterDefinition_4();
			int32_t L_8 = L_7->get_currentHealth_11();
			if ((((int32_t)L_8) <= ((int32_t)0)))
			{
				goto IL_0048;
			}
		}

IL_0032:
		{
			// Player.GetComponent<CharacterStats>().characterDefinition.ApplyExperience(battleSystem.TotalEnemyXP);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
			CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_10;
			L_10 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_9, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
			CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_11 = L_10->get_characterDefinition_4();
			BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_12 = ___battleSystem0;
			int32_t L_13 = L_12->get_TotalEnemyXP_18();
			CharacterStats_SO_ApplyExperience_mE9158EFFB30F96A280DC6E4BD6A44B42D638238A(L_11, L_13, /*hidden argument*/NULL);
		}

IL_0048:
		{
			// foreach (GameObject Player in GameManger.gameManger.party.PlayerParty)
			bool L_14;
			L_14 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0017;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x61, IL_0061)
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void BattleEndState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEndState__ctor_m72C42D2EEA0315410848BA308658280A239EEAC8 (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * __this, const RuntimeMethod* method)
{
	{
		BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleEnemyState::EnterState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEnemyState_EnterState_mFD3C9909F3D3882E57785CA0C9B91B57D6FD8789 (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// EnemyTurnAction(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		BattleEnemyState_EnemyTurnAction_mEFD46FCE68C595A1D83D70EE6B11BFAA8A6617C1(__this, L_0, /*hidden argument*/NULL);
		// battleSystem.TransitionToState(battleSystem.whosNextState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = ___battleSystem0;
		BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * L_3 = L_2->get_whosNextState_6();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_1, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleEnemyState::Update(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEnemyState_Update_m4CDD5830D10488C20421660DE1CAC335AB2312B5 (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BattleEnemyState::EnemyTurnAction(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEnemyState_EnemyTurnAction_mEFD46FCE68C595A1D83D70EE6B11BFAA8A6617C1 (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral611C901A7EF81AF31F8AC53AD8E49AD7792222E1);
		s_Il2CppMethodInitialized = true;
	}
	CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// CharacterStats Enemy = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = L_0->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_1, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_3;
		L_3 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_2, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		V_0 = L_3;
		// int PlayerSlot = Random.Range(0, 3);
		int32_t L_4;
		L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		V_1 = L_4;
		// if (battleSystem.PlayersInBattle[PlayerSlot] == null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_5 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_PlayersInBattle_12();
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		// battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_11 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = L_11->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_13 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = L_13->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_14, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		bool L_16;
		L_16 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_12, L_15, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// Debug.Log("Turn Skipped");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral611C901A7EF81AF31F8AC53AD8E49AD7792222E1, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_004b:
	{
		// CharacterStats Player = battleSystem.PlayersInBattle[PlayerSlot].GetComponent<CharacterStats>();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_17 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = L_17->get_PlayersInBattle_12();
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_22;
		L_22 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_21, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		// Player.TakeDamage(Enemy.characterDefinition.currentAttack);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_23 = L_22;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_24 = V_0;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_25 = L_24->get_characterDefinition_4();
		int32_t L_26 = L_25->get_currentAttack_16();
		CharacterStats_TakeDamage_mF154444F5FC48749AB3305A5CC3F11BE3CB19070(L_23, L_26, /*hidden argument*/NULL);
		// battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_27 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_28 = L_27->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_29 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_30 = L_29->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_30, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		bool L_32;
		L_32 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_28, L_31, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// if (Player.characterDefinition.currentHealth <= 0)
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_33 = L_23->get_characterDefinition_4();
		int32_t L_34 = L_33->get_currentHealth_11();
		// }
		return;
	}
}
// System.Void BattleEnemyState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleEnemyState__ctor_m3D5B29B38F8D18E6BFE025181BDF55BEE2C05E1C (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * __this, const RuntimeMethod* method)
{
	{
		BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattlePlayerState::EnterState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_EnterState_m88FAEA13D47B757539C8FF07E70377A9BD7F0AFF (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BattlePlayerState::Update(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_Update_m3ABA0489F33EED61BFD8507C77867C08676BB2C1 (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// if (battleSystem.attackSlot != 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		int32_t L_1 = L_0->get_attackSlot_17();
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// AttackEnemy(battleSystem, battleSystem.attackSlot);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		int32_t L_4 = L_3->get_attackSlot_17();
		BattlePlayerState_AttackEnemy_m738259554CF3D71431C38F277B3C7251AE69EDE5(__this, L_2, L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// if (battleSystem.flee)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_5 = ___battleSystem0;
		bool L_6 = L_5->get_flee_15();
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		// battleSystem.TransitionToState(battleSystem.endState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_7 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_8 = ___battleSystem0;
		BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * L_9 = L_8->get_endState_9();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void BattlePlayerState::AttackEnemy(BattleSystem,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_AttackEnemy_m738259554CF3D71431C38F277B3C7251AE69EDE5 (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mF84E0FEF3A19A2E4FCCC824DB717AC06E7487C88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39AD1FEAE1ED69C373012C3815391386C650A9E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC4FDC631A0EAC150E6C525213A789D2D9CE97DCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3C1E296AF7BAAD6919D3220FF48308CE0A6F4DA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * V_0 = NULL;
	CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * V_1 = NULL;
	Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// CharacterStats Player = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = L_0->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_1, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_3;
		L_3 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_2, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		V_0 = L_3;
		// if (battleSystem.EnemiesInBattle[EnemySlot - 1] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4->get_EnemiesInBattle_11();
		int32_t L_6 = ___EnemySlot1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		// Enemy = battleSystem.EnemiesInBattle[EnemySlot - 1].GetComponent<CharacterStats>();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_10 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_EnemiesInBattle_11();
		int32_t L_12 = ___EnemySlot1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_15;
		L_15 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_14, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		V_1 = L_15;
		// }
		goto IL_003d;
	}

IL_0035:
	{
		// battleSystem.attackSlot = 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_16 = ___battleSystem0;
		L_16->set_attackSlot_17(0);
		// return;
		return;
	}

IL_003d:
	{
		// Enemy.TakeDamage(Player.characterDefinition.currentAttack);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_17 = V_1;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_18 = V_0;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_19 = L_18->get_characterDefinition_4();
		int32_t L_20 = L_19->get_currentAttack_16();
		CharacterStats_TakeDamage_mF154444F5FC48749AB3305A5CC3F11BE3CB19070(L_17, L_20, /*hidden argument*/NULL);
		// if (Enemy.characterDefinition.currentHealth <= 0)
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_21 = V_1;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_22 = L_21->get_characterDefinition_4();
		int32_t L_23 = L_22->get_currentHealth_11();
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		// foreach (Quest_SO quest in GameManger.gameManger.ActiveQuests)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_24 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * L_25 = L_24->get_ActiveQuests_4();
		Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D  L_26;
		L_26 = List_1_GetEnumerator_m3C1E296AF7BAAD6919D3220FF48308CE0A6F4DA4(L_25, /*hidden argument*/List_1_GetEnumerator_m3C1E296AF7BAAD6919D3220FF48308CE0A6F4DA4_RuntimeMethod_var);
		V_2 = L_26;
	}

IL_006c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0085;
		}

IL_006e:
		{
			// foreach (Quest_SO quest in GameManger.gameManger.ActiveQuests)
			Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_27;
			L_27 = Enumerator_get_Current_mC4FDC631A0EAC150E6C525213A789D2D9CE97DCA_inline((Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D *)(&V_2), /*hidden argument*/Enumerator_get_Current_mC4FDC631A0EAC150E6C525213A789D2D9CE97DCA_RuntimeMethod_var);
			// quest.IsQuestEnemy(battleSystem.EnemiesInBattle[EnemySlot - 1]);
			BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_28 = ___battleSystem0;
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_29 = L_28->get_EnemiesInBattle_11();
			int32_t L_30 = ___EnemySlot1;
			int32_t L_31 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
			bool L_33;
			L_33 = Quest_SO_IsQuestEnemy_m1D8813E6EFD96725CCBD1AB06047104171B53F2D(L_27, L_32, /*hidden argument*/NULL);
		}

IL_0085:
		{
			// foreach (Quest_SO quest in GameManger.gameManger.ActiveQuests)
			bool L_34;
			L_34 = Enumerator_MoveNext_m39AD1FEAE1ED69C373012C3815391386C650A9E3((Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m39AD1FEAE1ED69C373012C3815391386C650A9E3_RuntimeMethod_var);
			if (L_34)
			{
				goto IL_006e;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0x9E, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF84E0FEF3A19A2E4FCCC824DB717AC06E7487C88((Enumerator_t322398185EDEDE0F2CF8B3E1463A05333C914D3D *)(&V_2), /*hidden argument*/Enumerator_Dispose_mF84E0FEF3A19A2E4FCCC824DB717AC06E7487C88_RuntimeMethod_var);
		IL2CPP_END_FINALLY(144)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9E, IL_009e)
	}

IL_009e:
	{
		// battleSystem.TotalEnemyXP += Enemy.characterDefinition.charExperience;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_35 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_36 = L_35;
		int32_t L_37 = L_36->get_TotalEnemyXP_18();
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_38 = V_1;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_39 = L_38->get_characterDefinition_4();
		int32_t L_40 = L_39->get_charExperience_25();
		L_36->set_TotalEnemyXP_18(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_40)));
	}

IL_00b6:
	{
		// EndOfPlayersTurn(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_41 = ___battleSystem0;
		BattlePlayerState_EndOfPlayersTurn_m92670B1527646FDC8AFBD701D3F6245C23309D1A(__this, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattlePlayerState::UseSkill(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_UseSkill_mD2DA45EFC7648BC8FB37AB76C788F7499A6B60B9 (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SkillPatternUtil skillPattern = new SkillPatternUtil();
		SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * L_0 = (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 *)il2cpp_codegen_object_new(SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74_il2cpp_TypeInfo_var);
		SkillPatternUtil__ctor_mA94E8A4A872AD7B9CFDDD6ED471B73863FDE0DF6(L_0, /*hidden argument*/NULL);
		// skillPattern.WhichSkillToUse(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		int32_t L_2 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_3 = ___skill2;
		SkillPatternUtil_WhichSkillToUse_mDC5B4F33D3004B2B38CEA6D1D26DAB05015989FA(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		// EndOfPlayersTurn(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = ___battleSystem0;
		BattlePlayerState_EndOfPlayersTurn_m92670B1527646FDC8AFBD701D3F6245C23309D1A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattlePlayerState::EndOfPlayersTurn(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState_EndOfPlayersTurn_m92670B1527646FDC8AFBD701D3F6245C23309D1A (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// battleSystem.attack = false;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		L_0->set_attack_13((bool)0);
		// battleSystem.attackSlot = 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		L_1->set_attackSlot_17(0);
		// battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_3 = L_2->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = L_4->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_5, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		bool L_7;
		L_7 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_3, L_6, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// battleSystem.TransitionToState(battleSystem.whosNextState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_8 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_9 = ___battleSystem0;
		BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * L_10 = L_9->get_whosNextState_6();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_8, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattlePlayerState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattlePlayerState__ctor_m4361475FD095B3658268C5B85467E32B0130597E (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * __this, const RuntimeMethod* method)
{
	{
		BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleStartState::EnterState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_EnterState_m05D35C6B03B00F2C0719E732C2E67004105BA201 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// PopulatePrefabsInBattle(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		BattleStartState_PopulatePrefabsInBattle_m97AECB4C69CE9D6D1A91265F44BD999D4EA541B9(__this, L_0, /*hidden argument*/NULL);
		// PopulateCharactersInBattle(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		BattleStartState_PopulateCharactersInBattle_m4133E4A5E980F3E606D6F2F1C634AFFA07F42FD4(__this, L_1, /*hidden argument*/NULL);
		// ResetCharactersHealthToFull(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = ___battleSystem0;
		BattleStartState_ResetCharactersHealthToFull_m4008497A9A7A7317FF09363E42969A644BB2AED4(__this, L_2, /*hidden argument*/NULL);
		// battleSystem.TransitionToState(battleSystem.whosNextState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = ___battleSystem0;
		BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * L_5 = L_4->get_whosNextState_6();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleStartState::Update(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_Update_m7C285619550913F151DD4C7CD00E40790F8B75A1 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BattleStartState::PopulatePrefabsInBattle(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_PopulatePrefabsInBattle_m97AECB4C69CE9D6D1A91265F44BD999D4EA541B9 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (GameManger.gameManger.bossBattle)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_1 = L_0->get_bossBattle_21();
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * L_3 = L_2->get_areaData_8();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = L_3->get_possibleEnemys_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, 5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_0 = L_5;
		// battleSystem.EnemiesInBattle[2] = boss;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_EnemiesInBattle_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_8);
		// }
		goto IL_00a8;
	}

IL_002d:
	{
		// for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
		V_1 = 0;
		goto IL_0096;
	}

IL_0031:
	{
		// foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_9 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * L_10 = L_9->get_areaData_8();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = L_10->get_possibleEnemys_2();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_12;
		L_12 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_11, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_2 = L_12;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0079;
		}

IL_0048:
		{
			// foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
			L_13 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_3 = L_13;
			// if (GameManger.gameManger.EncounteredEnemyNames.ToArray()[i] == enemy.name)
			GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_14 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = L_14->get_EncounteredEnemyNames_23();
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16;
			L_16 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_15, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			int32_t L_17 = V_1;
			int32_t L_18 = L_17;
			String_t* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_3;
			String_t* L_21;
			L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
			bool L_22;
			L_22 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_0079;
			}
		}

IL_006e:
		{
			// battleSystem.EnemiesInBattle[i] = enemy;
			BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_23 = ___battleSystem0;
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23->get_EnemiesInBattle_11();
			int32_t L_25 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = V_3;
			ArrayElementTypeCheck (L_24, L_26);
			(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_26);
			// break;
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}

IL_0079:
		{
			// foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
			bool L_27;
			L_27 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0048;
			}
		}

IL_0082:
		{
			IL2CPP_LEAVE(0x92, FINALLY_0084);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0084;
	}

FINALLY_0084:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(132)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(132)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x92, IL_0092)
	}

IL_0092:
	{
		// for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0096:
	{
		// for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
		int32_t L_29 = V_1;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_30 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = L_30->get_EncounteredEnemyNames_23();
		int32_t L_32;
		L_32 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_31, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_32)))
		{
			goto IL_0031;
		}
	}

IL_00a8:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		V_4 = 0;
		goto IL_00d2;
	}

IL_00ad:
	{
		// battleSystem.PlayersInBattle[i] = GameManger.gameManger.party.PlayerParty[i];
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_33 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_34 = L_33->get_PlayersInBattle_12();
		int32_t L_35 = V_4;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_36 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_37 = L_36->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_38 = L_37->get_PlayerParty_1();
		int32_t L_39 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		ArrayElementTypeCheck (L_34, L_40);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_40);
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d2:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		int32_t L_42 = V_4;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_43 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_44 = L_43->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_45 = L_44->get_PlayerParty_1();
		int32_t L_46;
		L_46 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_45, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_46)))
		{
			goto IL_00ad;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleStartState::PopulateCharactersInBattle(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_PopulateCharactersInBattle_m4133E4A5E980F3E606D6F2F1C634AFFA07F42FD4 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPopulateCharactersInBattleU3Eb__3_0_m032CA2F6420CC3F1C012D5B7A67413B977A75BA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * G_B12_0 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * G_B12_1 = NULL;
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * G_B12_2 = NULL;
	Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * G_B11_0 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * G_B11_1 = NULL;
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * G_B11_2 = NULL;
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// if (battleSystem.EnemiesInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// battleSystem.charactersInBattle.Add(battleSystem.EnemiesInBattle[i]);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = L_6->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_8 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_8->get_EnemiesInBattle_11();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_7, L_12, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0027:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002b:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_14 = V_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_15 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = L_15->get_EnemiesInBattle_11();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		V_1 = 0;
		goto IL_0061;
	}

IL_003a:
	{
		// if (battleSystem.PlayersInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_17 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = L_17->get_PlayersInBattle_12();
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_005d;
		}
	}
	{
		// battleSystem.charactersInBattle.Add(battleSystem.PlayersInBattle[i]);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_23 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_24 = L_23->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_25 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = L_25->get_PlayersInBattle_12();
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_24, L_29, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_005d:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_31 = V_1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_32 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = L_32->get_PlayersInBattle_12();
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		// battleSystem.charactersInBattle = battleSystem.charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_34 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_35 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_36 = L_35->get_charactersInBattle_10();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var);
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_37 = ((U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var))->get_U3CU3E9__3_0_1();
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_38 = L_37;
		G_B11_0 = L_38;
		G_B11_1 = L_36;
		G_B11_2 = L_34;
		if (L_38)
		{
			G_B12_0 = L_38;
			G_B12_1 = L_36;
			G_B12_2 = L_34;
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var);
		U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * L_39 = ((U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_40 = (Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 *)il2cpp_codegen_object_new(Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16_il2cpp_TypeInfo_var);
		Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec_U3CPopulateCharactersInBattleU3Eb__3_0_m032CA2F6420CC3F1C012D5B7A67413B977A75BA1_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8_RuntimeMethod_var);
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_41 = L_40;
		((U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var))->set_U3CU3E9__3_0_1(L_41);
		G_B12_0 = L_41;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_0092:
	{
		RuntimeObject* L_42;
		L_42 = Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B(G_B12_1, G_B12_0, /*hidden argument*/Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_43;
		L_43 = Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1(L_42, /*hidden argument*/Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var);
		G_B12_2->set_charactersInBattle_10(L_43);
		// }
		return;
	}
}
// System.Void BattleStartState::ResetCharactersHealthToFull(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState_ResetCharactersHealthToFull_m4008497A9A7A7317FF09363E42969A644BB2AED4 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (battleSystem.EnemiesInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		// battleSystem.EnemiesInBattle[i].GetComponent<CharacterStats>().characterDefinition.FullyHealCharacter();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_EnemiesInBattle_11();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_11;
		L_11 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_10, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_12 = L_11->get_characterDefinition_4();
		CharacterStats_SO_FullyHealCharacter_mAE0AF244FDF5A8F9DD11335653B863FA55DAEB0F(L_12, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002f:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_14 = V_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_15 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = L_15->get_EnemiesInBattle_11();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		V_1 = 0;
		goto IL_0069;
	}

IL_003e:
	{
		// if (battleSystem.PlayersInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_17 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = L_17->get_PlayersInBattle_12();
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0065;
		}
	}
	{
		// battleSystem.PlayersInBattle[i].GetComponent<CharacterStats>().characterDefinition.FullyHealCharacter();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_23 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23->get_PlayersInBattle_12();
		int32_t L_25 = V_1;
		int32_t L_26 = L_25;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_28;
		L_28 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_27, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_29 = L_28->get_characterDefinition_4();
		CharacterStats_SO_FullyHealCharacter_mAE0AF244FDF5A8F9DD11335653B863FA55DAEB0F(L_29, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0069:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_31 = V_1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_32 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = L_32->get_PlayersInBattle_12();
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_003e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleStartState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleStartState__ctor_m3022F1318798D26434968C25404EAC5258DA88F8 (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * __this, const RuntimeMethod* method)
{
	{
		BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// BattleBaseState BattleSystem::get_CurrentState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * BattleSystem_get_CurrentState_m3B3E5CFA3B45D3501B5BFB03BFBD063EB61C1DA7 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, const RuntimeMethod* method)
{
	{
		// public BattleBaseState CurrentState { get { return currentState; } }
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_0 = __this->get_currentState_4();
		return L_0;
	}
}
// System.Void BattleSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleSystem_Start_m4D910BA9554FA595A09E33EF2958302B911FC6F4 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, const RuntimeMethod* method)
{
	{
		// TransitionToState(startState);
		BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * L_0 = __this->get_startState_5();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleSystem::TransitionToState(BattleBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * ___state0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState = state;
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_0 = ___state0;
		__this->set_currentState_4(L_0);
		// Debug.Log(state);
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_1 = ___state0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// StartCoroutine(WaitForOneSec());
		RuntimeObject* L_2;
		L_2 = BattleSystem_WaitForOneSec_m9B219D0A6BBFC3745524A83373AF1009791CA11F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator BattleSystem::WaitForOneSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BattleSystem_WaitForOneSec_m9B219D0A6BBFC3745524A83373AF1009791CA11F (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * L_0 = (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 *)il2cpp_codegen_object_new(U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6_il2cpp_TypeInfo_var);
		U3CWaitForOneSecU3Ed__19__ctor_mE5BB3B67022371C9613E1349F03736AAA8D90C2B(L_0, 0, /*hidden argument*/NULL);
		U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void BattleSystem::ReturnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleSystem_ReturnButton_m44FCEE137FF5D1ECCC50243B4BD6BE33E9E9EDB5 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameManger.gameManger.bossBattle)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_1 = L_0->get_bossBattle_21();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GameManger.gameManger.battleHasStarted = false;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_2->set_battleHasStarted_20((bool)0);
	}

IL_0017:
	{
		// returnToOverWorld = true;
		__this->set_returnToOverWorld_16((bool)1);
		// }
		return;
	}
}
// System.Void BattleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleSystem__ctor_m5D32B8F20FCD4340E83202DE58699AC6C81FC098 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly BattleStartState startState = new BattleStartState();
		BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 * L_0 = (BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 *)il2cpp_codegen_object_new(BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2_il2cpp_TypeInfo_var);
		BattleStartState__ctor_m3022F1318798D26434968C25404EAC5258DA88F8(L_0, /*hidden argument*/NULL);
		__this->set_startState_5(L_0);
		// public readonly BattleWhosNextState whosNextState = new BattleWhosNextState();
		BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * L_1 = (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 *)il2cpp_codegen_object_new(BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9_il2cpp_TypeInfo_var);
		BattleWhosNextState__ctor_m989DF2EF146AC5B07220E8D710254722901BCCCE(L_1, /*hidden argument*/NULL);
		__this->set_whosNextState_6(L_1);
		// public readonly BattlePlayerState playerState = new BattlePlayerState();
		BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * L_2 = (BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 *)il2cpp_codegen_object_new(BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var);
		BattlePlayerState__ctor_m4361475FD095B3658268C5B85467E32B0130597E(L_2, /*hidden argument*/NULL);
		__this->set_playerState_7(L_2);
		// public readonly BattleEnemyState enemyState = new BattleEnemyState();
		BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * L_3 = (BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E *)il2cpp_codegen_object_new(BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E_il2cpp_TypeInfo_var);
		BattleEnemyState__ctor_m3D5B29B38F8D18E6BFE025181BDF55BEE2C05E1C(L_3, /*hidden argument*/NULL);
		__this->set_enemyState_8(L_3);
		// public readonly BattleEndState endState = new BattleEndState();
		BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * L_4 = (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 *)il2cpp_codegen_object_new(BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var);
		BattleEndState__ctor_m72C42D2EEA0315410848BA308658280A239EEAC8(L_4, /*hidden argument*/NULL);
		__this->set_endState_9(L_4);
		// public List<GameObject> charactersInBattle = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_5, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_charactersInBattle_10(L_5);
		// public GameObject[] EnemiesInBattle = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_EnemiesInBattle_11(L_6);
		// public GameObject[] PlayersInBattle = new GameObject[3];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_PlayersInBattle_12(L_7);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_Awake_m5EAC9C5AEAC20CBA9EE73250BB6A22D1120DCCE1 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	{
		// InstantiateCharactersForBattle();
		BattleUI_InstantiateCharactersForBattle_m6B32E49B9C2DA3A7A74CB208BD9164860B5C1EEA(__this, /*hidden argument*/NULL);
		// UpdateHealthbars();
		BattleUI_UpdateHealthbars_m8EDF18EECFF19D524BBC481645F17589D0616D0F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_Start_m4AE290809A510A220E534A4C8DB22F13E3190B19 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	{
		// PlayerChoice.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_Update_m6355E156BC352B6B202378DE8E49E5B0411B15AE (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		s_Il2CppMethodInitialized = true;
	}
	BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * V_0 = NULL;
	{
		// switch (battleSystem.currentState)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = __this->get_battleSystem_4();
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_1 = L_0->get_currentState_4();
		V_0 = L_1;
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_2 = V_0;
		if (((BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2 *)IsInstClass((RuntimeObject*)L_2, BattleStartState_t6483908149603E84027B41FE9CFC6395ACF71EB2_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_3 = V_0;
		if (((BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 *)IsInstClass((RuntimeObject*)L_3, BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_4 = V_0;
		if (((BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 *)IsInstClass((RuntimeObject*)L_4, BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var)))
		{
			goto IL_0060;
		}
	}
	{
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_5 = V_0;
		if (((BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E *)IsInstClass((RuntimeObject*)L_5, BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_6 = V_0;
		if (((BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 *)IsInstClass((RuntimeObject*)L_6, BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var)))
		{
			goto IL_008a;
		}
	}
	{
		goto IL_00af;
	}

IL_0036:
	{
		// updateTurnOrder = true;
		__this->set_updateTurnOrder_20((bool)1);
		// break;
		return;
	}

IL_003e:
	{
		// if (updateTurnOrder)
		bool L_7 = __this->get_updateTurnOrder_20();
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		// RemoveDeadCharacters();
		BattleUI_RemoveDeadCharacters_m04BE6CF0C3DB4845FAC74BF42A5E3BD57A926CD7(__this, /*hidden argument*/NULL);
		// UpdateTurnOrder();
		BattleUI_UpdateTurnOrder_m1C19A10F6700FD84314593DF24C2073DD9874288(__this, /*hidden argument*/NULL);
		// UpdateHealthbars();
		BattleUI_UpdateHealthbars_m8EDF18EECFF19D524BBC481645F17589D0616D0F(__this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// updateTurnOrder = false;
		__this->set_updateTurnOrder_20((bool)0);
		// break;
		return;
	}

IL_0060:
	{
		// EnemySelection();
		BattleUI_EnemySelection_mBCE2109D0621AE02DC731E33DDC3E0EAA2FA1CA6(__this, /*hidden argument*/NULL);
		// if (!updateTurnOrder)
		bool L_8 = __this->get_updateTurnOrder_20();
		if (L_8)
		{
			goto IL_00b9;
		}
	}
	{
		// PlayerChoice.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// updateTurnOrder = true;
		__this->set_updateTurnOrder_20((bool)1);
		// break;
		return;
	}

IL_0082:
	{
		// updateTurnOrder = true;
		__this->set_updateTurnOrder_20((bool)1);
		// break;
		return;
	}

IL_008a:
	{
		// PlayerCharacters.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_PlayerCharacters_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// EnemyCharacters.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_EnemyCharacters_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// EndBattlePanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_EndBattlePanel_16();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00af:
	{
		// Debug.Log("DEFAULT");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void BattleUI::RemoveDeadCharacters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_RemoveDeadCharacters_m04BE6CF0C3DB4845FAC74BF42A5E3BD57A926CD7 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		V_0 = 0;
		goto IL_0043;
	}

IL_0004:
	{
		// if (battleSystem.EnemiesInBattle[i] != null && battleSystem.EnemiesInBattle[i].GetComponent<CharacterStats>().characterDefinition.currentHealth <= 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_EnemiesInBattle_11();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_11;
		L_11 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_10, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_12 = L_11->get_characterDefinition_4();
		int32_t L_13 = L_12->get_currentHealth_11();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_003f;
		}
	}
	{
		// DestroyEnemy(i);
		int32_t L_14 = V_0;
		BattleUI_DestroyEnemy_m7E06534C2A098F1102A548213C34C844773C920F(__this, L_14, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0043:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_16 = V_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_17 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = L_17->get_EnemiesInBattle_11();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		V_1 = 0;
		goto IL_0096;
	}

IL_0057:
	{
		// if (battleSystem.PlayersInBattle[i] != null && battleSystem.PlayersInBattle[i].GetComponent<CharacterStats>().characterDefinition.currentHealth <= 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_19 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = L_19->get_PlayersInBattle_12();
		int32_t L_21 = V_1;
		int32_t L_22 = L_21;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0092;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_25 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = L_25->get_PlayersInBattle_12();
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_30;
		L_30 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_29, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_31 = L_30->get_characterDefinition_4();
		int32_t L_32 = L_31->get_currentHealth_11();
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		// DestroyPlayer(i);
		int32_t L_33 = V_1;
		BattleUI_DestroyPlayer_mDF96C86E60A94D56D9234F0523A8A9937C6BEF37(__this, L_33, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_0096:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_35 = V_1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_36 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_37 = L_36->get_PlayersInBattle_12();
		if ((((int32_t)L_35) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))))
		{
			goto IL_0057;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleUI::UpdateTurnOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_UpdateTurnOrder_m1C19A10F6700FD84314593DF24C2073DD9874288 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (Transform characterturns in TurnOrder.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TurnOrder_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_0013:
		{
			// foreach (Transform characterturns in TurnOrder.transform)
			RuntimeObject* L_3 = V_0;
			RuntimeObject * L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_3);
			// Destroy(characterturns.gameObject);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_4, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			// foreach (Transform characterturns in TurnOrder.transform)
			RuntimeObject* L_6 = V_0;
			bool L_7;
			L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0013;
			}
		}

IL_0030:
		{
			IL2CPP_LEAVE(0x43, FINALLY_0032);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0032;
	}

FINALLY_0032:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_8 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_9 = V_1;
			if (!L_9)
			{
				goto IL_0042;
			}
		}

IL_003c:
		{
			RuntimeObject* L_10 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_10);
		}

IL_0042:
		{
			IL2CPP_END_FINALLY(50)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(50)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x43, IL_0043)
	}

IL_0043:
	{
		// for (int i = 0; i < battleSystem.charactersInBattle.Count; i++)
		V_2 = 0;
		goto IL_012f;
	}

IL_004a:
	{
		// GameObject character = battleSystem.charactersInBattle[i];
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_11 = __this->get_battleSystem_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_12 = L_11->get_charactersInBattle_10();
		int32_t L_13 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_3 = L_14;
		// Sprite chracterImage = character.transform.GetChild(2).GetChild(1).gameObject.GetComponent<SpriteRenderer>().sprite;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_16, 2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_17, 1, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_20;
		L_20 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_19, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_21;
		L_21 = SpriteRenderer_get_sprite_mCA028D776503304A6A59A5E7FD9F198DCF206387(L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		// CharacterTurn.transform.GetChild(0).GetComponent<Image>().sprite = chracterImage;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_CharacterTurn_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, 0, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_25;
		L_25 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_24, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_26 = V_4;
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_25, L_26, /*hidden argument*/NULL);
		// CharacterTurn.transform.GetChild(1).GetComponent<Text>().text = character.gameObject.name;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_CharacterTurn_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, 1, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_30;
		L_30 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_29, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_31, /*hidden argument*/NULL);
		String_t* L_33;
		L_33 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_32, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_33);
		// Instantiate(CharacterTurn, new Vector3(TurnOrder.transform.position.x, TurnOrder.transform.position.y - i + 3, TurnOrder.transform.position.z), Quaternion.identity, TurnOrder.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_CharacterTurn_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_TurnOrder_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		float L_38 = L_37.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_TurnOrder_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_40, /*hidden argument*/NULL);
		float L_42 = L_41.get_y_3();
		int32_t L_43 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_TurnOrder_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		L_46 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_45, /*hidden argument*/NULL);
		float L_47 = L_46.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_48), L_38, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_42, (float)((float)((float)L_43)))), (float)(3.0f))), L_47, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_49;
		L_49 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_TurnOrder_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_34, L_48, L_49, L_51, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		// for (int i = 0; i < battleSystem.charactersInBattle.Count; i++)
		int32_t L_53 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_012f:
	{
		// for (int i = 0; i < battleSystem.charactersInBattle.Count; i++)
		int32_t L_54 = V_2;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_55 = __this->get_battleSystem_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_56 = L_55->get_charactersInBattle_10();
		int32_t L_57;
		L_57 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_56, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_54) < ((int32_t)L_57)))
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleUI::UpdateHealthbars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_UpdateHealthbars_m8EDF18EECFF19D524BBC481645F17589D0616D0F (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * V_3 = NULL;
	CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * V_6 = NULL;
	CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * V_7 = NULL;
	{
		// foreach (GameObject enemy in EnemySprites)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_EnemySprites_6();
		V_0 = L_0;
		V_1 = 0;
		goto IL_003d;
	}

IL_000b:
	{
		// foreach (GameObject enemy in EnemySprites)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (enemy != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// Healthbar enemyHealthbar = enemy.GetComponent<CharacterStats>().healthbar;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_8;
		L_8 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_7, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * L_9 = L_8->get_healthbar_7();
		V_3 = L_9;
		// CharacterStats_SO enemyCharacterDefinition = enemy.GetComponent<CharacterStats>().characterDefinition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_11;
		L_11 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_10, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_12 = L_11->get_characterDefinition_4();
		V_4 = L_12;
		// enemyHealthbar.SetHeatlh(enemyCharacterDefinition);
		Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * L_13 = V_3;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_14 = V_4;
		Healthbar_SetHeatlh_mB00BF771148A86AC3B91C10CED50AD313F86403B(L_13, L_14, /*hidden argument*/NULL);
	}

IL_0039:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_003d:
	{
		// foreach (GameObject enemy in EnemySprites)
		int32_t L_16 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// foreach (GameObject player in PlayerSprites)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = __this->get_PlayerSprites_7();
		V_0 = L_18;
		V_1 = 0;
		goto IL_0086;
	}

IL_004e:
	{
		// foreach (GameObject player in PlayerSprites)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = L_22;
		// if (player != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_0082;
		}
	}
	{
		// Healthbar playerHealthbar = player.GetComponent<CharacterStats>().healthbar;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_5;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_26;
		L_26 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_25, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * L_27 = L_26->get_healthbar_7();
		V_6 = L_27;
		// CharacterStats_SO playerCharacterDefinition = player.GetComponent<CharacterStats>().characterDefinition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = V_5;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_29;
		L_29 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_28, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_30 = L_29->get_characterDefinition_4();
		V_7 = L_30;
		// playerHealthbar.SetHeatlh(playerCharacterDefinition);
		Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * L_31 = V_6;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_32 = V_7;
		Healthbar_SetHeatlh_mB00BF771148A86AC3B91C10CED50AD313F86403B(L_31, L_32, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0086:
	{
		// foreach (GameObject player in PlayerSprites)
		int32_t L_34 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35 = V_0;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_004e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleUI::InstantiateCharactersForBattle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_InstantiateCharactersForBattle_m6B32E49B9C2DA3A7A74CB208BD9164860B5C1EEA (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	int32_t V_4 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (GameManger.gameManger.bossBattle)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_1 = L_0->get_bossBattle_21();
		if (!L_1)
		{
			goto IL_0064;
		}
	}
	{
		// GameObject boss = GameManger.gameManger.areaData.possibleEnemys[5];
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * L_3 = L_2->get_areaData_8();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = L_3->get_possibleEnemys_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, 5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_0 = L_5;
		// EnemySprites[2] = Instantiate(boss, EnemyCharacters.transform.GetChild(0).transform.GetChild(2));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_EnemySprites_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, 0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_7, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		ArrayElementTypeCheck (L_6, L_13);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_13);
		// EnemySprites[2].name = boss.name;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_EnemySprites_6();
		int32_t L_15 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_16, L_18, /*hidden argument*/NULL);
		// }
		goto IL_0132;
	}

IL_0064:
	{
		// for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
		V_1 = 0;
		goto IL_011d;
	}

IL_006b:
	{
		// if (GameManger.gameManger.EncounteredEnemyNames[i] != null)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_19 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_20 = L_19->get_EncounteredEnemyNames_23();
		int32_t L_21 = V_1;
		String_t* L_22;
		L_22 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_0119;
		}
	}
	{
		// foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_23 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * L_24 = L_23->get_areaData_8();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_25 = L_24->get_possibleEnemys_2();
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_26;
		L_26 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_25, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_2 = L_26;
	}

IL_0095:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0100;
		}

IL_0097:
		{
			// foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
			L_27 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_3 = L_27;
			// if (GameManger.gameManger.EncounteredEnemyNames[i] == enemy.name)
			GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_28 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_29 = L_28->get_EncounteredEnemyNames_23();
			int32_t L_30 = V_1;
			String_t* L_31;
			L_31 = List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m8578F26F0FE72EDB6A0290D78944B3D4F34DBFAC_RuntimeMethod_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = V_3;
			String_t* L_33;
			L_33 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_32, /*hidden argument*/NULL);
			bool L_34;
			L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_31, L_33, /*hidden argument*/NULL);
			if (!L_34)
			{
				goto IL_0100;
			}
		}

IL_00bc:
		{
			// EnemySprites[i] = Instantiate(enemy,EnemyCharacters.transform.GetChild(CoinFlip).transform.GetChild(i));
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_35 = __this->get_EnemySprites_6();
			int32_t L_36 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_3;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_EnemyCharacters_12();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
			L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
			int32_t L_40;
			L_40 = BattleUI_get_CoinFlip_m35C47531F1E6968E89075199456E34D16632C86A(__this, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
			L_41 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_39, L_40, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
			L_42 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_41, /*hidden argument*/NULL);
			int32_t L_43 = V_1;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
			L_44 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_42, L_43, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
			L_45 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_37, L_44, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
			ArrayElementTypeCheck (L_35, L_45);
			(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_36), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_45);
			// EnemySprites[i].name = enemy.name;
			GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_46 = __this->get_EnemySprites_6();
			int32_t L_47 = V_1;
			int32_t L_48 = L_47;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = V_3;
			String_t* L_51;
			L_51 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_50, /*hidden argument*/NULL);
			Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_49, L_51, /*hidden argument*/NULL);
			// break;
			IL2CPP_LEAVE(0x119, FINALLY_010b);
		}

IL_0100:
		{
			// foreach (GameObject enemy in GameManger.gameManger.areaData.possibleEnemys)
			bool L_52;
			L_52 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_0097;
			}
		}

IL_0109:
		{
			IL2CPP_LEAVE(0x119, FINALLY_010b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010b;
	}

FINALLY_010b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(267)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(267)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x119, IL_0119)
	}

IL_0119:
	{
		// for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_011d:
	{
		// for (int i = 0; i < GameManger.gameManger.EncounteredEnemyNames.Count; i++)
		int32_t L_54 = V_1;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_55 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_56 = L_55->get_EncounteredEnemyNames_23();
		int32_t L_57;
		L_57 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_56, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_54) < ((int32_t)L_57)))
		{
			goto IL_006b;
		}
	}

IL_0132:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		V_4 = 0;
		goto IL_01cd;
	}

IL_013a:
	{
		// if (GameManger.gameManger.party.PlayerParty[i] != null)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_58 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_59 = L_58->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_60 = L_59->get_PlayerParty_1();
		int32_t L_61 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62;
		L_62 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_60, L_61, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_62, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01c7;
		}
	}
	{
		// PlayerSprites[i] = Instantiate(GameManger.gameManger.party.PlayerParty[i],
		//                                                 PlayerCharacters.transform.GetChild(CoinFlip).transform.GetChild(i));
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_64 = __this->get_PlayerSprites_7();
		int32_t L_65 = V_4;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_66 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_67 = L_66->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_68 = L_67->get_PlayerParty_1();
		int32_t L_69 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_68, L_69, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = __this->get_PlayerCharacters_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_71, /*hidden argument*/NULL);
		int32_t L_73;
		L_73 = BattleUI_get_CoinFlip_m35C47531F1E6968E89075199456E34D16632C86A(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_72, L_73, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
		int32_t L_76 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_75, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_78;
		L_78 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_70, L_77, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		ArrayElementTypeCheck (L_64, L_78);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_65), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_78);
		// PlayerSprites[i].name = GameManger.gameManger.party.PlayerParty[i].name;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_79 = __this->get_PlayerSprites_7();
		int32_t L_80 = V_4;
		int32_t L_81 = L_80;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_83 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_84 = L_83->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_85 = L_84->get_PlayerParty_1();
		int32_t L_86 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
		L_87 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_85, L_86, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		String_t* L_88;
		L_88 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_87, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_82, L_88, /*hidden argument*/NULL);
	}

IL_01c7:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_89, (int32_t)1));
	}

IL_01cd:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		int32_t L_90 = V_4;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_91 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_92 = L_91->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_93 = L_92->get_PlayerParty_1();
		int32_t L_94;
		L_94 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_93, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_90) < ((int32_t)L_94)))
		{
			goto IL_013a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleUI::AttackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_AttackButton_mB71EF5452A46F7432BA1C059BBD26D4EE91D5989 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12953315450AEF385864C34930B754DE716B3F06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23C1C15697849A9FE6569294B1CB7F4CA3E4DFDD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SkillPatternUtil skillPattern = new SkillPatternUtil();
		SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * L_0 = (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 *)il2cpp_codegen_object_new(SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74_il2cpp_TypeInfo_var);
		SkillPatternUtil__ctor_mA94E8A4A872AD7B9CFDDD6ED471B73863FDE0DF6(L_0, /*hidden argument*/NULL);
		// DeSelectAllSlots();
		BattleUI_DeSelectAllSlots_m2AA46637CD0BA7EC4F5A868EA6D8ACF5B6C4E26C(__this, /*hidden argument*/NULL);
		// PlayerChoice.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// SkillChoice.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SkillChoice_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("AttackSlot " + battleSystem.attackSlot + " was attacked");
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = __this->get_battleSystem_4();
		int32_t* L_4 = L_3->get_address_of_attackSlot_17();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral23C1C15697849A9FE6569294B1CB7F4CA3E4DFDD, L_5, _stringLiteral12953315450AEF385864C34930B754DE716B3F06, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// skillPattern.WhichSkillToUse(battleSystem, battleSystem.attackSlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_7 = __this->get_battleSystem_4();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_8 = __this->get_battleSystem_4();
		int32_t L_9 = L_8->get_attackSlot_17();
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_10 = __this->get_skill_21();
		SkillPatternUtil_WhichSkillToUse_mDC5B4F33D3004B2B38CEA6D1D26DAB05015989FA(L_0, L_7, L_9, L_10, /*hidden argument*/NULL);
		// battleSystem.attack = false;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_11 = __this->get_battleSystem_4();
		L_11->set_attack_13((bool)0);
		// battleSystem.attackSlot = 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_12 = __this->get_battleSystem_4();
		L_12->set_attackSlot_17(0);
		// battleSystem.charactersInBattle.Remove(battleSystem.charactersInBattle.First());
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_13 = __this->get_battleSystem_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_14 = L_13->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_15 = __this->get_battleSystem_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = L_15->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_16, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		bool L_18;
		L_18 = List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7(L_14, L_17, /*hidden argument*/List_1_Remove_mD36BF07C31C1DF947856EFECE89BAF4D6A24DEB7_RuntimeMethod_var);
		// battleSystem.TransitionToState(battleSystem.whosNextState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_19 = __this->get_battleSystem_4();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_20 = __this->get_battleSystem_4();
		BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * L_21 = L_20->get_whosNextState_6();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_19, L_21, /*hidden argument*/NULL);
		// PlayerChoice.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)0, /*hidden argument*/NULL);
		// AttackOrBack.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_AttackOrBack_17();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUI::BackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_BackButton_m21523C22C95AB281B09F3FAD6BB1B925536A8A53 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	{
		// DeSelectAllSlots();
		BattleUI_DeSelectAllSlots_m2AA46637CD0BA7EC4F5A868EA6D8ACF5B6C4E26C(__this, /*hidden argument*/NULL);
		// AttackOrBack.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_AttackOrBack_17();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// PlayerChoice.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUI::SkillsButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_SkillsButton_m975220481CF80E3ABDE067A651749493F7C28C0D (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEFB7A71C1D72EE5CBC0AA4EE8F8754660CD82107_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_1_U3CSkillsButtonU3Eb__0_mF11FF283A5285A87BEB25977DCD0C721D61DBB74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * V_3 = NULL;
	{
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_0 = (U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass27_0__ctor_m82E5A997E1F91026E3D897E6AC321C89DD7A22D8(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_1 = V_0;
		L_1->set_U3CU3E4__this_0(__this);
		// switch (battleSystem.currentState)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = __this->get_battleSystem_4();
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_3 = L_2->get_currentState_4();
		if (!((BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 *)IsInstClass((RuntimeObject*)L_3, BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329_il2cpp_TypeInfo_var)))
		{
			goto IL_0171;
		}
	}
	{
		// List<Skill_SO> skills = battleSystem.charactersInBattle[0].GetComponent<CharacterStats>().characterDefinition.SkillList;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_4 = V_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_5 = __this->get_battleSystem_4();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = L_5->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_8;
		L_8 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_7, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_9 = L_8->get_characterDefinition_4();
		List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * L_10 = L_9->get_SkillList_28();
		L_4->set_skills_1(L_10);
		// int numberOfSkills = skills.Count;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_11 = V_0;
		List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * L_12 = L_11->get_skills_1();
		int32_t L_13;
		L_13 = List_1_get_Count_mEFB7A71C1D72EE5CBC0AA4EE8F8754660CD82107_inline(L_12, /*hidden argument*/List_1_get_Count_mEFB7A71C1D72EE5CBC0AA4EE8F8754660CD82107_RuntimeMethod_var);
		V_1 = L_13;
		// if(numberOfSkills > 0)
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		// PlayerChoice.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// SkillChoice.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_SkillChoice_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// for (int i = 0; i < numberOfSkills; i++)
		V_2 = 0;
		goto IL_016a;
	}

IL_0077:
	{
		U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * L_17 = (U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass27_1__ctor_mA891A57FFF50F6086A907C89EB11A593BB7E33D0(L_17, /*hidden argument*/NULL);
		V_3 = L_17;
		U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * L_18 = V_3;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_19 = V_0;
		L_18->set_CSU24U3CU3E8__locals1_1(L_19);
		// btnSkill.transform.GetChild(0).GetComponent<Text>().text = skills[i].skillName;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = __this->get_btnSkill_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_21, 0, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_23;
		L_23 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_22, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * L_24 = V_3;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_25 = L_24->get_CSU24U3CU3E8__locals1_1();
		List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * L_26 = L_25->get_skills_1();
		int32_t L_27 = V_2;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_28;
		L_28 = List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_inline(L_26, L_27, /*hidden argument*/List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_RuntimeMethod_var);
		String_t* L_29 = L_28->get_skillName_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_29);
		// btnSkill.transform.GetChild(1).GetComponent<Text>().text = i.ToString();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_btnSkill_15();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_31, 1, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_33;
		L_33 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_32, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_34;
		L_34 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_2), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_34);
		// GameObject go = Instantiate(btnSkill, new Vector3(SkillChoice.transform.position.x, SkillChoice.transform.position.y - i + 2, SkillChoice.transform.position.z), Quaternion.identity, SkillChoice.transform);
		U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * L_35 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_btnSkill_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_SkillChoice_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		L_39 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_38, /*hidden argument*/NULL);
		float L_40 = L_39.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_SkillChoice_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43;
		L_43 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_42, /*hidden argument*/NULL);
		float L_44 = L_43.get_y_3();
		int32_t L_45 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_SkillChoice_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		L_48 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_47, /*hidden argument*/NULL);
		float L_49 = L_48.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_50), L_40, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_44, (float)((float)((float)L_45)))), (float)(2.0f))), L_49, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_51;
		L_51 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_SkillChoice_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8(L_36, L_50, L_51, L_53, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m87DD2C8A0FED85A2D3A0A7DF1F459E01C62DADC8_RuntimeMethod_var);
		L_35->set_go_0(L_54);
		// go.GetComponent<Button>().onClick.AddListener(() =>
		// {
		//     int skillIndex = int.Parse(go.transform.GetChild(1).GetComponent<Text>().text);
		//     skill = skills[skillIndex];
		//     Debug.Log(skill.name);
		//     battleSystem.attack = true;
		//     battleSystem.attackSlot = 2;
		//     SelectProperSlots();
		//     SkillChoice.SetActive(false);
		//     PlayerChoice.SetActive(false);
		//     AttackOrBack.SetActive(true);
		// });
		U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * L_55 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_55->get_go_0();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_57;
		L_57 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_56, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_58;
		L_58 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_57, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * L_59 = V_3;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_60 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_60, L_59, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass27_1_U3CSkillsButtonU3Eb__0_mF11FF283A5285A87BEB25977DCD0C721D61DBB74_RuntimeMethod_var), /*hidden argument*/NULL);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_58, L_60, /*hidden argument*/NULL);
		// for (int i = 0; i < numberOfSkills; i++)
		int32_t L_61 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)1));
	}

IL_016a:
	{
		// for (int i = 0; i < numberOfSkills; i++)
		int32_t L_62 = V_2;
		int32_t L_63 = V_1;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_0077;
		}
	}

IL_0171:
	{
		// }
		return;
	}
}
// System.Void BattleUI::EnemySelection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_EnemySelection_mBCE2109D0621AE02DC731E33DDC3E0EAA2FA1CA6 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral685BD9119C7B33F925ACBD57F19DB756B61993D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC535BA3E44368EFD97D1865B14D083CE16FF51A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float horizontalInput = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_0;
		// float verticalInput = Input.GetAxisRaw("Vertical");
		float L_1;
		L_1 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_1;
		// if (verticalInput == 0)
		float L_2 = V_1;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// verticalInputInUse = false;
		__this->set_verticalInputInUse_18((bool)0);
	}

IL_0025:
	{
		// if (horizontalInput == 0)
		float L_3 = V_0;
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// horizontalInputInUse = false;
		__this->set_horizontalInputInUse_19((bool)0);
	}

IL_0034:
	{
		// if (battleSystem.attack)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = __this->get_battleSystem_4();
		bool L_5 = L_4->get_attack_13();
		if (!L_5)
		{
			goto IL_0139;
		}
	}
	{
		// if (verticalInput != 0 && !verticalInputInUse)
		float L_6 = V_1;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_00f7;
		}
	}
	{
		bool L_7 = __this->get_verticalInputInUse_18();
		if (L_7)
		{
			goto IL_00f7;
		}
	}
	{
		// verticalInputInUse = true;
		__this->set_verticalInputInUse_18((bool)1);
		// if (verticalInput > 0 && battleSystem.attackSlot < 4)
		float L_8 = V_1;
		if ((!(((float)L_8) > ((float)(0.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_9 = __this->get_battleSystem_4();
		int32_t L_10 = L_9->get_attackSlot_17();
		if ((((int32_t)L_10) >= ((int32_t)4)))
		{
			goto IL_00a9;
		}
	}
	{
		// battleSystem.attackSlot++;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_11 = __this->get_battleSystem_4();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_12 = L_11;
		int32_t L_13 = L_12->get_attackSlot_17();
		L_12->set_attackSlot_17(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// Debug.Log("AttackSlot increased to " + battleSystem.attackSlot);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_14 = __this->get_battleSystem_4();
		int32_t* L_15 = L_14->get_address_of_attackSlot_17();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralDC535BA3E44368EFD97D1865B14D083CE16FF51A, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		// if (verticalInput < 0 && battleSystem.attackSlot > 0)
		float L_18 = V_1;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_00f1;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_19 = __this->get_battleSystem_4();
		int32_t L_20 = L_19->get_attackSlot_17();
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00f1;
		}
	}
	{
		// battleSystem.attackSlot--;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_21 = __this->get_battleSystem_4();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_22 = L_21;
		int32_t L_23 = L_22->get_attackSlot_17();
		L_22->set_attackSlot_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)1)));
		// Debug.Log("AttackSlot decreased to " + battleSystem.attackSlot);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_24 = __this->get_battleSystem_4();
		int32_t* L_25 = L_24->get_address_of_attackSlot_17();
		String_t* L_26;
		L_26 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_25, /*hidden argument*/NULL);
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral685BD9119C7B33F925ACBD57F19DB756B61993D3, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_27, /*hidden argument*/NULL);
	}

IL_00f1:
	{
		// SelectProperSlots();
		BattleUI_SelectProperSlots_mED02583109EFD4D66BDBC59AF4F5F14EFDF9BFFC(__this, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// if (horizontalInput != 0 && !horizontalInputInUse)
		float L_28 = V_0;
		if ((((float)L_28) == ((float)(0.0f))))
		{
			goto IL_0127;
		}
	}
	{
		bool L_29 = __this->get_horizontalInputInUse_19();
		if (L_29)
		{
			goto IL_0127;
		}
	}
	{
		// horizontalInputInUse = true;
		__this->set_horizontalInputInUse_19((bool)1);
		// battleSystem.frontRow = horizontalInput < 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_30 = __this->get_battleSystem_4();
		float L_31 = V_0;
		L_30->set_frontRow_14((bool)((((float)L_31) < ((float)(0.0f)))? 1 : 0));
		// SelectProperSlots();
		BattleUI_SelectProperSlots_mED02583109EFD4D66BDBC59AF4F5F14EFDF9BFFC(__this, /*hidden argument*/NULL);
	}

IL_0127:
	{
		// if (Input.GetButton("Submit"))
		bool L_32;
		L_32 = Input_GetButton_m95EE8314087068F3AA9CEF3C3F6A246D55C4734C(_stringLiteral190CDBBC7377A308B78E27EF91319FD2DA386895, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0139;
		}
	}
	{
		// AttackButton();
		BattleUI_AttackButton_mB71EF5452A46F7432BA1C059BBD26D4EE91D5989(__this, /*hidden argument*/NULL);
	}

IL_0139:
	{
		// }
		return;
	}
}
// System.Void BattleUI::SelectProperSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_SelectProperSlots_mED02583109EFD4D66BDBC59AF4F5F14EFDF9BFFC (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// int row = battleSystem.frontRow ? 0 : 1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = __this->get_battleSystem_4();
		bool L_1 = L_0->get_frontRow_14();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0011;
	}

IL_0010:
	{
		G_B3_0 = 0;
	}

IL_0011:
	{
		V_0 = G_B3_0;
		// DeSelectAllSlots();
		BattleUI_DeSelectAllSlots_m2AA46637CD0BA7EC4F5A868EA6D8ACF5B6C4E26C(__this, /*hidden argument*/NULL);
		// switch (skill.skillPattern)
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_2 = __this->get_skill_21();
		int32_t L_3 = L_2->get_skillPattern_8();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_0088;
			}
			case 2:
			{
				goto IL_011d;
			}
			case 3:
			{
				goto IL_01b2;
			}
			case 4:
			{
				goto IL_0285;
			}
			case 5:
			{
				goto IL_0358;
			}
			case 6:
			{
				goto IL_0469;
			}
			case 7:
			{
				goto IL_057a;
			}
		}
	}
	{
		return;
	}

IL_004b:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_10 = __this->get_battleSystem_4();
		int32_t L_11 = L_10->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_9, L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_13, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0088:
	{
		// if (battleSystem.attackSlot > 3)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_16 = __this->get_battleSystem_4();
		int32_t L_17 = L_16->get_attackSlot_17();
		if ((((int32_t)L_17) <= ((int32_t)3)))
		{
			goto IL_00a2;
		}
	}
	{
		// battleSystem.attackSlot = 3;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_18 = __this->get_battleSystem_4();
		L_18->set_attackSlot_17(3);
	}

IL_00a2:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		int32_t L_21 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_20, L_21, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_24 = __this->get_battleSystem_4();
		int32_t L_25 = L_24->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, L_25, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_26, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_27, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_28, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		int32_t L_32 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_31, L_32, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_33, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_35 = __this->get_battleSystem_4();
		int32_t L_36 = L_35->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_34, ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_37, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_38, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_011d:
	{
		// if (battleSystem.attackSlot > 2)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_41 = __this->get_battleSystem_4();
		int32_t L_42 = L_41->get_attackSlot_17();
		if ((((int32_t)L_42) <= ((int32_t)2)))
		{
			goto IL_0137;
		}
	}
	{
		// battleSystem.attackSlot = 2;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_43 = __this->get_battleSystem_4();
		L_43->set_attackSlot_17(2);
	}

IL_0137:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		int32_t L_46 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_45, L_46, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_47, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_49 = __this->get_battleSystem_4();
		int32_t L_50 = L_49->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_48, L_50, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_52, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_53, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		int32_t L_57 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_56, L_57, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_58, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_60 = __this->get_battleSystem_4();
		int32_t L_61 = L_60->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_59, ((int32_t)il2cpp_codegen_add((int32_t)L_61, (int32_t)2)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_62, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_63, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_64, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_65, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_01b2:
	{
		// if (battleSystem.attackSlot > 2)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_66 = __this->get_battleSystem_4();
		int32_t L_67 = L_66->get_attackSlot_17();
		if ((((int32_t)L_67) <= ((int32_t)2)))
		{
			goto IL_01cc;
		}
	}
	{
		// battleSystem.attackSlot = 2;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_68 = __this->get_battleSystem_4();
		L_68->set_attackSlot_17(2);
	}

IL_01cc:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		int32_t L_71 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_72;
		L_72 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_70, L_71, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_73;
		L_73 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_72, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_74 = __this->get_battleSystem_4();
		int32_t L_75 = L_74->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_73, L_75, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_76, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_77, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79;
		L_79 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_78, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_79, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_80, /*hidden argument*/NULL);
		int32_t L_82 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_81, L_82, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84;
		L_84 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_83, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_85 = __this->get_battleSystem_4();
		int32_t L_86 = L_85->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_84, ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_87, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_88, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90;
		L_90 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_89, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_90, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_92;
		L_92 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_91, /*hidden argument*/NULL);
		int32_t L_93 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94;
		L_94 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_92, L_93, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_96 = __this->get_battleSystem_4();
		int32_t L_97 = L_96->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98;
		L_98 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_95, ((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)2)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_99;
		L_99 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_98, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_100;
		L_100 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_99, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101;
		L_101 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_100, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_101, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0285:
	{
		// if (battleSystem.attackSlot > 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_102 = __this->get_battleSystem_4();
		int32_t L_103 = L_102->get_attackSlot_17();
		if ((((int32_t)L_103) <= ((int32_t)0)))
		{
			goto IL_029f;
		}
	}
	{
		// battleSystem.attackSlot = 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_104 = __this->get_battleSystem_4();
		L_104->set_attackSlot_17(0);
	}

IL_029f:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_105 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_106;
		L_106 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_105, /*hidden argument*/NULL);
		int32_t L_107 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_108;
		L_108 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_106, L_107, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_109;
		L_109 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_108, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_110 = __this->get_battleSystem_4();
		int32_t L_111 = L_110->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112;
		L_112 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_109, L_111, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
		L_113 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_112, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_114;
		L_114 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_113, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115;
		L_115 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_114, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_115, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_117;
		L_117 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_116, /*hidden argument*/NULL);
		int32_t L_118 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_119;
		L_119 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_117, L_118, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_120;
		L_120 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_119, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_121 = __this->get_battleSystem_4();
		int32_t L_122 = L_121->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_123;
		L_123 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_120, ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)2)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124;
		L_124 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_123, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_125;
		L_125 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_124, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126;
		L_126 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_125, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_126, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 4).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_127 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_128;
		L_128 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_127, /*hidden argument*/NULL);
		int32_t L_129 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_128, L_129, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_131;
		L_131 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_130, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_132 = __this->get_battleSystem_4();
		int32_t L_133 = L_132->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_134;
		L_134 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_131, ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)4)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_135;
		L_135 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_134, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_136;
		L_136 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_135, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_137;
		L_137 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_136, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_137, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0358:
	{
		// if (battleSystem.attackSlot > 1)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_138 = __this->get_battleSystem_4();
		int32_t L_139 = L_138->get_attackSlot_17();
		if ((((int32_t)L_139) <= ((int32_t)1)))
		{
			goto IL_0372;
		}
	}
	{
		// battleSystem.attackSlot = 1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_140 = __this->get_battleSystem_4();
		L_140->set_attackSlot_17(1);
	}

IL_0372:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_141 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_142;
		L_142 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_141, /*hidden argument*/NULL);
		int32_t L_143 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_144;
		L_144 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_142, L_143, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_145;
		L_145 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_144, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_146 = __this->get_battleSystem_4();
		int32_t L_147 = L_146->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_148;
		L_148 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_145, L_147, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_149;
		L_149 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_148, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_150;
		L_150 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_149, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_151;
		L_151 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_150, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_151, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_152 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_153;
		L_153 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_152, /*hidden argument*/NULL);
		int32_t L_154 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_155;
		L_155 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_153, L_154, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_155, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_157 = __this->get_battleSystem_4();
		int32_t L_158 = L_157->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_159;
		L_159 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_156, ((int32_t)il2cpp_codegen_add((int32_t)L_158, (int32_t)1)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_160;
		L_160 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_159, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_161;
		L_161 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_160, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_162;
		L_162 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_161, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_162, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_163 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_164;
		L_164 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_163, /*hidden argument*/NULL);
		int32_t L_165 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_166;
		L_166 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_164, L_165, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_167;
		L_167 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_166, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_168 = __this->get_battleSystem_4();
		int32_t L_169 = L_168->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_170;
		L_170 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_167, ((int32_t)il2cpp_codegen_add((int32_t)L_169, (int32_t)2)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_171;
		L_171 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_170, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_172;
		L_172 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_171, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173;
		L_173 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_172, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_173, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 3).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_174 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_175;
		L_175 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_174, /*hidden argument*/NULL);
		int32_t L_176 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_177;
		L_177 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_175, L_176, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_178;
		L_178 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_177, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_179 = __this->get_battleSystem_4();
		int32_t L_180 = L_179->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_181;
		L_181 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_178, ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)3)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_182;
		L_182 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_181, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_183;
		L_183 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_182, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_184;
		L_184 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_183, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_184, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0469:
	{
		// if (battleSystem.attackSlot > 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_185 = __this->get_battleSystem_4();
		int32_t L_186 = L_185->get_attackSlot_17();
		if ((((int32_t)L_186) <= ((int32_t)0)))
		{
			goto IL_0483;
		}
	}
	{
		// battleSystem.attackSlot = 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_187 = __this->get_battleSystem_4();
		L_187->set_attackSlot_17(0);
	}

IL_0483:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_188 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_189;
		L_189 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_188, /*hidden argument*/NULL);
		int32_t L_190 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_191;
		L_191 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_189, L_190, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_192;
		L_192 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_191, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_193 = __this->get_battleSystem_4();
		int32_t L_194 = L_193->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_195;
		L_195 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_192, L_194, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_196;
		L_196 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_195, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_197;
		L_197 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_196, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_198;
		L_198 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_197, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_198, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_199 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_200;
		L_200 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_199, /*hidden argument*/NULL);
		int32_t L_201 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_202;
		L_202 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_200, L_201, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_203;
		L_203 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_202, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_204 = __this->get_battleSystem_4();
		int32_t L_205 = L_204->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_206;
		L_206 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_203, ((int32_t)il2cpp_codegen_add((int32_t)L_205, (int32_t)1)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_207;
		L_207 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_206, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_208;
		L_208 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_207, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_209;
		L_209 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_208, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_209, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 3).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_210 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_211;
		L_211 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_210, /*hidden argument*/NULL);
		int32_t L_212 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_213;
		L_213 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_211, L_212, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_214;
		L_214 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_213, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_215 = __this->get_battleSystem_4();
		int32_t L_216 = L_215->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_217;
		L_217 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_214, ((int32_t)il2cpp_codegen_add((int32_t)L_216, (int32_t)3)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_218;
		L_218 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_217, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_219;
		L_219 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_218, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_220;
		L_220 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_219, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_220, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 4).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_221 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_222;
		L_222 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_221, /*hidden argument*/NULL);
		int32_t L_223 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_224;
		L_224 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_222, L_223, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_225;
		L_225 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_224, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_226 = __this->get_battleSystem_4();
		int32_t L_227 = L_226->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_228;
		L_228 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_225, ((int32_t)il2cpp_codegen_add((int32_t)L_227, (int32_t)4)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_229;
		L_229 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_228, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_230;
		L_230 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_229, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_231;
		L_231 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_230, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_231, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_057a:
	{
		// if (battleSystem.attackSlot > 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_232 = __this->get_battleSystem_4();
		int32_t L_233 = L_232->get_attackSlot_17();
		if ((((int32_t)L_233) <= ((int32_t)0)))
		{
			goto IL_0594;
		}
	}
	{
		// battleSystem.attackSlot = 0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_234 = __this->get_battleSystem_4();
		L_234->set_attackSlot_17(0);
	}

IL_0594:
	{
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_235 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_236;
		L_236 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_235, /*hidden argument*/NULL);
		int32_t L_237 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_238;
		L_238 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_236, L_237, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_239;
		L_239 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_238, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_240 = __this->get_battleSystem_4();
		int32_t L_241 = L_240->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_242;
		L_242 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_239, L_241, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_243;
		L_243 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_242, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_244;
		L_244 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_243, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_245;
		L_245 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_244, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_245, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 1).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_246 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_247;
		L_247 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_246, /*hidden argument*/NULL);
		int32_t L_248 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_249;
		L_249 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_247, L_248, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_250;
		L_250 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_249, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_251 = __this->get_battleSystem_4();
		int32_t L_252 = L_251->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_253;
		L_253 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_250, ((int32_t)il2cpp_codegen_add((int32_t)L_252, (int32_t)1)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_254;
		L_254 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_253, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_255;
		L_255 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_254, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_256;
		L_256 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_255, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_256, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 2).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_257 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_258;
		L_258 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_257, /*hidden argument*/NULL);
		int32_t L_259 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_260;
		L_260 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_258, L_259, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_261;
		L_261 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_260, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_262 = __this->get_battleSystem_4();
		int32_t L_263 = L_262->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_264;
		L_264 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_261, ((int32_t)il2cpp_codegen_add((int32_t)L_263, (int32_t)2)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_265;
		L_265 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_264, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_266;
		L_266 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_265, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_267;
		L_267 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_266, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_267, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 3).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_268 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_269;
		L_269 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_268, /*hidden argument*/NULL);
		int32_t L_270 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_271;
		L_271 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_269, L_270, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_272;
		L_272 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_271, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_273 = __this->get_battleSystem_4();
		int32_t L_274 = L_273->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_275;
		L_275 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_272, ((int32_t)il2cpp_codegen_add((int32_t)L_274, (int32_t)3)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_276;
		L_276 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_275, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_277;
		L_277 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_276, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_278;
		L_278 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_277, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_278, (bool)1, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(row).transform.GetChild(battleSystem.attackSlot + 4).transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_279 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_280;
		L_280 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_279, /*hidden argument*/NULL);
		int32_t L_281 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_282;
		L_282 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_280, L_281, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_283;
		L_283 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_282, /*hidden argument*/NULL);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_284 = __this->get_battleSystem_4();
		int32_t L_285 = L_284->get_attackSlot_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_286;
		L_286 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_283, ((int32_t)il2cpp_codegen_add((int32_t)L_285, (int32_t)4)), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_287;
		L_287 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_286, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_288;
		L_288 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_287, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_289;
		L_289 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_288, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_289, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUI::DeSelectAllSlots()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_DeSelectAllSlots_m2AA46637CD0BA7EC4F5A868EA6D8ACF5B6C4E26C (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_006c;
	}

IL_0004:
	{
		// EnemyCharacters.transform.GetChild(0).transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// EnemyCharacters.transform.GetChild(1).transform.GetChild(i).transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_EnemyCharacters_12();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, 1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_12, L_13, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_15, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < 5; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BattleUI::FleeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_FleeButton_m539CC8CB91E7087D20EFA74074B1045DC33DED4A (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	{
		// battleSystem.flee = true;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = __this->get_battleSystem_4();
		L_0->set_flee_15((bool)1);
		// battleSystem.TransitionToState(endState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = __this->get_battleSystem_4();
		BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * L_2 = __this->get_endState_5();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleUI::ReturnButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_ReturnButton_mE6D269E00917F72AD47032B49FF4BDC09612482E (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameManger.gameManger.bossBattle)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_1 = L_0->get_bossBattle_21();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// GameManger.gameManger.battleHasStarted = false;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_2->set_battleHasStarted_20((bool)0);
	}

IL_0017:
	{
		// battleSystem.returnToOverWorld = true;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = __this->get_battleSystem_4();
		L_3->set_returnToOverWorld_16((bool)1);
		// }
		return;
	}
}
// System.Int32 BattleUI::get_CoinFlip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BattleUI_get_CoinFlip_m35C47531F1E6968E89075199456E34D16632C86A (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	{
		// private int CoinFlip => Random.Range(0, 2);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void BattleUI::DestroyEnemy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_DestroyEnemy_m7E06534C2A098F1102A548213C34C844773C920F (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, int32_t ___CharacterSlot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// battleSystem.EnemiesInBattle[CharacterSlot] = null;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = __this->get_battleSystem_4();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = ___CharacterSlot0;
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// Destroy(EnemySprites[CharacterSlot]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_EnemySprites_6();
		int32_t L_4 = ___CharacterSlot0;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
		// EnemySprites[CharacterSlot] = null;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_EnemySprites_6();
		int32_t L_8 = ___CharacterSlot0;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void BattleUI::DestroyPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI_DestroyPlayer_mDF96C86E60A94D56D9234F0523A8A9937C6BEF37 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, int32_t ___CharacterSlot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(PlayerSprites[CharacterSlot]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_PlayerSprites_7();
		int32_t L_1 = ___CharacterSlot0;
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// PlayerSprites[CharacterSlot] = null;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_PlayerSprites_7();
		int32_t L_5 = ___CharacterSlot0;
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void BattleUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleUI__ctor_m1FB76BFD2B2DFC30BD7AE1813D2C4E7C768B5B79 (BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly BattleEndState endState = new BattleEndState();
		BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * L_0 = (BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 *)il2cpp_codegen_object_new(BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86_il2cpp_TypeInfo_var);
		BattleEndState__ctor_m72C42D2EEA0315410848BA308658280A239EEAC8(L_0, /*hidden argument*/NULL);
		__this->set_endState_5(L_0);
		// public GameObject[] EnemySprites = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_EnemySprites_6(L_1);
		// public GameObject[] PlayerSprites = new GameObject[3];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_PlayerSprites_7(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleWhosNextState::EnterState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_EnterState_m8BFF2CC4C2BF126577AF23D6AFB264B4AE46C975 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// CheckCharactersHealth(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		BattleWhosNextState_CheckCharactersHealth_m08EE22F05DB791D05128B1F38BE9EFFD2802670B(__this, L_0, /*hidden argument*/NULL);
		// DidEveryoneTakeATurn(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		bool L_2;
		L_2 = BattleWhosNextState_DidEveryoneTakeATurn_m3125747E1A352A175838AB9BA42791B818D066E9(__this, L_1, /*hidden argument*/NULL);
		// TransitionToCorrectState(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		BattleWhosNextState_TransitionToCorrectState_mDB56826C68F9AD318224533326CC50FB9378FBEC(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleWhosNextState::TransitionToCorrectState(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_TransitionToCorrectState_mDB56826C68F9AD318224533326CC50FB9378FBEC (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (AreAllEnemiesDead(battleSystem) || AreAllPlayerDead(battleSystem))
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		bool L_1;
		L_1 = BattleWhosNextState_AreAllEnemiesDead_mB07EA9355252193E147BE4426037EE3F48B86C18(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_2 = ___battleSystem0;
		bool L_3;
		L_3 = BattleWhosNextState_AreAllPlayerDead_mA440D2A3411B628F25049951DF29F3708BC2FD94(__this, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}

IL_0012:
	{
		// battleSystem.TransitionToState(battleSystem.endState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_5 = ___battleSystem0;
		BattleEndState_tC3B4D311CE5C6E97DF55985A2911D272E13E4A86 * L_6 = L_5->get_endState_9();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001f:
	{
		// if (battleSystem.charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.Enemy)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_7 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = L_7->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_8, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_10;
		L_10 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_9, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_11 = L_10->get_characterDefinition_4();
		bool L_12 = L_11->get_Enemy_6();
		if (!L_12)
		{
			goto IL_0048;
		}
	}
	{
		// battleSystem.TransitionToState(battleSystem.enemyState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_13 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_14 = ___battleSystem0;
		BattleEnemyState_t14E197488DED0E968B2A32D8A13EDBD1FE06CB0E * L_15 = L_14->get_enemyState_8();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0048:
	{
		// battleSystem.TransitionToState(battleSystem.playerState);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_16 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_17 = ___battleSystem0;
		BattlePlayerState_tD90648BD9E93C4FDFC6D2ADEA8110FA66F910329 * L_18 = L_17->get_playerState_7();
		BattleSystem_TransitionToState_m5141296B7EF4903E6E074C380AC33B74AB32A5E3(L_16, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BattleWhosNextState::Update(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_Update_m1670A00B068E3F6D1E3AA4E0F108B6911C7E3FCF (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void BattleWhosNextState::CheckCharactersHealth(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_CheckCharactersHealth_m08EE22F05DB791D05128B1F38BE9EFFD2802670B (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// if (battleSystem.EnemiesInBattle[i] != null && battleSystem.EnemiesInBattle[i].GetComponent<CharacterStats>().characterDefinition.currentHealth <= 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_EnemiesInBattle_11();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_11;
		L_11 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_10, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_12 = L_11->get_characterDefinition_4();
		int32_t L_13 = L_12->get_currentHealth_11();
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0037;
		}
	}
	{
		// battleSystem.EnemiesInBattle[i] = null;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_14 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = L_14->get_EnemiesInBattle_11();
		int32_t L_16 = V_0;
		ArrayElementTypeCheck (L_15, NULL);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0037:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_18 = V_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_19 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = L_19->get_EnemiesInBattle_11();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		V_1 = 0;
		goto IL_0081;
	}

IL_004a:
	{
		// if (battleSystem.PlayersInBattle[i] != null && battleSystem.PlayersInBattle[i].GetComponent<CharacterStats>().characterDefinition.currentHealth <= 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_21 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = L_21->get_PlayersInBattle_12();
		int32_t L_23 = V_1;
		int32_t L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_007d;
		}
	}
	{
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_27 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28 = L_27->get_PlayersInBattle_12();
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_32;
		L_32 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_31, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_33 = L_32->get_characterDefinition_4();
		int32_t L_34 = L_33->get_currentHealth_11();
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		// battleSystem.PlayersInBattle[i] = null;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_35 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_36 = L_35->get_PlayersInBattle_12();
		int32_t L_37 = V_1;
		ArrayElementTypeCheck (L_36, NULL);
		(L_36)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_007d:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0081:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_39 = V_1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_40 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_41 = L_40->get_PlayersInBattle_12();
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))))))
		{
			goto IL_004a;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean BattleWhosNextState::DidEveryoneTakeATurn(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleWhosNextState_DidEveryoneTakeATurn_m3125747E1A352A175838AB9BA42791B818D066E9 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (battleSystem.charactersInBattle.Count == 0)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = L_0->get_charactersInBattle_10();
		int32_t L_2;
		L_2 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_1, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// RePopulateCharactersInBattle(battleSystem);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		BattleWhosNextState_RePopulateCharactersInBattle_mDA37EDCB3BFC646C697EE6018C34C65F39C3D39D(__this, L_3, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void BattleWhosNextState::RePopulateCharactersInBattle(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState_RePopulateCharactersInBattle_mDA37EDCB3BFC646C697EE6018C34C65F39C3D39D (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRePopulateCharactersInBattleU3Eb__5_0_m2B9B73235808A6DD17AC737EA9846DA0C983AE85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * G_B12_0 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * G_B12_1 = NULL;
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * G_B12_2 = NULL;
	Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * G_B11_0 = NULL;
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * G_B11_1 = NULL;
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * G_B11_2 = NULL;
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		V_0 = 0;
		goto IL_002b;
	}

IL_0004:
	{
		// if (battleSystem.EnemiesInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// battleSystem.charactersInBattle.Add(battleSystem.EnemiesInBattle[i]);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_7 = L_6->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_8 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_8->get_EnemiesInBattle_11();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_7, L_12, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_0027:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_002b:
	{
		// for (int i = 0; i < battleSystem.EnemiesInBattle.Length; i++)
		int32_t L_14 = V_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_15 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = L_15->get_EnemiesInBattle_11();
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		V_1 = 0;
		goto IL_0061;
	}

IL_003a:
	{
		// if (battleSystem.PlayersInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_17 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = L_17->get_PlayersInBattle_12();
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_005d;
		}
	}
	{
		// battleSystem.charactersInBattle.Add(battleSystem.PlayersInBattle[i]);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_23 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_24 = L_23->get_charactersInBattle_10();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_25 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = L_25->get_PlayersInBattle_12();
		int32_t L_27 = V_1;
		int32_t L_28 = L_27;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_24, L_29, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
	}

IL_005d:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < battleSystem.PlayersInBattle.Length; i++)
		int32_t L_31 = V_1;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_32 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = L_32->get_PlayersInBattle_12();
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))))))
		{
			goto IL_003a;
		}
	}
	{
		// battleSystem.charactersInBattle = battleSystem.charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_34 = ___battleSystem0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_35 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_36 = L_35->get_charactersInBattle_10();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var);
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_37 = ((U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var))->get_U3CU3E9__5_0_1();
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_38 = L_37;
		G_B11_0 = L_38;
		G_B11_1 = L_36;
		G_B11_2 = L_34;
		if (L_38)
		{
			G_B12_0 = L_38;
			G_B12_1 = L_36;
			G_B12_2 = L_34;
			goto IL_0092;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var);
		U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * L_39 = ((U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_40 = (Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 *)il2cpp_codegen_object_new(Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16_il2cpp_TypeInfo_var);
		Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8(L_40, L_39, (intptr_t)((intptr_t)U3CU3Ec_U3CRePopulateCharactersInBattleU3Eb__5_0_m2B9B73235808A6DD17AC737EA9846DA0C983AE85_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m37D891C9D6625515B767D24C90A7EA3EB84C78A8_RuntimeMethod_var);
		Func_2_tCFBD016F259C9E0ED7E31DE3B4FC4695F163FD16 * L_41 = L_40;
		((U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var))->set_U3CU3E9__5_0_1(L_41);
		G_B12_0 = L_41;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_0092:
	{
		RuntimeObject* L_42;
		L_42 = Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B(G_B12_1, G_B12_0, /*hidden argument*/Enumerable_OrderByDescending_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mDBBF50927490EF58E488E450A193C264C205146B_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_43;
		L_43 = Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1(L_42, /*hidden argument*/Enumerable_ToList_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m7B392C9EB4F3B2B75D972095BD5F04FD238EDED1_RuntimeMethod_var);
		G_B12_2->set_charactersInBattle_10(L_43);
		// }
		return;
	}
}
// System.Boolean BattleWhosNextState::AreAllEnemiesDead(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleWhosNextState_AreAllEnemiesDead_mB07EA9355252193E147BE4426037EE3F48B86C18 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 5; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// if (battleSystem.EnemiesInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < 5; i++)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)5)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean BattleWhosNextState::AreAllPlayerDead(BattleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BattleWhosNextState_AreAllPlayerDead_mA440D2A3411B628F25049951DF29F3708BC2FD94 (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// if (battleSystem.PlayersInBattle[i] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_PlayersInBattle_12();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0016:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < GameManger.gameManger.party.PlayerParty.Count; i++)
		int32_t L_7 = V_0;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_8 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_9 = L_8->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = L_9->get_PlayerParty_1();
		int32_t L_11;
		L_11 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_10, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_11)))
		{
			goto IL_0004;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void BattleWhosNextState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BattleWhosNextState__ctor_m989DF2EF146AC5B07220E8D710254722901BCCCE (BattleWhosNextState_t2BE5DE4752111AD2AB2C92F532A3299FFD4859D9 * __this, const RuntimeMethod* method)
{
	{
		BattleBaseState__ctor_m48663B089C83C5837314CFAA40A348712C6EAE34(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollows::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollows_LateUpdate_m52BBAFD7CADC91877D720E7DDDCAB6E813B9ACE8 (CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9A1B8A0AF0475A9C4974D3FB03316BA0853530B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// target = GameObject.Find("OverWorldCharacter").GetComponent<Transform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF9A1B8A0AF0475A9C4974D3FB03316BA0853530B, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228(L_2, /*hidden argument*/GameObject_GetComponent_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m60FB1B4E281B360A56A54509EBA605FD5F04D228_RuntimeMethod_var);
		__this->set_target_4(L_3);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CameraFollows::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollows_FixedUpdate_m1794D502DEF00EBC383338CFDCA2BA234643A679 (CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (target != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005b;
		}
	}
	{
		// Vector3 targetPosition = target.position + new Vector3(0, 0, -1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// transform.position = Vector3.SmoothDamp(transform.position, targetPosition, ref velocity, smoothTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_velocity_6();
		float L_11 = __this->get_smoothTime_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_8, L_9, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_10, L_11, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_12, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void CameraFollows::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollows__ctor_m4DF42B95EBEEDF5685761B82154BE4ED6EAB6540 (CameraFollows_tF420480758FE7731460563B6D48583DC9B2927F2 * __this, const RuntimeMethod* method)
{
	{
		// public float smoothTime = 0.3f;
		__this->set_smoothTime_5((0.300000012f));
		// private Vector3 velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_velocity_6(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterInventory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInventory_Start_m88D7B526BB7D8C75D423BA15AC521B8F82FE177C (CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void CharacterInventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInventory__ctor_mD54DC4C07FF29F264F9C5695BD70D77A2BE59507 (CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats__ctor_m0A13E837B26F838C5368D2E2EB4484B329FA4516 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public CharacterStats()
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		// charInv = CharacterInventory.instance;
		CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * L_0 = ((CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_StaticFields*)il2cpp_codegen_static_fields_for(CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E_il2cpp_TypeInfo_var))->get_instance_4();
		__this->set_charInv_5(L_0);
		// }
		return;
	}
}
// System.Void CharacterStats::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_Start_mF90DD6887FCF6A32143ECF008BE1010055319B25 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CharacterStats::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_Update_m88D304639F6453C0C06002BA32EC1CA6A0269C74 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CharacterStats::ApplyHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_ApplyHealth_m70D221F40D91E8B45F0537FE2430BCCD813DB628 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___healthAmount0, const RuntimeMethod* method)
{
	{
		// characterDefinition.ApplyHealth(healthAmount);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = ___healthAmount0;
		CharacterStats_SO_ApplyHealth_m0193AF39CECA1F6BBF25B4EFC669D1131E0740E7(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats::ApplyMagic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_ApplyMagic_mD141B8C82A29F38BD8B26F66B7F55332FCD4B14D (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___magicAmount0, const RuntimeMethod* method)
{
	{
		// characterDefinition.ApplyMagic(magicAmount);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = ___magicAmount0;
		CharacterStats_SO_ApplyMagic_m1B0240F7831E3B8200C610E9A710835395D11DA3(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats::GiveWealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_GiveWealth_m653D569F476A9182F0D28236C5E3B3900155E4F1 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___wealthAmount0, const RuntimeMethod* method)
{
	{
		// characterDefinition.GiveWeath(wealthAmount);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = ___wealthAmount0;
		CharacterStats_SO_GiveWeath_mD51C00DE253FB8F3D1C51E6B72C46C4417D1108B(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats::GainExperience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_GainExperience_mB64297D670A820AB447466B2C9F0850EC8F10C30 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// characterDefinition.ApplyExperience(amount);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = ___amount0;
		CharacterStats_SO_ApplyExperience_mE9158EFFB30F96A280DC6E4BD6A44B42D638238A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_TakeDamage_mF154444F5FC48749AB3305A5CC3F11BE3CB19070 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// characterDefinition.TakeDamage(amount);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = ___amount0;
		CharacterStats_SO_TakeDamage_mD4D4F5727E133E0A139D62F5ED1F03A491A7BCC8(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats::TakeMagic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_TakeMagic_m9501E9B59A0830EA4389D7E1BFAA7480A9AB8730 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// characterDefinition.SpendMagic(amount);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = ___amount0;
		CharacterStats_SO_SpendMagic_m81FFF00D2E148FABC09D44FC35FED082B17CB42A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats::ChangeEquipableItem(ItemPickUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_ChangeEquipableItem_mDD8751FF278E916D8809F3B7ABF3F57714366EF1 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___itemPickup0, const RuntimeMethod* method)
{
	{
		// if(!characterDefinition.UnEquipItem(itemPickup, charInv, characterItemSlot))
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_1 = ___itemPickup0;
		CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * L_2 = __this->get_charInv_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_characterItemSlot_6();
		bool L_4;
		L_4 = CharacterStats_SO_UnEquipItem_mD6DC460B68D00D3FD7387AA17FFEA6AAC97A3B04(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		// characterDefinition.Equip(itemPickup, charInv, characterItemSlot);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_5 = __this->get_characterDefinition_4();
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_6 = ___itemPickup0;
		CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * L_7 = __this->get_charInv_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_characterItemSlot_6();
		CharacterStats_SO_Equip_m81D50FEDE63F90375DD7F6921D9F2F7483FF9CF6(L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Int32 CharacterStats::GetHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterStats_GetHealth_mEF572DB257F35CFADEAB1CC11B79D26E66D4DF03 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, const RuntimeMethod* method)
{
	{
		// return characterDefinition.currentHealth;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		int32_t L_1 = L_0->get_currentHealth_11();
		return L_1;
	}
}
// ItemPickUp CharacterStats::GetCurrentWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_GetCurrentWeapon_mD9C0B9E7DC54D7F08DFA123245F6B228245D59B3 (CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * __this, const RuntimeMethod* method)
{
	{
		// return characterDefinition.weapon;
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_0 = __this->get_characterDefinition_4();
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_1;
		L_1 = CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ItemPickUp CharacterStats_SO::get_weapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// public ItemPickUp weapon { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = __this->get_U3CweaponU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void CharacterStats_SO::set_weapon(ItemPickUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_set_weapon_m0D1C2DE0C413D7699558FFE10586B2D33148C149 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method)
{
	{
		// public ItemPickUp weapon { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___value0;
		__this->set_U3CweaponU3Ek__BackingField_7(L_0);
		return;
	}
}
// ItemPickUp CharacterStats_SO::get_shield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_shield_mD81FC7CC77F5686CE11876A5D4C08E5D98C32F45 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// public ItemPickUp shield { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = __this->get_U3CshieldU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void CharacterStats_SO::set_shield(ItemPickUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_set_shield_m9929DF23114361952FADA767CA387477C5C703C7 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method)
{
	{
		// public ItemPickUp shield { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___value0;
		__this->set_U3CshieldU3Ek__BackingField_8(L_0);
		return;
	}
}
// ItemPickUp CharacterStats_SO::get_accessory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_accessory_m7DB6D247B2B2381B637C210EA5B4EAC69C848F55 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// public ItemPickUp accessory { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = __this->get_U3CaccessoryU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void CharacterStats_SO::set_accessory(ItemPickUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_set_accessory_m76858843C2304B65B6B8BD734075C34928DAB107 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method)
{
	{
		// public ItemPickUp accessory { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___value0;
		__this->set_U3CaccessoryU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void CharacterStats_SO::ApplyHealth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_ApplyHealth_m0193AF39CECA1F6BBF25B4EFC669D1131E0740E7 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___healthAmount0, const RuntimeMethod* method)
{
	{
		// if ((currentHealth + healthAmount) > maxHealth)
		int32_t L_0 = __this->get_currentHealth_11();
		int32_t L_1 = ___healthAmount0;
		int32_t L_2 = __this->get_maxHealth_10();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		// currentHealth = maxHealth;
		int32_t L_3 = __this->get_maxHealth_10();
		__this->set_currentHealth_11(L_3);
		// }
		return;
	}

IL_001d:
	{
		// currentHealth += healthAmount;
		int32_t L_4 = __this->get_currentHealth_11();
		int32_t L_5 = ___healthAmount0;
		__this->set_currentHealth_11(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.Void CharacterStats_SO::ApplyMagic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_ApplyMagic_m1B0240F7831E3B8200C610E9A710835395D11DA3 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___magicAmount0, const RuntimeMethod* method)
{
	{
		// if ((currentMagic + magicAmount) > maxMagic)
		int32_t L_0 = __this->get_currentMagic_13();
		int32_t L_1 = ___magicAmount0;
		int32_t L_2 = __this->get_maxMagic_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) <= ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		// currentMagic = maxMagic;
		int32_t L_3 = __this->get_maxMagic_12();
		__this->set_currentMagic_13(L_3);
		// }
		return;
	}

IL_001d:
	{
		// currentMagic += magicAmount;
		int32_t L_4 = __this->get_currentMagic_13();
		int32_t L_5 = ___magicAmount0;
		__this->set_currentMagic_13(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.Void CharacterStats_SO::GiveWeath(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_GiveWeath_mD51C00DE253FB8F3D1C51E6B72C46C4417D1108B (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___wealthAmount0, const RuntimeMethod* method)
{
	{
		// Wealth += wealthAmount;
		int32_t L_0 = __this->get_Wealth_14();
		int32_t L_1 = ___wealthAmount0;
		__this->set_Wealth_14(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// }
		return;
	}
}
// System.Void CharacterStats_SO::ApplyExperience(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_ApplyExperience_mE9158EFFB30F96A280DC6E4BD6A44B42D638238A (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___xpAmount0, const RuntimeMethod* method)
{
	bool V_0 = false;
	CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * G_B3_0 = NULL;
	CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * G_B4_1 = NULL;
	{
		// bool hasEnoughXptoLevelup = (charExperience + xpAmount) >= (charLevel + 1) * 10;
		int32_t L_0 = __this->get_charExperience_25();
		int32_t L_1 = ___xpAmount0;
		int32_t L_2 = __this->get_charLevel_26();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) < ((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)), (int32_t)((int32_t)10)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (!IsMaxLevel() && hasEnoughXptoLevelup)
		bool L_3;
		L_3 = CharacterStats_SO_IsMaxLevel_mD300249E5B3926C2E4FF68045CEE2CFB23505577(__this, /*hidden argument*/NULL);
		bool L_4 = V_0;
		if (!((int32_t)((int32_t)((((int32_t)L_3) == ((int32_t)0))? 1 : 0)&(int32_t)L_4)))
		{
			goto IL_0050;
		}
	}
	{
		// LevelUp();
		CharacterStats_SO_LevelUp_mF6078C34F8AD7200E2B8B9A6B828A4AE2B21415A(__this, /*hidden argument*/NULL);
		// charExperience = IsMaxLevel() ? 0 : charExperience + xpAmount - (charLevel * 10);
		bool L_5;
		L_5 = CharacterStats_SO_IsMaxLevel_mD300249E5B3926C2E4FF68045CEE2CFB23505577(__this, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_5)
		{
			G_B3_0 = __this;
			goto IL_0049;
		}
	}
	{
		int32_t L_6 = __this->get_charExperience_25();
		int32_t L_7 = ___xpAmount0;
		int32_t L_8 = __this->get_charLevel_26();
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)L_7)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)((int32_t)10)))));
		G_B4_1 = G_B2_0;
		goto IL_004a;
	}

IL_0049:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_004a:
	{
		G_B4_1->set_charExperience_25(G_B4_0);
		// }
		return;
	}

IL_0050:
	{
		// charExperience += xpAmount;
		int32_t L_9 = __this->get_charExperience_25();
		int32_t L_10 = ___xpAmount0;
		__this->set_charExperience_25(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)));
		// }
		return;
	}
}
// System.Boolean CharacterStats_SO::IsMaxLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterStats_SO_IsMaxLevel_mD300249E5B3926C2E4FF68045CEE2CFB23505577 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// return charLevel + 1 >= charLevelUps.Length + 1;
		int32_t L_0 = __this->get_charLevel_26();
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_1 = __this->get_charLevelUps_27();
		return (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), (int32_t)1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void CharacterStats_SO::Equip(ItemPickUp,CharacterInventory,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_Equip_m81D50FEDE63F90375DD7F6921D9F2F7483FF9CF6 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___itemPickup0, CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * ___charInventory1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Slot2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (itemPickup.itemDefinition.itemType)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___itemPickup0;
		ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * L_1 = L_0->get_itemDefinition_4();
		int32_t L_2 = L_1->get_itemType_4();
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_006b;
			}
		}
	}
	{
		return;
	}

IL_0021:
	{
		// weapon = itemPickup;
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_4 = ___itemPickup0;
		CharacterStats_SO_set_weapon_m0D1C2DE0C413D7699558FFE10586B2D33148C149_inline(__this, L_4, /*hidden argument*/NULL);
		// currentAttack = baseAttack + weapon.itemDefinition.itemAmount;
		int32_t L_5 = __this->get_baseAttack_15();
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_6;
		L_6 = CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D_inline(__this, /*hidden argument*/NULL);
		ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * L_7 = L_6->get_itemDefinition_4();
		int32_t L_8 = L_7->get_itemAmount_5();
		__this->set_currentAttack_16(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_8)));
		// break;
		return;
	}

IL_0046:
	{
		// shield = itemPickup;
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_9 = ___itemPickup0;
		CharacterStats_SO_set_shield_m9929DF23114361952FADA767CA387477C5C703C7_inline(__this, L_9, /*hidden argument*/NULL);
		// currentDefense = baseDefense + shield.itemDefinition.itemAmount;
		int32_t L_10 = __this->get_baseDefense_19();
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_11;
		L_11 = CharacterStats_SO_get_shield_mD81FC7CC77F5686CE11876A5D4C08E5D98C32F45_inline(__this, /*hidden argument*/NULL);
		ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * L_12 = L_11->get_itemDefinition_4();
		int32_t L_13 = L_12->get_itemAmount_5();
		__this->set_currentDefense_20(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_13)));
		// break;
		return;
	}

IL_006b:
	{
		// accessory = itemPickup;
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_14 = ___itemPickup0;
		CharacterStats_SO_set_accessory_m76858843C2304B65B6B8BD734075C34928DAB107_inline(__this, L_14, /*hidden argument*/NULL);
		// currentSpeed = baseSpeed + accessory.itemDefinition.itemAmount;
		float L_15 = __this->get_baseSpeed_23();
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_16;
		L_16 = CharacterStats_SO_get_accessory_m7DB6D247B2B2381B637C210EA5B4EAC69C848F55_inline(__this, /*hidden argument*/NULL);
		ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * L_17 = L_16->get_itemDefinition_4();
		int32_t L_18 = L_17->get_itemAmount_5();
		__this->set_currentSpeed_24(((float)il2cpp_codegen_add((float)L_15, (float)((float)((float)L_18)))));
		// }
		return;
	}
}
// System.Void CharacterStats_SO::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_TakeDamage_mD4D4F5727E133E0A139D62F5ED1F03A491A7BCC8 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// currentHealth -= amount;
		int32_t L_0 = __this->get_currentHealth_11();
		int32_t L_1 = ___amount0;
		__this->set_currentHealth_11(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(currentHealth <= 0)
		int32_t L_2 = __this->get_currentHealth_11();
		// }
		return;
	}
}
// System.Void CharacterStats_SO::SpendMagic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_SpendMagic_m81FFF00D2E148FABC09D44FC35FED082B17CB42A (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	{
		// currentMagic -= amount;
		int32_t L_0 = __this->get_currentMagic_13();
		int32_t L_1 = ___amount0;
		__this->set_currentMagic_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(currentMagic < 0)
		int32_t L_2 = __this->get_currentMagic_13();
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// currentMagic = 0;
		__this->set_currentMagic_13(0);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Boolean CharacterStats_SO::UnEquipItem(ItemPickUp,CharacterInventory,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterStats_SO_UnEquipItem_mD6DC460B68D00D3FD7387AA17FFEA6AAC97A3B04 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___itemPickup0, CharacterInventory_t1D9CE5CD1B4F40808198188CDEDB4A19ECD3194E * ___charInventory1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Slot2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// bool previousItemSame = false;
		V_0 = (bool)0;
		// switch (itemPickup.itemDefinition.itemType)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___itemPickup0;
		ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * L_1 = L_0->get_itemDefinition_4();
		int32_t L_2 = L_1->get_itemType_4();
		V_1 = L_2;
		int32_t L_3 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)3)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00c2;
			}
		}
	}
	{
		goto IL_0109;
	}

IL_0027:
	{
		// if (weapon != null)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_4;
		L_4 = CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0109;
		}
	}
	{
		// if (weapon == itemPickup)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_6;
		L_6 = CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D_inline(__this, /*hidden argument*/NULL);
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_7 = ___itemPickup0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		// previousItemSame = true;
		V_0 = (bool)1;
	}

IL_0048:
	{
		// Destroy(Slot.transform.GetChild(0).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = ___Slot2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_12, /*hidden argument*/NULL);
		// weapon = null;
		CharacterStats_SO_set_weapon_m0D1C2DE0C413D7699558FFE10586B2D33148C149_inline(__this, (ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 *)NULL, /*hidden argument*/NULL);
		// currentAttack = baseAttack;
		int32_t L_13 = __this->get_baseAttack_15();
		__this->set_currentAttack_16(L_13);
		// break;
		goto IL_0109;
	}

IL_0076:
	{
		// if (shield != null)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_14;
		L_14 = CharacterStats_SO_get_shield_mD81FC7CC77F5686CE11876A5D4C08E5D98C32F45_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_14, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0109;
		}
	}
	{
		// if (shield == itemPickup)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_16;
		L_16 = CharacterStats_SO_get_shield_mD81FC7CC77F5686CE11876A5D4C08E5D98C32F45_inline(__this, /*hidden argument*/NULL);
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_17 = ___itemPickup0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		// previousItemSame = true;
		V_0 = (bool)1;
	}

IL_0097:
	{
		// Destroy(Slot.transform.GetChild(0).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = ___Slot2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_20, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_22, /*hidden argument*/NULL);
		// shield = null;
		CharacterStats_SO_set_shield_m9929DF23114361952FADA767CA387477C5C703C7_inline(__this, (ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 *)NULL, /*hidden argument*/NULL);
		// currentDefense = baseDefense;
		int32_t L_23 = __this->get_baseDefense_19();
		__this->set_currentDefense_20(L_23);
		// break;
		goto IL_0109;
	}

IL_00c2:
	{
		// if (accessory != null)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_24;
		L_24 = CharacterStats_SO_get_accessory_m7DB6D247B2B2381B637C210EA5B4EAC69C848F55_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_24, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0109;
		}
	}
	{
		// if (accessory == itemPickup)
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_26;
		L_26 = CharacterStats_SO_get_accessory_m7DB6D247B2B2381B637C210EA5B4EAC69C848F55_inline(__this, /*hidden argument*/NULL);
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_27 = ___itemPickup0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00e0;
		}
	}
	{
		// previousItemSame = true;
		V_0 = (bool)1;
	}

IL_00e0:
	{
		// Destroy(Slot.transform.GetChild(0).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = ___Slot2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_30, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
		// accessory = null;
		CharacterStats_SO_set_accessory_m76858843C2304B65B6B8BD734075C34928DAB107_inline(__this, (ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 *)NULL, /*hidden argument*/NULL);
		// currentSpeed = baseSpeed;
		float L_33 = __this->get_baseSpeed_23();
		__this->set_currentSpeed_24(L_33);
	}

IL_0109:
	{
		// return previousItemSame;
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Void CharacterStats_SO::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_Death_mFB583FB79C7E8C7BE072CBFDFA93D2497673AD1F (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9FE63D49D60E7DF5869DD0F8F6E32B9C0CEB2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("You're Dead");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDE9FE63D49D60E7DF5869DD0F8F6E32B9C0CEB2E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats_SO::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_LevelUp_mF6078C34F8AD7200E2B8B9A6B828A4AE2B21415A (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A5DD9AEDC3AC45F3006878CD9DA2B4679F117A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral578089E2A1400FD0CC9509BAD26FFC854281EE0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61768E5AE4652F143F0C608992D048B532617092);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70DD7414AF2EA2EE656B0D578EC9201BA1404D5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8507E3FD361C6887FAE9B0A9004AAD0B32596D12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C38436478968960F97323B0285144E41B3AEA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1C2A5F0BDC807BE18A7D4198BEA0A35D0E4B1C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8A0FAFEAF74CB7D42602C756CCF8FB3E1146E21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// charLevel++;
		int32_t L_0 = __this->get_charLevel_26();
		__this->set_charLevel_26(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// maxHealth += charLevelUps[charLevel - 1].maxHealth;
		int32_t L_1 = __this->get_maxHealth_10();
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_2 = __this->get_charLevelUps_27();
		int32_t L_3 = __this->get_charLevel_26();
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = L_5->get_maxHealth_0();
		__this->set_maxHealth_10(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_6)));
		// Debug.Log("Health increased by " + charLevelUps[charLevel - 1].maxHealth + " Max Health is now " + maxHealth);
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_7 = __this->get_charLevelUps_27();
		int32_t L_8 = __this->get_charLevel_26();
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		int32_t* L_11 = L_10->get_address_of_maxHealth_0();
		String_t* L_12;
		L_12 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_11, /*hidden argument*/NULL);
		int32_t* L_13 = __this->get_address_of_maxHealth_10();
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral61768E5AE4652F143F0C608992D048B532617092, L_12, _stringLiteral0A5DD9AEDC3AC45F3006878CD9DA2B4679F117A9, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// maxMagic += charLevelUps[charLevel - 1].maxMagic;
		int32_t L_16 = __this->get_maxMagic_12();
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_17 = __this->get_charLevelUps_27();
		int32_t L_18 = __this->get_charLevel_26();
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = L_20->get_maxMagic_1();
		__this->set_maxMagic_12(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)L_21)));
		// baseAttack += charLevelUps[charLevel - 1].baseAttack;
		int32_t L_22 = __this->get_baseAttack_15();
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_23 = __this->get_charLevelUps_27();
		int32_t L_24 = __this->get_charLevel_26();
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = L_26->get_baseAttack_2();
		__this->set_baseAttack_15(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)L_27)));
		// Debug.Log("Attack increased by " + charLevelUps[charLevel - 1].baseAttack + " Attack is now " + baseAttack);
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_28 = __this->get_charLevelUps_27();
		int32_t L_29 = __this->get_charLevel_26();
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		int32_t* L_32 = L_31->get_address_of_baseAttack_2();
		String_t* L_33;
		L_33 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_32, /*hidden argument*/NULL);
		int32_t* L_34 = __this->get_address_of_baseAttack_15();
		String_t* L_35;
		L_35 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_34, /*hidden argument*/NULL);
		String_t* L_36;
		L_36 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral8507E3FD361C6887FAE9B0A9004AAD0B32596D12, L_33, _stringLiteral578089E2A1400FD0CC9509BAD26FFC854281EE0A, L_35, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_36, /*hidden argument*/NULL);
		// baseDefense += charLevelUps[charLevel - 1].baseDefense;
		int32_t L_37 = __this->get_baseDefense_19();
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_38 = __this->get_charLevelUps_27();
		int32_t L_39 = __this->get_charLevel_26();
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		int32_t L_42 = L_41->get_baseDefense_3();
		__this->set_baseDefense_19(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)L_42)));
		// Debug.Log("Defense increased by " + charLevelUps[charLevel - 1].baseDefense + " Defense is now " + baseDefense);
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_43 = __this->get_charLevelUps_27();
		int32_t L_44 = __this->get_charLevel_26();
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		int32_t* L_47 = L_46->get_address_of_baseDefense_3();
		String_t* L_48;
		L_48 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_47, /*hidden argument*/NULL);
		int32_t* L_49 = __this->get_address_of_baseDefense_19();
		String_t* L_50;
		L_50 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_49, /*hidden argument*/NULL);
		String_t* L_51;
		L_51 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralB9C38436478968960F97323B0285144E41B3AEA0, L_48, _stringLiteralF8A0FAFEAF74CB7D42602C756CCF8FB3E1146E21, L_50, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_51, /*hidden argument*/NULL);
		// baseSpeed += charLevelUps[charLevel - 1].baseSpeed;
		float L_52 = __this->get_baseSpeed_23();
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_53 = __this->get_charLevelUps_27();
		int32_t L_54 = __this->get_charLevel_26();
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_56 = (L_53)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_55));
		int32_t L_57 = L_56->get_baseSpeed_4();
		__this->set_baseSpeed_23(((float)il2cpp_codegen_add((float)L_52, (float)((float)((float)L_57)))));
		// Debug.Log("Speed increased by " + charLevelUps[charLevel - 1].baseSpeed + " Speed is now " + baseSpeed);
		CharLevelUpsU5BU5D_tDBD9E7789D61D077237C362BFBAC68C3AD4B6406* L_58 = __this->get_charLevelUps_27();
		int32_t L_59 = __this->get_charLevel_26();
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1));
		CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		int32_t* L_62 = L_61->get_address_of_baseSpeed_4();
		String_t* L_63;
		L_63 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_62, /*hidden argument*/NULL);
		float* L_64 = __this->get_address_of_baseSpeed_23();
		String_t* L_65;
		L_65 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_64, /*hidden argument*/NULL);
		String_t* L_66;
		L_66 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralF1C2A5F0BDC807BE18A7D4198BEA0A35D0E4B1C0, L_63, _stringLiteral70DD7414AF2EA2EE656B0D578EC9201BA1404D5D, L_65, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_66, /*hidden argument*/NULL);
		// FullyHealCharacter();
		CharacterStats_SO_FullyHealCharacter_mAE0AF244FDF5A8F9DD11335653B863FA55DAEB0F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterStats_SO::FullyHealCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO_FullyHealCharacter_mAE0AF244FDF5A8F9DD11335653B863FA55DAEB0F (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->get_maxHealth_10();
		__this->set_currentHealth_11(L_0);
		// currentMagic = maxMagic;
		int32_t L_1 = __this->get_maxMagic_12();
		__this->set_currentMagic_13(L_1);
		// }
		return;
	}
}
// System.Void CharacterStats_SO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterStats_SO__ctor_mBFD2D0257F17A49913394DEC67568E3667B80A23 (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE9EFADE4AF37789D015781E1FDF9BF48094BF902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool Enemy = true;
		__this->set_Enemy_6((bool)1);
		// public List<Skill_SO> SkillList = new List<Skill_SO>();
		List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * L_0 = (List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 *)il2cpp_codegen_object_new(List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864_il2cpp_TypeInfo_var);
		List_1__ctor_mE9EFADE4AF37789D015781E1FDF9BF48094BF902(L_0, /*hidden argument*/List_1__ctor_mE9EFADE4AF37789D015781E1FDF9BF48094BF902_RuntimeMethod_var);
		__this->set_SkillList_28(L_0);
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CollisionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollisionHandler__ctor_m436377FD2F3C3C10FE27EA552B5D93535161FE60 (CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Dialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue__ctor_m2B47938EB83DBF5CFCCA25B2DD506561D8B082E5 (Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueManger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_Start_m4352542B75C63F435D82CC4C6E4C6603A31A727A (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m3D79180EA2D2D7897016B383AA035A8B0AE08591_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sentences = new Queue<string>();
		Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * L_0 = (Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D *)il2cpp_codegen_object_new(Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D_il2cpp_TypeInfo_var);
		Queue_1__ctor_m3D79180EA2D2D7897016B383AA035A8B0AE08591(L_0, /*hidden argument*/Queue_1__ctor_m3D79180EA2D2D7897016B383AA035A8B0AE08591_RuntimeMethod_var);
		__this->set_sentences_8(L_0);
		// }
		return;
	}
}
// System.Void DialogueManger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_Update_mEEC59D7F8D599E99C7D98AA089BDF9E258A52610 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKeyDown(KeyCode.Space) && DialogueBox.activeSelf)
		bool L_0;
		L_0 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_DialogueBox_4();
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// DisplayNextSentence();
		DialogueManger_DisplayNextSentence_m0272C70E00DEE92A27015BDA6F13F82F0A6D1067(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void DialogueManger::StartDialogue(Dialogue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_StartDialogue_m655C6686A41B6F73033B629243CBA973E581F776 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * ___dialogue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m1D8BC0D358085A0C76DC4EBB50B79781B9F8EB45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD31335DFB51B4E0C68657790AAF0963EA8E7A059_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF21751F694B4474071AE18EF40CB53B9C1F8464);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// animator.SetBool("IsOpen", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_9();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralAF21751F694B4474071AE18EF40CB53B9C1F8464, (bool)1, /*hidden argument*/NULL);
		// nameText.text = dialogue.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_nameText_5();
		Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * L_2 = ___dialogue0;
		String_t* L_3 = L_2->get_name_1();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// picture.sprite = dialogue.charImage;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_picture_7();
		Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * L_5 = ___dialogue0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_charImage_0();
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_6, /*hidden argument*/NULL);
		// sentences.Clear();
		Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * L_7 = __this->get_sentences_8();
		Queue_1_Clear_m1D8BC0D358085A0C76DC4EBB50B79781B9F8EB45(L_7, /*hidden argument*/Queue_1_Clear_m1D8BC0D358085A0C76DC4EBB50B79781B9F8EB45_RuntimeMethod_var);
		// foreach (string sentence in dialogue.sentences)
		Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * L_8 = ___dialogue0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8->get_sentences_2();
		V_0 = L_9;
		V_1 = 0;
		goto IL_005d;
	}

IL_0049:
	{
		// foreach (string sentence in dialogue.sentences)
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = V_0;
		int32_t L_11 = V_1;
		int32_t L_12 = L_11;
		String_t* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		// sentences.Enqueue(sentence);
		Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * L_14 = __this->get_sentences_8();
		String_t* L_15 = V_2;
		Queue_1_Enqueue_mD31335DFB51B4E0C68657790AAF0963EA8E7A059(L_14, L_15, /*hidden argument*/Queue_1_Enqueue_mD31335DFB51B4E0C68657790AAF0963EA8E7A059_RuntimeMethod_var);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_005d:
	{
		// foreach (string sentence in dialogue.sentences)
		int32_t L_17 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0049;
		}
	}
	{
		// DisplayNextSentence();
		DialogueManger_DisplayNextSentence_m0272C70E00DEE92A27015BDA6F13F82F0A6D1067(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DialogueManger::DisplayNextSentence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_DisplayNextSentence_m0272C70E00DEE92A27015BDA6F13F82F0A6D1067 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m8E582C120D348CF28DEECA38CB63A609FD1BD9B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mD7C8C22580B59BE7F224C7E5AC3C079592F54D58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if(sentences.Count <= 0)
		Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * L_0 = __this->get_sentences_8();
		int32_t L_1;
		L_1 = Queue_1_get_Count_mD7C8C22580B59BE7F224C7E5AC3C079592F54D58_inline(L_0, /*hidden argument*/Queue_1_get_Count_mD7C8C22580B59BE7F224C7E5AC3C079592F54D58_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		// EndDialogue();
		DialogueManger_EndDialogue_m608143D087B36B20395BD29BAF4E0716A063BB43(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0015:
	{
		// string sentence = sentences.Dequeue();
		Queue_1_tD2C03A5990B5958D85846D872A22AA67F3E8F97D * L_2 = __this->get_sentences_8();
		String_t* L_3;
		L_3 = Queue_1_Dequeue_m8E582C120D348CF28DEECA38CB63A609FD1BD9B7(L_2, /*hidden argument*/Queue_1_Dequeue_m8E582C120D348CF28DEECA38CB63A609FD1BD9B7_RuntimeMethod_var);
		V_0 = L_3;
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(__this, /*hidden argument*/NULL);
		// StartCoroutine(TypeSentence(sentence));
		String_t* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = DialogueManger_TypeSentence_m434F504BB25D14805BBBA07B41FDEB3C25416F31(__this, L_4, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_6;
		L_6 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DialogueManger::TypeSentence(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueManger_TypeSentence_m434F504BB25D14805BBBA07B41FDEB3C25416F31 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, String_t* ___sentence0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * L_0 = (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 *)il2cpp_codegen_object_new(U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478_il2cpp_TypeInfo_var);
		U3CTypeSentenceU3Ed__10__ctor_m6C9918F6751FC851B1175B665A3D35E0DC53C0B3(L_0, 0, /*hidden argument*/NULL);
		U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * L_2 = L_1;
		String_t* L_3 = ___sentence0;
		L_2->set_sentence_3(L_3);
		return L_2;
	}
}
// System.Void DialogueManger::EndDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger_EndDialogue_m608143D087B36B20395BD29BAF4E0716A063BB43 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF21751F694B4474071AE18EF40CB53B9C1F8464);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetBool("IsOpen", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_9();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteralAF21751F694B4474071AE18EF40CB53B9C1F8464, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DialogueManger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueManger__ctor_m32926C62D04252B4BD865F7231E67CB383E5B366 (DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueTrigger::TriggerDialoge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTrigger_TriggerDialoge_m7C5396A125135ED3035C3DF069FAC2AE601E9BFE (DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B_mAD343E93EA70455C0779C7B49A4A6DD472038D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindObjectOfType<DialogueManger>().StartDialogue(dialogue);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * L_0;
		L_0 = Object_FindObjectOfType_TisDialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B_mAD343E93EA70455C0779C7B49A4A6DD472038D71(/*hidden argument*/Object_FindObjectOfType_TisDialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B_mAD343E93EA70455C0779C7B49A4A6DD472038D71_RuntimeMethod_var);
		Dialogue_tFC5073518DAF9A85392752FDEBF58D8F54474795 * L_1 = __this->get_dialogue_4();
		DialogueManger_StartDialogue_m655C6686A41B6F73033B629243CBA973E581F776(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DialogueTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTrigger_OnTriggerEnter2D_m0E64D9A470E0B0DC5BE65FE93878B16A0A298BF7 (DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_3, _stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// withinTalkingRange = true;
		__this->set_withinTalkingRange_5((bool)1);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void DialogueTrigger::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTrigger_OnTriggerExit2D_m69E1FC32A048FB1A1A127DD1B95810940A451B1E (DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_3, _stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// withinTalkingRange = false;
		__this->set_withinTalkingRange_5((bool)0);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void DialogueTrigger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTrigger_Update_m27E061BE544CD31614722C6F9B60DCF7DBF260EA (DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B * __this, const RuntimeMethod* method)
{
	{
		// if (withinTalkingRange && Input.GetKeyDown(KeyCode.Space))
		bool L_0 = __this->get_withinTalkingRange_5();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// TriggerDialoge();
		DialogueTrigger_TriggerDialoge_m7C5396A125135ED3035C3DF069FAC2AE601E9BFE(__this, /*hidden argument*/NULL);
		// dialogueBox.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_dialogueBox_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void DialogueTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueTrigger__ctor_m7487D7F4B5B3A0C981C50EFC43E5DA717238509D (DialogueTrigger_t0D7A1F305E18EF0A872B541989047ECFE92BB41B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBaseState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBaseState__ctor_mE9E423D90DE8C71638B9D45129F30DAB24A80FFD (GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameBattleState::EnterState(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBattleState_EnterState_m0D6CCA79A03BBE7440B5EB51D6AD17FD8C3EBFFC (GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * __this, GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62BE79FF4F6D4186B2DBED0B74848627AD1972FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("GameBattleState");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral62BE79FF4F6D4186B2DBED0B74848627AD1972FF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameBattleState::Update(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBattleState_Update_m5A30796ED92E35CCD75899F084021FB14DB647B7 (GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * __this, GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15445EDC7C6655D6FC691273B2B82C7581616EFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!gameManger.battleHasStarted)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ___gameManger0;
		bool L_1 = L_0->get_battleHasStarted_20();
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene("Tut Forest");//OverWOrld
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral15445EDC7C6655D6FC691273B2B82C7581616EFD, /*hidden argument*/NULL);
		// gameManger.TransistinoToState(gameManger.OverWorldState);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ___gameManger0;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_3 = ___gameManger0;
		GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * L_4 = L_3->get_OverWorldState_18();
		GameManger_TransistinoToState_m259442641C2F649E79C13C11D738D614B4911063(L_2, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GameBattleState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBattleState__ctor_m1A87B56963133A0F4F7D039CFA200490D8309A8B (GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * __this, const RuntimeMethod* method)
{
	{
		GameBaseState__ctor_mE9E423D90DE8C71638B9D45129F30DAB24A80FFD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManger::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_Awake_m53FDE6F5B053CA269F96D0D95A07941879C7DD9F (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ThereShouldOnlyBeOneGameManager();
		GameManger_ThereShouldOnlyBeOneGameManager_mD02488C2DFA643BB22DD81CF056E509D3426EBF3(__this, /*hidden argument*/NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_Start_m9DD51E55DF226FA37AB96F4513363E66797BCB9F (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	{
		// TransistinoToState(MenuState);
		GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * L_0 = __this->get_MenuState_19();
		GameManger_TransistinoToState_m259442641C2F649E79C13C11D738D614B4911063(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManger::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_Update_m1071248D3DA3A740480904E8B44EF5C7FD29EF82 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	{
		// currentState.Update(this);
		GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * L_0 = __this->get_currentState_16();
		VirtActionInvoker1< GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * >::Invoke(5 /* System.Void GameBaseState::Update(GameManger) */, L_0, __this);
		// }
		return;
	}
}
// System.Void GameManger::TransistinoToState(GameBaseState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_TransistinoToState_m259442641C2F649E79C13C11D738D614B4911063 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * ___state0, const RuntimeMethod* method)
{
	{
		// currentState = state;
		GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * L_0 = ___state0;
		__this->set_currentState_16(L_0);
		// currentState.EnterState(this);
		GameBaseState_t86C4B0B5D96C12D7C5E4B26C60311730FE1C304C * L_1 = __this->get_currentState_16();
		VirtActionInvoker1< GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * >::Invoke(4 /* System.Void GameBaseState::EnterState(GameManger) */, L_1, __this);
		// }
		return;
	}
}
// System.Void GameManger::ThereShouldOnlyBeOneOverWorldCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_ThereShouldOnlyBeOneOverWorldCharacter_m6BC10015FE360CC57883D364ED88124A87C53864 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9A1B8A0AF0475A9C4974D3FB03316BA0853530B);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// if (GameObject.Find(overWorldCharacter))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralF9A1B8A0AF0475A9C4974D3FB03316BA0853530B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// if (sceneSpawnPoint != "")
		String_t* L_2 = __this->get_sceneSpawnPoint_14();
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// Hero = Instantiate(OverWorldCharacter, GameObject.Find(sceneSpawnPoint).transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_OverWorldCharacter_9();
		String_t* L_5 = __this->get_sceneSpawnPoint_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_8, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_10;
		// }
		goto IL_0063;
	}

IL_004c:
	{
		// Hero = Instantiate(OverWorldCharacter, playerOverworldPositionOnBattle, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_OverWorldCharacter_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_playerOverworldPositionOnBattle_15();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13;
		L_13 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_11, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_14;
	}

IL_0063:
	{
		// Hero.name = overWorldCharacter;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_15, _stringLiteralF9A1B8A0AF0475A9C4974D3FB03316BA0853530B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManger::ThereShouldOnlyBeOneGameManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_ThereShouldOnlyBeOneGameManager_mD02488C2DFA643BB22DD81CF056E509D3426EBF3 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameManger == null)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// gameManger = this;
		((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->set_gameManger_6(__this);
		// }
		return;
	}

IL_0014:
	{
		// else if (gameManger != this)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void GameManger::LoadNextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger_LoadNextScene_m2E92FD16FFA6EECC205FC3DA1C2D616945B15DD3 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneToLoad);
		String_t* L_0 = __this->get_sceneToLoad_12();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManger__ctor_mC907270837A4DB63BEF90080D98D63489932EAF2 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m42466EBBF62A6A6A56C47AE017A98052DEA80F72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9B363B2E0DE0E28EA74506118BB8F2F046749102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t719B7099343D75876AA738F8F2405139C3EA21BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Quest_SO> ActiveQuests = new List<Quest_SO>();
		List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * L_0 = (List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 *)il2cpp_codegen_object_new(List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665_il2cpp_TypeInfo_var);
		List_1__ctor_m42466EBBF62A6A6A56C47AE017A98052DEA80F72(L_0, /*hidden argument*/List_1__ctor_m42466EBBF62A6A6A56C47AE017A98052DEA80F72_RuntimeMethod_var);
		__this->set_ActiveQuests_4(L_0);
		// public List<ItemPickUp_SO> PlayerInventory = new List<ItemPickUp_SO>();
		List_1_t719B7099343D75876AA738F8F2405139C3EA21BF * L_1 = (List_1_t719B7099343D75876AA738F8F2405139C3EA21BF *)il2cpp_codegen_object_new(List_1_t719B7099343D75876AA738F8F2405139C3EA21BF_il2cpp_TypeInfo_var);
		List_1__ctor_m9B363B2E0DE0E28EA74506118BB8F2F046749102(L_1, /*hidden argument*/List_1__ctor_m9B363B2E0DE0E28EA74506118BB8F2F046749102_RuntimeMethod_var);
		__this->set_PlayerInventory_5(L_1);
		// public readonly GameBattleState BattleState = new GameBattleState();
		GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * L_2 = (GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A *)il2cpp_codegen_object_new(GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A_il2cpp_TypeInfo_var);
		GameBattleState__ctor_m1A87B56963133A0F4F7D039CFA200490D8309A8B(L_2, /*hidden argument*/NULL);
		__this->set_BattleState_17(L_2);
		// public readonly GameOverWorldState OverWorldState = new GameOverWorldState();
		GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * L_3 = (GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 *)il2cpp_codegen_object_new(GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2_il2cpp_TypeInfo_var);
		GameOverWorldState__ctor_m46337E45BA69ABE6F767F9C49770FC451F211F04(L_3, /*hidden argument*/NULL);
		__this->set_OverWorldState_18(L_3);
		// public readonly GameMenuState MenuState = new GameMenuState();
		GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * L_4 = (GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 *)il2cpp_codegen_object_new(GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66_il2cpp_TypeInfo_var);
		GameMenuState__ctor_m0F03FFD166808635AA8D38006A08C56FBA1AEB3D(L_4, /*hidden argument*/NULL);
		__this->set_MenuState_19(L_4);
		// public List<string> EncounteredEnemyNames = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_5, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_EncounteredEnemyNames_23(L_5);
		// public List<string> OverworldEnemyFought = new List<string>();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_6, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		__this->set_OverworldEnemyFought_24(L_6);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameMenuState::EnterState(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuState_EnterState_m77900F20D92B1D4A8FA4D739456EF21302B85DEE (GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * __this, GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManger.gameManger.inMenuScreen = true;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_0->set_inMenuScreen_22((bool)1);
		// }
		return;
	}
}
// System.Void GameMenuState::Update(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuState_Update_mB806D2EF43304C47521541C732AF08839BAA973A (GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * __this, GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameManger.gameManger.inMenuScreen)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		bool L_1 = L_0->get_inMenuScreen_22();
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// GameManger.gameManger.TransistinoToState(gameManger.OverWorldState);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_3 = ___gameManger0;
		GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * L_4 = L_3->get_OverWorldState_18();
		GameManger_TransistinoToState_m259442641C2F649E79C13C11D738D614B4911063(L_2, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void GameMenuState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameMenuState__ctor_m0F03FFD166808635AA8D38006A08C56FBA1AEB3D (GameMenuState_t045A35AE14567E8FC78B3C5648B7296012268C66 * __this, const RuntimeMethod* method)
{
	{
		GameBaseState__ctor_mE9E423D90DE8C71638B9D45129F30DAB24A80FFD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameOverWorldState::EnterState(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWorldState_EnterState_m7963FD9BB0BD3CA25E31E03B4271BA88962051CF (GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * __this, GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26BBF49F74445B23D05A4BC52E5D813318E09384);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManger.EncounteredEnemyNames.Clear();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ___gameManger0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0->get_EncounteredEnemyNames_23();
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_1, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// Debug.Log("GameOverWorldState");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral26BBF49F74445B23D05A4BC52E5D813318E09384, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverWorldState::Update(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWorldState_Update_m1B6231BBA47DE888F004287B86C61607F0B9B550 (GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * __this, GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	{
		// gameManger.ThereShouldOnlyBeOneOverWorldCharacter();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ___gameManger0;
		GameManger_ThereShouldOnlyBeOneOverWorldCharacter_m6BC10015FE360CC57883D364ED88124A87C53864(L_0, /*hidden argument*/NULL);
		// StartBattle(gameManger);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_1 = ___gameManger0;
		GameOverWorldState_StartBattle_mA111D59BB3368DCE19CCB146118FC33321A72FB5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameOverWorldState::StartBattle(GameManger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWorldState_StartBattle_mA111D59BB3368DCE19CCB146118FC33321A72FB5 (GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * ___gameManger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46DE5783C291FE01880CA4D33F58ED585DFF721F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameManger.battleHasStarted)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ___gameManger0;
		bool L_1 = L_0->get_battleHasStarted_20();
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// SceneManager.LoadScene("Battle2.0");//Battle scene
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral46DE5783C291FE01880CA4D33F58ED585DFF721F, /*hidden argument*/NULL);
		// gameManger.TransistinoToState(gameManger.BattleState);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ___gameManger0;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_3 = ___gameManger0;
		GameBattleState_t6D5146ABCB2C4699D82FC812AA7AD13F6961517A * L_4 = L_3->get_BattleState_17();
		GameManger_TransistinoToState_m259442641C2F649E79C13C11D738D614B4911063(L_2, L_4, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void GameOverWorldState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverWorldState__ctor_m46337E45BA69ABE6F767F9C49770FC451F211F04 (GameOverWorldState_t9DC99CB50F80440D9773E46746F960A092572EB2 * __this, const RuntimeMethod* method)
{
	{
		GameBaseState__ctor_mE9E423D90DE8C71638B9D45129F30DAB24A80FFD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Healthbar::SetHeatlh(CharacterStats_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Healthbar_SetHeatlh_mB00BF771148A86AC3B91C10CED50AD313F86403B (Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * __this, CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * ___characterDefinition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthbar.maxValue = characterDefinition.maxHealth;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_healthbar_4();
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_1 = ___characterDefinition0;
		int32_t L_2 = L_1->get_maxHealth_10();
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_0, ((float)((float)L_2)), /*hidden argument*/NULL);
		// healthbar.value = characterDefinition.currentHealth;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_3 = __this->get_healthbar_4();
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_4 = ___characterDefinition0;
		int32_t L_5 = L_4->get_currentHealth_11();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_3, ((float)((float)L_5)));
		// healthbar.fillRect.GetComponentInChildren<Image>().color = Color.Lerp(low, high, healthbar.normalizedValue);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_6 = __this->get_healthbar_4();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7;
		L_7 = Slider_get_fillRect_m4D02B70BFAA5C003B34E8132C10CB80A0F022CAA_inline(L_6, /*hidden argument*/NULL);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4(L_7, /*hidden argument*/Component_GetComponentInChildren_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9CF82A7FE31DE2A0859EFD85F1BB2DF972A17DA4_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = __this->get_low_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_10 = __this->get_high_6();
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_11 = __this->get_healthbar_4();
		float L_12;
		L_12 = Slider_get_normalizedValue_m09A06767F3E8064200CA1C954AF5C362C5138EC3(L_11, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_Lerp_mC986D7F29103536908D76BD8FC59AA11DC33C197(L_9, L_10, L_12, /*hidden argument*/NULL);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_13);
		// }
		return;
	}
}
// System.Void Healthbar::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Healthbar_Update_m29B87E7234F35679772B4C8D1B9FD52E9AD825A6 (Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * __this, const RuntimeMethod* method)
{
	{
		// healthbar.transform.position = Camera.main.WorldToScreenPoint(transform.parent.position + offset);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_healthbar_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = __this->get_offset_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_2, L_7, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Healthbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Healthbar__ctor_mBBC53975F4CC2DA1F659C46C775CAE7AD91C6F73 (Healthbar_t60BDBDAD4EF7EB8E3CC8245D723F3C644D2981F7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemPickUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPickUp__ctor_m15283F9A754613DB99938449678683E14FF129C2 (ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ItemPickUp_SO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemPickUp_SO__ctor_mE76131158A53D56C937456821B4B321944003AED (ItemPickUp_SO_t760BA8607497E2B5488839B663EC7A51793D2F51 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m8E537B43B1EC522F93EDCFD51C8911808C82FC41 (MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A * __this, const RuntimeMethod* method)
{
	{
		// if (panel.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_panel_6();
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// panel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_panel_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void MainMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Update_mB4C119527B1A9FBD0AF4CC0405F9330CAB035025 (MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (character1Button.activeSelf == false && character2Button.activeSelf == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_character1Button_7();
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_character2Button_10();
		bool L_3;
		L_3 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_004b;
		}
	}
	{
		// gameManger.party.PlayerParty.Add(guardian);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_4 = __this->get_gameManger_4();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_5 = L_4->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_6 = L_5->get_PlayerParty_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_guardian_11();
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_6, L_7, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// gameManger.inMenuScreen = false;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_8 = __this->get_gameManger_4();
		L_8->set_inMenuScreen_22((bool)0);
		// SceneManager.LoadScene("Town"); //Town
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5D0DA8227C9BA628271EF153D972C241A212ABC2, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void MainMenu::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_NewGame_m1F47A6F276B3B935290E642D7EC92226473C89BC (MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A * __this, const RuntimeMethod* method)
{
	{
		// panel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_panel_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// btnNewGame.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_btnNewGame_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SelectCharacter1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SelectCharacter1_m5E75EC1A89F6F975411FFE3FE52505C77D111DFC (MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManger.party.PlayerParty.Add(character1);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = __this->get_gameManger_4();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_1 = L_0->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = L_1->get_PlayerParty_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_character1_8();
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_2, L_3, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// character1Button.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_character1Button_7();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::SelectCharacter2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_SelectCharacter2_m3D2E6053678620AB69CA99970DDF7ECB3B824E04 (MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameManger.party.PlayerParty.Add(character2);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = __this->get_gameManger_4();
		PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * L_1 = L_0->get_party_7();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_2 = L_1->get_PlayerParty_1();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_character2_9();
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_2, L_3, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// character2Button.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_character2Button_10();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m368BD536D50D8EAAF4A07EBDA43F425576546928 (MainMenu_t1621AD3861264D10D18543AE5B61CBF8E6FC1C4A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OverworldEnemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldEnemy_Awake_mE497E076FB73B7E057B9BBE3D4051FEF33B10DE6 (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (GameManger.gameManger.OverworldEnemyFought.Count > 0)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_0 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_1 = L_0->get_OverworldEnemyFought_24();
		int32_t L_2;
		L_2 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_1, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// foreach (string overworldenemyname in GameManger.gameManger.OverworldEnemyFought)
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_3 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = L_3->get_OverworldEnemyFought_24();
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_5;
		L_5 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_4, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_0 = L_5;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0024:
		{
			// foreach (string overworldenemyname in GameManger.gameManger.OverworldEnemyFought)
			String_t* L_6;
			L_6 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_1 = L_6;
			// if (GameObject.Find(overworldenemyname))
			String_t* L_7 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
			L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_7, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0045;
			}
		}

IL_0039:
		{
			// GameObject.Find(overworldenemyname).SetActive(false);
			String_t* L_10 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
			L_11 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(L_10, /*hidden argument*/NULL);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		}

IL_0045:
		{
			// foreach (string overworldenemyname in GameManger.gameManger.OverworldEnemyFought)
			bool L_12;
			L_12 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_0024;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_0), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// GameManger.gameManger.OverworldEnemyFought.Clear();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_13 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = L_13->get_OverworldEnemyFought_24();
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_14, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void OverworldEnemy::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldEnemy_OnCollisionEnter2D_m83D3546A111D9B71787E99018E2F0157D56B75C4 (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C02A0BE48156170EB186E5F3AA2FDA7E3E55F5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAE02C44F68D4FA16E72507670298808A6B9ECFA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(collision);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// if (collision.gameObject.CompareTag("Player") && gameObject.CompareTag("Enemy"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_5;
		L_5 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_4, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.Log("You touched an Enemy!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral3C02A0BE48156170EB186E5F3AA2FDA7E3E55F5E, /*hidden argument*/NULL);
		// GameManger.gameManger.OverworldEnemyFought.Add(gameObject.name);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_6 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_7 = L_6->get_OverworldEnemyFought_24();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_8, /*hidden argument*/NULL);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_7, L_9, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		// GameManger.gameManger.battleHasStarted = true;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_10 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_10->set_battleHasStarted_20((bool)1);
		// }
		goto IL_009f;
	}

IL_005b:
	{
		// else if (collision.gameObject.CompareTag("Player") && gameObject.CompareTag("Boss"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_11 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_11, /*hidden argument*/NULL);
		bool L_13;
		L_13 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_12, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009f;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_15;
		L_15 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_14, _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009f;
		}
	}
	{
		// Debug.Log("BOSS BATTLE!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFAE02C44F68D4FA16E72507670298808A6B9ECFA, /*hidden argument*/NULL);
		// GameManger.gameManger.battleHasStarted = true;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_16 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_16->set_battleHasStarted_20((bool)1);
		// GameManger.gameManger.bossBattle = true;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_17 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_17->set_bossBattle_21((bool)1);
	}

IL_009f:
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_18 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_18, /*hidden argument*/NULL);
		bool L_20;
		L_20 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_19, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00d5;
		}
	}
	{
		// GameManger.gameManger.playerOverworldPositionOnBattle = collision.transform.position;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_21 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_22 = ___collision0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		L_21->set_playerOverworldPositionOnBattle_15(L_24);
		// GameManger.gameManger.sceneSpawnPoint = "";
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_25 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		L_25->set_sceneSpawnPoint_14(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void OverworldEnemy::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldEnemy_OnTriggerEnter2D_m7CC115824CAFC939F9E919047136FDC9BC063E1A (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06E001B7AD1116D41624205DEB44C5A16B60EA21);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6238B8057C05CD652138E4AF75006A11A88E4CEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RegularEnemyTouchesPlayer(other))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		bool L_1;
		L_1 = OverworldEnemy_RegularEnemyTouchesPlayer_mFD3DB46869EBC42A2E29B559ED981C9E5187334F(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// Debug.Log("This Enemy will be added to the battle " + EnemyName);
		String_t* L_2 = __this->get_EnemyName_4();
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6238B8057C05CD652138E4AF75006A11A88E4CEF, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// GameManger.gameManger.EncounteredEnemyNames.Add(EnemyName);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_4 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_5 = L_4->get_EncounteredEnemyNames_23();
		String_t* L_6 = __this->get_EnemyName_4();
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_5, L_6, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0033:
	{
		// if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("Boss"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_8, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0090;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_11;
		L_11 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_10, _stringLiteral912A37FE3AA5DFB68E312BB9398889D44821AAA2, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0090;
		}
	}
	{
		// Debug.Log("This is the boss!! " + EnemyName);
		String_t* L_12 = __this->get_EnemyName_4();
		String_t* L_13;
		L_13 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral06E001B7AD1116D41624205DEB44C5A16B60EA21, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_13, /*hidden argument*/NULL);
		// GameManger.gameManger.EncounteredEnemyNames.Clear();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_14 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_15 = L_14->get_EncounteredEnemyNames_23();
		List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640(L_15, /*hidden argument*/List_1_Clear_m1E4AF39A1050CD8394AA202B04F2B07267435640_RuntimeMethod_var);
		// GameManger.gameManger.EncounteredEnemyNames.Add(EnemyName);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_16 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = L_16->get_EncounteredEnemyNames_23();
		String_t* L_18 = __this->get_EnemyName_4();
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_17, L_18, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Boolean OverworldEnemy::RegularEnemyTouchesPlayer(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OverworldEnemy_RegularEnemyTouchesPlayer_mFD3DB46869EBC42A2E29B559ED981C9E5187334F (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return other.gameObject.CompareTag("Player") && gameObject.CompareTag("Enemy");
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_3, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// System.Void OverworldEnemy::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldEnemy_OnTriggerExit2D_m1F72C97B3FDAD84A2C313F3540CC5D8D11FEBA7F (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA14E47533248C9324CADC61C1C69DC6CE64AF40E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// Debug.Log("This Enemy will not be added to the battle " + EnemyName);
		String_t* L_3 = __this->get_EnemyName_4();
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralA14E47533248C9324CADC61C1C69DC6CE64AF40E, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// GameManger.gameManger.EncounteredEnemyNames.Remove(EnemyName);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_5 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = L_5->get_EncounteredEnemyNames_23();
		String_t* L_7 = __this->get_EnemyName_4();
		bool L_8;
		L_8 = List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70(L_6, L_7, /*hidden argument*/List_1_Remove_m31C26124B7BB19A0E5C12113701DDE5046272F70_RuntimeMethod_var);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void OverworldEnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldEnemy__ctor_m4FE757646A021B055CB80BC675F3D193A28B6BF4 (OverworldEnemy_tBE12F9A5FEFEDA1A63E422A4B4ADD4D5158D8A61 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void OverworldMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_Start_mD7E21EC98FBDD2ED857E4FF93ED499C5C397BDC2 (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// body = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_body_4(L_0);
		// }
		return;
	}
}
// System.Void OverworldMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_Update_m66CC353ECB786A451B7C1D8C32EB453663D86401 (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// horizontal = Input.GetAxisRaw("Horizontal"); // -1 is left
		float L_0;
		L_0 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_horizontal_5(L_0);
		// movement.x = horizontal;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_1 = __this->get_address_of_movement_11();
		float L_2 = __this->get_horizontal_5();
		L_1->set_x_0(L_2);
		// animator.SetFloat("Horizontal", horizontal);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_10();
		float L_4 = __this->get_horizontal_5();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_3, _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, L_4, /*hidden argument*/NULL);
		// vertical = Input.GetAxisRaw("Vertical"); // -1 is down
		float L_5;
		L_5 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		__this->set_vertical_6(L_5);
		// movement.y = vertical;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_6 = __this->get_address_of_movement_11();
		float L_7 = __this->get_vertical_6();
		L_6->set_y_1(L_7);
		// animator.SetFloat("Vertical", vertical);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8 = __this->get_animator_10();
		float L_9 = __this->get_vertical_6();
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_8, _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, L_9, /*hidden argument*/NULL);
		// animator.SetFloat("Speed", movement.sqrMagnitude);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_animator_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_movement_11();
		float L_12;
		L_12 = Vector2_get_sqrMagnitude_mF489F0EF7E88FF046BA36767ECC50B89674C925A((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)L_11, /*hidden argument*/NULL);
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_10, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, L_12, /*hidden argument*/NULL);
		// KeepSpriteFromSpinning();
		OverworldMovement_KeepSpriteFromSpinning_m45775DD5779A1958AF4C5E315B7165385287932C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OverworldMovement::KeepSpriteFromSpinning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_KeepSpriteFromSpinning_m45775DD5779A1958AF4C5E315B7165385287932C (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Quaternion_get_eulerAngles_m3DA616CAD670235A407E8A7A75925AA8E22338C3((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_0), /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_4, (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OverworldMovement::FlipSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_FlipSprite_m426BF0DA900CBFCB3987F99083CAA2A5C6FEEB1C (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	{
		// if (horizontal != 0)
		float L_0 = __this->get_horizontal_5();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0025;
		}
	}
	{
		// sprite.flipX = horizontal < 0;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_sprite_9();
		float L_2 = __this->get_horizontal_5();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_1, (bool)((((float)L_2) < ((float)(0.0f)))? 1 : 0), /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void OverworldMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_FixedUpdate_mFE4FBB92F0FF410A792CC6369DAC1B7A1FE7756E (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	{
		// LimitMovementSpeedDiagonally();
		OverworldMovement_LimitMovementSpeedDiagonally_mC8DE90D1E544926087E85BF69816B896F72EE087(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OverworldMovement::LimitMovementSpeedDiagonally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_LimitMovementSpeedDiagonally_mC8DE90D1E544926087E85BF69816B896F72EE087 (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	{
		// if (horizontal != 0 && vertical != 0) // Check for diagonal movement
		float L_0 = __this->get_horizontal_5();
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		float L_1 = __this->get_vertical_6();
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_0040;
		}
	}
	{
		// horizontal *= moveLimiter;
		float L_2 = __this->get_horizontal_5();
		float L_3 = __this->get_moveLimiter_7();
		__this->set_horizontal_5(((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)));
		// vertical *= moveLimiter;
		float L_4 = __this->get_vertical_6();
		float L_5 = __this->get_moveLimiter_7();
		__this->set_vertical_6(((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)));
	}

IL_0040:
	{
		// body.velocity = new Vector2(horizontal * runSpeed, vertical * runSpeed);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_body_4();
		float L_7 = __this->get_horizontal_5();
		float L_8 = __this->get_runSpeed_8();
		float L_9 = __this->get_vertical_6();
		float L_10 = __this->get_runSpeed_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_11), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_6, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OverworldMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_OnCollisionEnter2D_mE42F168911B7FD9619180D2B94484B15D7C89E16 (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0906A8107B55AC0E7B967F1F0EB18FCA35A016CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC70D972C06319B918543D92FF2677A1363C0D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("LeaveTown"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral0906A8107B55AC0E7B967F1F0EB18FCA35A016CC, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// LoadNextScene(collision);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_3 = ___collision0;
		OverworldMovement_LoadNextScene_m5978C754CC5A6EA4B5AAE0C1E83C3DA8010E8ABA(L_3, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// if (collision.gameObject.CompareTag("EnterTown"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_4 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_5, _stringLiteral9BC70D972C06319B918543D92FF2677A1363C0D4, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		// LoadNextScene(collision);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_7 = ___collision0;
		OverworldMovement_LoadNextScene_m5978C754CC5A6EA4B5AAE0C1E83C3DA8010E8ABA(L_7, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void OverworldMovement::LoadNextScene(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement_LoadNextScene_m5978C754CC5A6EA4B5AAE0C1E83C3DA8010E8ABA (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102_m8F58F3D30C95AAF7CD3068E8A7008C7CEC3744EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * V_0 = NULL;
	{
		// CollisionHandler collisionHandler = collision.gameObject.GetComponent<CollisionHandler>();
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * L_2;
		L_2 = GameObject_GetComponent_TisCollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102_m8F58F3D30C95AAF7CD3068E8A7008C7CEC3744EB(L_1, /*hidden argument*/GameObject_GetComponent_TisCollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102_m8F58F3D30C95AAF7CD3068E8A7008C7CEC3744EB_RuntimeMethod_var);
		V_0 = L_2;
		// GameManger.gameManger.nextCharacterPosition = collisionHandler.spawnPoint.transform;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_3 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * L_4 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_spawnPoint_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		L_3->set_nextCharacterPosition_10(L_6);
		// GameManger.gameManger.sceneToLoad = collisionHandler.SceneToLoad;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_7 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * L_8 = V_0;
		String_t* L_9 = L_8->get_SceneToLoad_4();
		L_7->set_sceneToLoad_12(L_9);
		// GameManger.gameManger.sceneSpawnPoint = collisionHandler.NextSceneSpawnPoint;
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_10 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		CollisionHandler_tAEB81731C02C77DA8560DEDE3C68ABEBFB94C102 * L_11 = V_0;
		String_t* L_12 = L_11->get_NextSceneSpawnPoint_5();
		L_10->set_sceneSpawnPoint_14(L_12);
		// GameManger.gameManger.LoadNextScene();
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_13 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		GameManger_LoadNextScene_m2E92FD16FFA6EECC205FC3DA1C2D616945B15DD3(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void OverworldMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverworldMovement__ctor_mE5F50AD292749B56BCD71CCAC06001BF887C51CE (OverworldMovement_tD7F6804F63E414D4804DFC7D1817B98FFEDC5604 * __this, const RuntimeMethod* method)
{
	{
		// private readonly float moveLimiter = 0.7f;
		__this->set_moveLimiter_7((0.699999988f));
		// public float runSpeed = 5.0f;
		__this->set_runSpeed_8((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QuestGiver::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_OnTriggerEnter2D_m7068BCF13E9EF9C5BC3A69F206AFC5D789493AD1 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6347AFDF4947BA3B839950F3624BF34967EA28A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_3, _stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.Log("Can be given Quest");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA6347AFDF4947BA3B839950F3624BF34967EA28A, /*hidden argument*/NULL);
		// withinQuestRange = true;
		__this->set_withinQuestRange_9((bool)1);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void QuestGiver::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_OnTriggerExit2D_mCDFCCCF3DCEE8D02500C807ECAFD96AA92C7D273 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3665B7FA5EE3CB1836D81568C790A9ABBFFB15B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Player") && gameObject.CompareTag("QuestGiver"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		bool L_4;
		L_4 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_3, _stringLiteralB39ED2893350DFA7A642B647FE311D23F55F9E88, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		// Debug.Log("Too far away to be given Quest");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF3665B7FA5EE3CB1836D81568C790A9ABBFFB15B, /*hidden argument*/NULL);
		// withinQuestRange = false;
		__this->set_withinQuestRange_9((bool)0);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void QuestGiver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_Update_m1F2548119665DDC8A04C7265E40D8F7B7CA4D928 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (withinQuestRange && Input.GetKeyDown(KeyCode.Space))
		bool L_0 = __this->get_withinQuestRange_9();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// OpenQuestWIndow();
		QuestGiver_OpenQuestWIndow_m80CE2ADCB1E51D54076C8FE59D9A2BC54EE0EB67(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// if (quest.isActive)
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_2 = __this->get_quest_4();
		bool L_3 = L_2->get_isActive_6();
		if (!L_3)
		{
			goto IL_0101;
		}
	}
	{
		// questPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_questPanel_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// questPanel.transform.GetChild(0).GetComponent<Text>().text = quest.title;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_questPanel_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8;
		L_8 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_7, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_9 = __this->get_quest_4();
		String_t* L_10 = L_9->get_title_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// questPanel.transform.GetChild(1).GetComponent<Text>().text = $"{quest.goal.currentAmount}/{quest.goal.goalAmount}";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_questPanel_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_12, 1, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14;
		L_14 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_13, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_15 = __this->get_quest_4();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_16 = L_15->get_goal_8();
		int32_t L_17 = L_16->get_currentAmount_0();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_20 = __this->get_quest_4();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_21 = L_20->get_goal_8();
		int32_t L_22 = L_21->get_goalAmount_1();
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral7ACA34FD81900767B6FAD748BAAEF3F03C87EF79, L_19, L_24, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_25);
		// questPanel.transform.GetChild(2).GetComponent<Slider>().maxValue = quest.goal.goalAmount;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_questPanel_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_27, 2, /*hidden argument*/NULL);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_29;
		L_29 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(L_28, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_30 = __this->get_quest_4();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_31 = L_30->get_goal_8();
		int32_t L_32 = L_31->get_goalAmount_1();
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_29, ((float)((float)L_32)), /*hidden argument*/NULL);
		// questPanel.transform.GetChild(2).GetComponent<Slider>().value = quest.goal.currentAmount;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_questPanel_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_34, 2, /*hidden argument*/NULL);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_36;
		L_36 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(L_35, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_37 = __this->get_quest_4();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_38 = L_37->get_goal_8();
		int32_t L_39 = L_38->get_currentAmount_0();
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_36, ((float)((float)L_39)));
		// }
		return;
	}

IL_0101:
	{
		// questPanel.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_questPanel_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuestGiver::OpenQuestWIndow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_OpenQuestWIndow_m80CE2ADCB1E51D54076C8FE59D9A2BC54EE0EB67 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8873D38D7A18C7EE68D7BCAEF30A84909721ACE5);
		s_Il2CppMethodInitialized = true;
	}
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// titleText.text = quest.title;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_titleText_7();
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_1 = __this->get_quest_4();
		String_t* L_2 = L_1->get_title_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// descriptionText.text = quest.isActive ? $"Killed {quest.goal.currentAmount} out of {quest.goal.goalAmount}." : quest.description;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_descriptionText_8();
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_4 = __this->get_quest_4();
		bool L_5 = L_4->get_isActive_6();
		G_B1_0 = L_3;
		if (L_5)
		{
			G_B2_0 = L_3;
			goto IL_0036;
		}
	}
	{
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_6 = __this->get_quest_4();
		String_t* L_7 = L_6->get_description_5();
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_006a;
	}

IL_0036:
	{
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_8 = __this->get_quest_4();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_9 = L_8->get_goal_8();
		int32_t L_10 = L_9->get_currentAmount_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_11);
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_13 = __this->get_quest_4();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_14 = L_13->get_goal_8();
		int32_t L_15 = L_14->get_goalAmount_1();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral8873D38D7A18C7EE68D7BCAEF30A84909721ACE5, L_12, L_17, /*hidden argument*/NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
	}

IL_006a:
	{
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// questWindow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_questWindow_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuestGiver::QuestAccept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_QuestAccept_m07339F9135025684A11BE09FC42BAD88651336F5 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCE7987B8D9203CE08CD90F89CF7A0DCB8F488F5C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// questWindow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_questWindow_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// quest.isActive = true;
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_1 = __this->get_quest_4();
		L_1->set_isActive_6((bool)1);
		// GameManger.gameManger.ActiveQuests.Add(quest);
		GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE * L_2 = ((GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_StaticFields*)il2cpp_codegen_static_fields_for(GameManger_tDE28E0148BFDE4EF28EF9CC6EECC12C637F43FFE_il2cpp_TypeInfo_var))->get_gameManger_6();
		List_1_t0A7A8DD9B0A7BAC7DC1D2725171D111D88125665 * L_3 = L_2->get_ActiveQuests_4();
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_4 = __this->get_quest_4();
		List_1_Add_mCE7987B8D9203CE08CD90F89CF7A0DCB8F488F5C(L_3, L_4, /*hidden argument*/List_1_Add_mCE7987B8D9203CE08CD90F89CF7A0DCB8F488F5C_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void QuestGiver::QuestDecline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver_QuestDecline_mD691B209246827DD37066B5415AD87EA90ED561A (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, const RuntimeMethod* method)
{
	{
		// quest.isActive = false;
		Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * L_0 = __this->get_quest_4();
		L_0->set_isActive_6((bool)0);
		// questWindow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_questWindow_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuestGiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGiver__ctor_m49D6BD37A0A234CE1D93B53DC761C0BBCF9CFF48 (QuestGiver_t9782E82EC90D347FF5F1FC09F95F7170C552895C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Quest_SO::IsQuestEnemy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quest_SO_IsQuestEnemy_m1D8813E6EFD96725CCBD1AB06047104171B53F2D (Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___killedCharacter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (questCharacter != killedCharacter)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_questCharacter_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___killedCharacter0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0010:
	{
		// goal.currentAmount++;
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_3 = __this->get_goal_8();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_4 = L_3;
		int32_t L_5 = L_4->get_currentAmount_0();
		L_4->set_currentAmount_0(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// isComplete = goal.currentAmount >= goal.goalAmount;
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_6 = __this->get_goal_8();
		int32_t L_7 = L_6->get_currentAmount_0();
		QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * L_8 = __this->get_goal_8();
		int32_t L_9 = L_8->get_goalAmount_1();
		__this->set_isComplete_9((bool)((((int32_t)((((int32_t)L_7) < ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		// return true;
		return (bool)1;
	}
}
// System.Void Quest_SO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quest_SO__ctor_mF6070BCD560380A2B4C79DC6E71BE63E7E611724 (Quest_SO_tA41A7156FB7A0DDE748D6151F0E931CADD82DF13 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkillPatternUtil::WhichSkillToUse(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_WhichSkillToUse_mDC5B4F33D3004B2B38CEA6D1D26DAB05015989FA (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (skill.skillPattern)
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_0 = ___skill2;
		int32_t L_1 = L_0->get_skillPattern_8();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0042;
			}
			case 3:
			{
				goto IL_004c;
			}
			case 4:
			{
				goto IL_0056;
			}
			case 5:
			{
				goto IL_0060;
			}
			case 6:
			{
				goto IL_006a;
			}
			case 7:
			{
				goto IL_0074;
			}
		}
	}
	{
		return;
	}

IL_002e:
	{
		// SingleSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		int32_t L_4 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_5 = ___skill2;
		SkillPatternUtil_SingleSlot_mA0794E3FE378C449D2D97C895CD4DD0D0D772894(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0038:
	{
		// DoubleSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		int32_t L_7 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_8 = ___skill2;
		SkillPatternUtil_DoubleSlot_mBE7FBE13C17FCB46253DBDB2FCE8434B1B40A743(__this, L_6, L_7, L_8, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0042:
	{
		// DoubleEveryOtherSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_9 = ___battleSystem0;
		int32_t L_10 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_11 = ___skill2;
		SkillPatternUtil_DoubleEveryOtherSlot_mD422133FF34DDEDA7AD8105FC1030CBABE8D4C3F(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004c:
	{
		// TripleSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_12 = ___battleSystem0;
		int32_t L_13 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_14 = ___skill2;
		SkillPatternUtil_TripleSlot_m6C2DC98795815A8DEBDF3B7BE1DAD16ECEAE03AC(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0056:
	{
		// TripleEveryOtherSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_15 = ___battleSystem0;
		int32_t L_16 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_17 = ___skill2;
		SkillPatternUtil_TripleEveryOtherSlot_m8502A2D88D41F8CBAA983F70D9280519CF1B2B61(__this, L_15, L_16, L_17, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0060:
	{
		// QuadSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_18 = ___battleSystem0;
		int32_t L_19 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_20 = ___skill2;
		SkillPatternUtil_QuadSlot_m1D794A9BB328F0A9287BE5B0BA67574995208E20(__this, L_18, L_19, L_20, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_006a:
	{
		// Quad2X2Slot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_21 = ___battleSystem0;
		int32_t L_22 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_23 = ___skill2;
		SkillPatternUtil_Quad2X2Slot_m2B23422263C1B20E12B94CD61C79F5961C763654(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0074:
	{
		// PentaSlot(battleSystem, EnemySlot, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_24 = ___battleSystem0;
		int32_t L_25 = ___EnemySlot1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_26 = ___skill2;
		SkillPatternUtil_PentaSlot_mE58365329C03A71E57EB3B4BD79BC7E5B8834453(__this, L_24, L_25, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SkillPatternUtil::AttackEnemyWithSkill(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___EnemySlot1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (battleSystem.EnemiesInBattle[EnemySlot] != null)
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = L_0->get_EnemiesInBattle_11();
		int32_t L_2 = ___EnemySlot1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}
	{
		// CharacterStats Enemy = battleSystem.EnemiesInBattle[EnemySlot].GetComponent<CharacterStats>();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_6 = ___battleSystem0;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_EnemiesInBattle_11();
		int32_t L_8 = ___EnemySlot1;
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_11;
		L_11 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_10, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		// int damage = GetDamageType(battleSystem, skill) + skill.skillAmout;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_12 = ___battleSystem0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_13 = ___skill2;
		int32_t L_14;
		L_14 = SkillPatternUtil_GetDamageType_m309ACC33172C71BF219E50CBF7EF623545BAB839(L_12, L_13, /*hidden argument*/NULL);
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_15 = ___skill2;
		int32_t L_16 = L_15->get_skillAmout_6();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)L_16));
		// Enemy.TakeDamage(damage);
		int32_t L_17 = V_0;
		CharacterStats_TakeDamage_mF154444F5FC48749AB3305A5CC3F11BE3CB19070(L_11, L_17, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Int32 SkillPatternUtil::GetDamageType(BattleSystem,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkillPatternUtil_GetDamageType_m309ACC33172C71BF219E50CBF7EF623545BAB839 (BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (skill.skillType)
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_0 = ___skill1;
		int32_t L_1 = L_0->get_skillType_5();
		V_1 = L_1;
		int32_t L_2 = V_1;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_004a;
	}

IL_0010:
	{
		// PlayerDamage = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.currentAttack;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_4 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = L_4->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_5, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_7;
		L_7 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_6, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_8 = L_7->get_characterDefinition_4();
		int32_t L_9 = L_8->get_currentAttack_16();
		V_0 = L_9;
		// break;
		goto IL_004c;
	}

IL_002d:
	{
		// PlayerDamage = battleSystem.charactersInBattle.First().GetComponent<CharacterStats>().characterDefinition.currentSpecialAttack;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_10 = ___battleSystem0;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = L_10->get_charactersInBattle_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645(L_11, /*hidden argument*/Enumerable_First_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m18EE3E7A9AD11B62FF37D87B6F0FDBBA8FAE3645_RuntimeMethod_var);
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_13;
		L_13 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_12, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_14 = L_13->get_characterDefinition_4();
		int32_t L_15 = L_14->get_currentSpecialAttack_18();
		V_0 = L_15;
		// break;
		goto IL_004c;
	}

IL_004a:
	{
		// PlayerDamage = 0;
		V_0 = 0;
	}

IL_004c:
	{
		// return PlayerDamage;
		int32_t L_16 = V_0;
		return L_16;
	}
}
// System.Void SkillPatternUtil::SingleSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_SingleSlot_mA0794E3FE378C449D2D97C895CD4DD0D0D772894 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	{
		// AttackEnemyWithSkill(battleSystem, slotSelected, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		int32_t L_1 = ___slotSelected1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_2 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SkillPatternUtil::DoubleSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_DoubleSlot_mBE7FBE13C17FCB46253DBDB2FCE8434B1B40A743 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = slotSelected; i <= slotSelected + 1; i++)
		int32_t L_0 = ___slotSelected1;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0004:
	{
		// AttackEnemyWithSkill(battleSystem, i, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		int32_t L_2 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_3 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// for (int i = slotSelected; i <= slotSelected + 1; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0011:
	{
		// for (int i = slotSelected; i <= slotSelected + 1; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = ___slotSelected1;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillPatternUtil::DoubleEveryOtherSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_DoubleEveryOtherSlot_mD422133FF34DDEDA7AD8105FC1030CBABE8D4C3F (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	{
		// AttackEnemyWithSkill(battleSystem, slotSelected, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_0 = ___battleSystem0;
		int32_t L_1 = ___slotSelected1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_2 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// AttackEnemyWithSkill(battleSystem, slotSelected + 2, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		int32_t L_4 = ___slotSelected1;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_5 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_3, ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)), L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SkillPatternUtil::TripleSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_TripleSlot_m6C2DC98795815A8DEBDF3B7BE1DAD16ECEAE03AC (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = slotSelected; i < slotSelected + 3; i++)
		int32_t L_0 = ___slotSelected1;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0004:
	{
		// AttackEnemyWithSkill(battleSystem, i, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		int32_t L_2 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_3 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// for (int i = slotSelected; i < slotSelected + 3; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0011:
	{
		// for (int i = slotSelected; i < slotSelected + 3; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = ___slotSelected1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)3)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillPatternUtil::TripleEveryOtherSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_TripleEveryOtherSlot_m8502A2D88D41F8CBAA983F70D9280519CF1B2B61 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_0 = ___slotSelected1;
		V_0 = L_0;
		goto IL_0021;
	}

IL_0004:
	{
		// if (i == slotSelected || i == slotSelected + 2 || i == slotSelected + 4)
		int32_t L_1 = V_0;
		int32_t L_2 = ___slotSelected1;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = ___slotSelected1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)2)))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___slotSelected1;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4))))))
		{
			goto IL_001d;
		}
	}

IL_0014:
	{
		// AttackEnemyWithSkill(battleSystem, i, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_7 = ___battleSystem0;
		int32_t L_8 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_9 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0021:
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_11 = V_0;
		int32_t L_12 = ___slotSelected1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)5)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillPatternUtil::QuadSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_QuadSlot_m1D794A9BB328F0A9287BE5B0BA67574995208E20 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = slotSelected; i < slotSelected + 4; i++)
		int32_t L_0 = ___slotSelected1;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0004:
	{
		// AttackEnemyWithSkill(battleSystem, i, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		int32_t L_2 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_3 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// for (int i = slotSelected; i < slotSelected + 4; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0011:
	{
		// for (int i = slotSelected; i < slotSelected + 4; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = ___slotSelected1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)4)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillPatternUtil::Quad2X2Slot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_Quad2X2Slot_m2B23422263C1B20E12B94CD61C79F5961C763654 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_0 = ___slotSelected1;
		V_0 = L_0;
		goto IL_0017;
	}

IL_0004:
	{
		// if (i != slotSelected + 2)
		int32_t L_1 = V_0;
		int32_t L_2 = ___slotSelected1;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)2)))))
		{
			goto IL_0013;
		}
	}
	{
		// AttackEnemyWithSkill(battleSystem, i, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_3 = ___battleSystem0;
		int32_t L_4 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_5 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_7 = V_0;
		int32_t L_8 = ___slotSelected1;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)5)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillPatternUtil::PentaSlot(BattleSystem,System.Int32,Skill_SO)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil_PentaSlot_mE58365329C03A71E57EB3B4BD79BC7E5B8834453 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * ___battleSystem0, int32_t ___slotSelected1, Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * ___skill2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_0 = ___slotSelected1;
		V_0 = L_0;
		goto IL_0011;
	}

IL_0004:
	{
		// AttackEnemyWithSkill(battleSystem, i, skill);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = ___battleSystem0;
		int32_t L_2 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_3 = ___skill2;
		SkillPatternUtil_AttackEnemyWithSkill_mB8E06650ECB63CACDB79152F7B2B835C266F68ED(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0011:
	{
		// for (int i = slotSelected; i < slotSelected + 5; i++)
		int32_t L_5 = V_0;
		int32_t L_6 = ___slotSelected1;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)5)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillPatternUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillPatternUtil__ctor_mA94E8A4A872AD7B9CFDDD6ED471B73863FDE0DF6 (SkillPatternUtil_t56B8015BC44C5B10B2CEF135368011465B881C74 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Skill_SO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Skill_SO__ctor_m05F13AC6524D9A59DED80BA6B77CB08E3720423F (Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SplashSequence::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashSequence_Start_m72084C15E252B6649C066329B6B69F1B0EDA2F81 (SplashSequence_tF73C0C4C47982BAF298C794B7CA1C41646594B5D * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(ToMainMenu());
		RuntimeObject* L_0;
		L_0 = SplashSequence_ToMainMenu_m60AC1BB04E4408F3F625630A2E83ED75DC542744(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SplashSequence::ToMainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplashSequence_ToMainMenu_m60AC1BB04E4408F3F625630A2E83ED75DC542744 (SplashSequence_tF73C0C4C47982BAF298C794B7CA1C41646594B5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * L_0 = (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 *)il2cpp_codegen_object_new(U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523_il2cpp_TypeInfo_var);
		U3CToMainMenuU3Ed__1__ctor_m5E61AC8DB8AD89E408BF7B0B98D50A7126DD101C(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void SplashSequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplashSequence__ctor_mBADFC654D42F7DA2848D0E8B527CDA9AED115370 (SplashSequence_tF73C0C4C47982BAF298C794B7CA1C41646594B5D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleStartState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m19056B1E0EAAF8B245B4157586D348D40087AB89 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * L_0 = (U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 *)il2cpp_codegen_object_new(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m30C7C919FE568CB8451B8E1BA44901810C997051(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void BattleStartState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m30C7C919FE568CB8451B8E1BA44901810C997051 (U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single BattleStartState/<>c::<PopulateCharactersInBattle>b__3_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CPopulateCharactersInBattleU3Eb__3_0_m032CA2F6420CC3F1C012D5B7A67413B977A75BA1 (U3CU3Ec_t050AA9DA83B97C6C2CE946108FC073BD40981002 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// battleSystem.charactersInBattle = battleSystem.charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___character0;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_1;
		L_1 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_0, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_2 = L_1->get_characterDefinition_4();
		float L_3 = L_2->get_currentSpeed_24();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleSystem/<WaitForOneSec>d__19::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForOneSecU3Ed__19__ctor_mE5BB3B67022371C9613E1349F03736AAA8D90C2B (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void BattleSystem/<WaitForOneSec>d__19::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForOneSecU3Ed__19_System_IDisposable_Dispose_m06598CF717B2E4DFF906EB10E7C3E73F99A376AC (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean BattleSystem/<WaitForOneSec>d__19::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitForOneSecU3Ed__19_MoveNext_m18A041BCE9D1C0E3CD73B4BEFEFB3245AD6AE0C3 (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// currentState.EnterState(this);
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_5 = V_1;
		BattleBaseState_t882FA6B30004EBA2981EC284E1612CCDD5D7CA98 * L_6 = L_5->get_currentState_4();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_7 = V_1;
		VirtActionInvoker1< BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * >::Invoke(4 /* System.Void BattleBaseState::EnterState(BattleSystem) */, L_6, L_7);
		// }
		return (bool)0;
	}
}
// System.Object BattleSystem/<WaitForOneSec>d__19::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForOneSecU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD647F2F865EB61AB719E700360131753C27C18D9 (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void BattleSystem/<WaitForOneSec>d__19::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitForOneSecU3Ed__19_System_Collections_IEnumerator_Reset_m3E8F1FC775D045C1F7D3B37AE068B510C4BE2F96 (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitForOneSecU3Ed__19_System_Collections_IEnumerator_Reset_m3E8F1FC775D045C1F7D3B37AE068B510C4BE2F96_RuntimeMethod_var)));
	}
}
// System.Object BattleSystem/<WaitForOneSec>d__19::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitForOneSecU3Ed__19_System_Collections_IEnumerator_get_Current_m4AEB0648A5ECEBD3BAE09D523589139D2F5948AA (U3CWaitForOneSecU3Ed__19_tB5C2DA79ABBE4E34703146B4FC2D27EA18205BC6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleUI/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m82E5A997E1F91026E3D897E6AC321C89DD7A22D8 (U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleUI/<>c__DisplayClass27_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1__ctor_mA891A57FFF50F6086A907C89EB11A593BB7E33D0 (U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BattleUI/<>c__DisplayClass27_1::<SkillsButton>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1_U3CSkillsButtonU3Eb__0_mF11FF283A5285A87BEB25977DCD0C721D61DBB74 (U3CU3Ec__DisplayClass27_1_t2D9CA1E03CF95E5E8415986ED81412BA5BFBB7D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int skillIndex = int.Parse(go.transform.GetChild(1).GetComponent<Text>().text);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_go_0();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, 1, /*hidden argument*/NULL);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(L_2, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		int32_t L_5;
		L_5 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// skill = skills[skillIndex];
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_6 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_7 = L_6->get_U3CU3E4__this_0();
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_8 = __this->get_CSU24U3CU3E8__locals1_1();
		List_1_tF450009D913AA9C951278FAB31BE1E4C559CE864 * L_9 = L_8->get_skills_1();
		int32_t L_10 = V_0;
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_11;
		L_11 = List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_m2C6B0656E2F0461689A5AE6D3914541A64609DB3_RuntimeMethod_var);
		L_7->set_skill_21(L_11);
		// Debug.Log(skill.name);
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_12 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_13 = L_12->get_U3CU3E4__this_0();
		Skill_SO_t8555D0591676BEF957A74B649BA2B9CF4955FA35 * L_14 = L_13->get_skill_21();
		String_t* L_15;
		L_15 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_15, /*hidden argument*/NULL);
		// battleSystem.attack = true;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_16 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_17 = L_16->get_U3CU3E4__this_0();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_18 = L_17->get_battleSystem_4();
		L_18->set_attack_13((bool)1);
		// battleSystem.attackSlot = 2;
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_19 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_20 = L_19->get_U3CU3E4__this_0();
		BattleSystem_tEC50BB297866DEBD58D5C09A588B3174F55CFB3E * L_21 = L_20->get_battleSystem_4();
		L_21->set_attackSlot_17(2);
		// SelectProperSlots();
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_22 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_23 = L_22->get_U3CU3E4__this_0();
		BattleUI_SelectProperSlots_mED02583109EFD4D66BDBC59AF4F5F14EFDF9BFFC(L_23, /*hidden argument*/NULL);
		// SkillChoice.SetActive(false);
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_24 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_25 = L_24->get_U3CU3E4__this_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = L_25->get_SkillChoice_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)0, /*hidden argument*/NULL);
		// PlayerChoice.SetActive(false);
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_27 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_28 = L_27->get_U3CU3E4__this_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_PlayerChoice_9();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_29, (bool)0, /*hidden argument*/NULL);
		// AttackOrBack.SetActive(true);
		U3CU3Ec__DisplayClass27_0_t56785C06910475FC46E220CF3935644A67081692 * L_30 = __this->get_CSU24U3CU3E8__locals1_1();
		BattleUI_t741293FB8CA47B95B7252AB6203AF2DFCADF774D * L_31 = L_30->get_U3CU3E4__this_0();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = L_31->get_AttackOrBack_17();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_32, (bool)1, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BattleWhosNextState/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m98F36081BD2FA58D4DBD6B87F60B4B5508597C56 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * L_0 = (U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 *)il2cpp_codegen_object_new(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0F9939F61174E85BE03E445ED17DE4BE0EEB0E4E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void BattleWhosNextState/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0F9939F61174E85BE03E445ED17DE4BE0EEB0E4E (U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single BattleWhosNextState/<>c::<RePopulateCharactersInBattle>b__5_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CRePopulateCharactersInBattleU3Eb__5_0_m2B9B73235808A6DD17AC737EA9846DA0C983AE85 (U3CU3Ec_t7E082A2775C69E1100DA0A957C8CED8C27B33661 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// battleSystem.charactersInBattle = battleSystem.charactersInBattle.OrderByDescending(character => character.GetComponent<CharacterStats>().characterDefinition.currentSpeed).ToList();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___character0;
		CharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB * L_1;
		L_1 = GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A(L_0, /*hidden argument*/GameObject_GetComponent_TisCharacterStats_tA8E09A3A2BF13F9D6C7F850C0E36EFA4D6964FFB_mB8CB134BEE25BA01A1FAD909CEA814F358F3E36A_RuntimeMethod_var);
		CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * L_2 = L_1->get_characterDefinition_4();
		float L_3 = L_2->get_currentSpeed_24();
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CharacterStats_SO/CharLevelUps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharLevelUps__ctor_mB5769F5411F7D3AA5ECE586C099086585221165F (CharLevelUps_t3E4589EBBC11FB78B87460868D79F955C152155E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DialogueManger/<TypeSentence>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__10__ctor_m6C9918F6751FC851B1175B665A3D35E0DC53C0B3 (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DialogueManger/<TypeSentence>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__10_System_IDisposable_Dispose_mA341DBD5BBA9ECFA0923895A925F96660DB3CE86 (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DialogueManger/<TypeSentence>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTypeSentenceU3Ed__10_MoveNext_mFF6DB2DC03F6835A2F423417D85B553AB59233EA (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0083;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// dialogueText.text = "";
		DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * L_4 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_dialogueText_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// foreach(char letter in sentence.ToCharArray())
		String_t* L_6 = __this->get_sentence_3();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7;
		L_7 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E7__wrap1_4(L_7);
		__this->set_U3CU3E7__wrap2_5(0);
		goto IL_0098;
	}

IL_0048:
	{
		// foreach(char letter in sentence.ToCharArray())
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = __this->get_U3CU3E7__wrap1_4();
		int32_t L_9 = __this->get_U3CU3E7__wrap2_5();
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		// dialogueText.text += letter;
		DialogueManger_t4491B6D7EAFEE3AF0BAA218C648ECC6E3AE6940B * L_12 = V_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12->get_dialogueText_6();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = L_13;
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_14);
		String_t* L_16;
		L_16 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_2), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, L_16, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0083:
	{
		__this->set_U3CU3E1__state_0((-1));
		int32_t L_18 = __this->get_U3CU3E7__wrap2_5();
		__this->set_U3CU3E7__wrap2_5(((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1)));
	}

IL_0098:
	{
		// foreach(char letter in sentence.ToCharArray())
		int32_t L_19 = __this->get_U3CU3E7__wrap2_5();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = __this->get_U3CU3E7__wrap1_4();
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0048;
		}
	}
	{
		__this->set_U3CU3E7__wrap1_4((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object DialogueManger/<TypeSentence>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTypeSentenceU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C893D03B9B0AB3D6B5D980A944DE03CBC81E064 (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DialogueManger/<TypeSentence>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeSentenceU3Ed__10_System_Collections_IEnumerator_Reset_mDA8A52682C40C0395A1B9C7DE13857D23A733A59 (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTypeSentenceU3Ed__10_System_Collections_IEnumerator_Reset_mDA8A52682C40C0395A1B9C7DE13857D23A733A59_RuntimeMethod_var)));
	}
}
// System.Object DialogueManger/<TypeSentence>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTypeSentenceU3Ed__10_System_Collections_IEnumerator_get_Current_m7D47EFF69A17D0432292B9ADC99BD8D86EE447CA (U3CTypeSentenceU3Ed__10_t46A0377253A51BFBB1FA39630BF9DE5B3001D478 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManger/AreaData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AreaData__ctor_m112867D876B2618A8950FA64F3A31087CB6FAF4B (AreaData_t1CB021C5201DFDADA4A3642F4C0D33EBC566D0B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxAmountEnemys = 5;
		__this->set_maxAmountEnemys_1(5);
		// public List<GameObject> possibleEnemys = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_possibleEnemys_2(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManger/PartyData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartyData__ctor_m42E44E24F0A6CB2051D4EB9E78EB1695AA1DA842 (PartyData_t4526868E24A37E230B89308E1F624E73B9951643 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int maxPartySize = 3;
		__this->set_maxPartySize_0(3);
		// public List<GameObject> PlayerParty = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_PlayerParty_1(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Quest_SO/QuestGoal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestGoal__ctor_mB3866980E919B7A0E66CC52C0A18161973C70D97 (QuestGoal_tFB8BF404D1541B955C55CAD1F9E267E56D0551BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SplashSequence/<ToMainMenu>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToMainMenuU3Ed__1__ctor_m5E61AC8DB8AD89E408BF7B0B98D50A7126DD101C (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SplashSequence/<ToMainMenu>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToMainMenuU3Ed__1_System_IDisposable_Dispose_m2DC912AB9AE465A5599D8CE2B27AFC79C23A5990 (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SplashSequence/<ToMainMenu>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CToMainMenuU3Ed__1_MoveNext_m94D239B32527EF47FD0CF696210215BAA884B58D (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_3 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_3, (3.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene("Main");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3F86111F44D66C543B732847E04E3C2A5B38BB3D, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object SplashSequence/<ToMainMenu>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToMainMenuU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC47D1EB6EE427C8366F2E7C76FC0E8F42549C93 (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SplashSequence/<ToMainMenu>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CToMainMenuU3Ed__1_System_Collections_IEnumerator_Reset_m26729FC4C5CEBAF46E413C73EF7144CE22C79FA8 (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CToMainMenuU3Ed__1_System_Collections_IEnumerator_Reset_m26729FC4C5CEBAF46E413C73EF7144CE22C79FA8_RuntimeMethod_var)));
	}
}
// System.Object SplashSequence/<ToMainMenu>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CToMainMenuU3Ed__1_System_Collections_IEnumerator_get_Current_m1B18AF9F97760958A4599C2B7E84F0ED7AA84961 (U3CToMainMenuU3Ed__1_t674F68BB687DE41898370CC05257CD5A0BE6F523 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_weapon_m44C49F9EA87BC20D9C39102804C5713E52D3226D_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// public ItemPickUp weapon { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = __this->get_U3CweaponU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterStats_SO_set_weapon_m0D1C2DE0C413D7699558FFE10586B2D33148C149_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method)
{
	{
		// public ItemPickUp weapon { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___value0;
		__this->set_U3CweaponU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterStats_SO_set_shield_m9929DF23114361952FADA767CA387477C5C703C7_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method)
{
	{
		// public ItemPickUp shield { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___value0;
		__this->set_U3CshieldU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_shield_mD81FC7CC77F5686CE11876A5D4C08E5D98C32F45_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// public ItemPickUp shield { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = __this->get_U3CshieldU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CharacterStats_SO_set_accessory_m76858843C2304B65B6B8BD734075C34928DAB107_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * ___value0, const RuntimeMethod* method)
{
	{
		// public ItemPickUp accessory { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = ___value0;
		__this->set_U3CaccessoryU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * CharacterStats_SO_get_accessory_m7DB6D247B2B2381B637C210EA5B4EAC69C848F55_inline (CharacterStats_SO_t241C361C6AA6A774B5A038DAA13CDDFF45BE084F * __this, const RuntimeMethod* method)
{
	{
		// public ItemPickUp accessory { get; private set; }
		ItemPickUp_tE39691C2E0EB2B8FD14399FE8BD8F6FCFED68BB4 * L_0 = __this->get_U3CaccessoryU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Slider_get_fillRect_m4D02B70BFAA5C003B34E8132C10CB80A0F022CAA_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public RectTransform fillRect { get { return m_FillRect; } set { if (SetPropertyUtility.SetClass(ref m_FillRect, value)) {UpdateCachedReferences(); UpdateVisuals(); } } }
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0 = __this->get_m_FillRect_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}

#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ActionCode.Demo.CameraLockFollow
struct CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// LayerLab.PanelControlSimpleCasual
struct PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF;
// LayerLab.PanelSimpleCasual
struct PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// ActionCode.Demo.PlayerInput
struct PlayerInput_t6797499ECAE2483646820DFA9F1F361FB5D52397;
// ActionCode.Demo.PlayerMotor
struct PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// ActionCode.Demo.SizeEffector
struct SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// ActionCode.Renderers.SpriteGhostTrailRenderer
struct SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02F4B5EA8FB857D0931F43619CD0BBE167AEFDB2;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB7575092C202BF2436CBDC677AF4DF758749FF;
IL2CPP_EXTERN_C String_t* _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3136BECD7D9F25AEFC11500AB4BA46CE87EC2F6B;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral962970581907DBD4C7F3B6D97EE0145B16ADC564;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2DD04062F03563B8D362C17CDFBD5CDD6473A8;
IL2CPP_EXTERN_C String_t* _stringLiteralD6635F3B6159FBA54BC9CFF38613ECB296793232;
IL2CPP_EXTERN_C String_t* _stringLiteralDDC6D7FAC84DA6944C92524DBCE998CD945BFC1F;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFEA3C74EA0DCE1E9B02F16277D96FE518E14CA6C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155_m690FF05E10E49FD3185F6123C0C38CF16B529B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B_m4FE2E652504D25A2F2E1626A21481573EEBB807B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130_m48C3F6527C90769CE504E8F850D601A264918070_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 
{
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// ActionCode.Demo.CameraLockFollow
struct CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ActionCode.Demo.CameraLockFollow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// UnityEngine.Vector2 ActionCode.Demo.CameraLockFollow::offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset_5;
};

// LayerLab.PanelControlSimpleCasual
struct PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LayerLab.PanelControlSimpleCasual::page
	int32_t ___page_4;
	// System.Boolean LayerLab.PanelControlSimpleCasual::isReady
	bool ___isReady_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.PanelControlSimpleCasual::panelLight
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panelLight_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> LayerLab.PanelControlSimpleCasual::panelDark
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___panelDark_7;
	// TMPro.TextMeshProUGUI LayerLab.PanelControlSimpleCasual::textTitle
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___textTitle_8;
	// UnityEngine.Transform LayerLab.PanelControlSimpleCasual::panelTransformLight
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransformLight_9;
	// UnityEngine.Transform LayerLab.PanelControlSimpleCasual::panelTransformDark
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___panelTransformDark_10;
	// UnityEngine.UI.Button LayerLab.PanelControlSimpleCasual::buttonPrev
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonPrev_11;
	// UnityEngine.UI.Button LayerLab.PanelControlSimpleCasual::buttonNext
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___buttonNext_12;
	// System.Boolean LayerLab.PanelControlSimpleCasual::isDarakMode
	bool ___isDarakMode_13;
};

// LayerLab.PanelSimpleCasual
struct PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] LayerLab.PanelSimpleCasual::otherPanels
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___otherPanels_4;
};

// ActionCode.Demo.PlayerInput
struct PlayerInput_t6797499ECAE2483646820DFA9F1F361FB5D52397  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ActionCode.Demo.PlayerInput::horizontalAxis
	String_t* ___horizontalAxis_4;
	// System.String ActionCode.Demo.PlayerInput::verticalAxis
	String_t* ___verticalAxis_5;
	// System.String ActionCode.Demo.PlayerInput::sizeAxis
	String_t* ___sizeAxis_6;
	// System.String ActionCode.Demo.PlayerInput::resetSizeButton
	String_t* ___resetSizeButton_7;
	// System.String ActionCode.Demo.PlayerInput::jumpButton
	String_t* ___jumpButton_8;
	// System.String ActionCode.Demo.PlayerInput::attackButton
	String_t* ___attackButton_9;
	// System.String ActionCode.Demo.PlayerInput::toggleGhostButton
	String_t* ___toggleGhostButton_10;
	// System.String ActionCode.Demo.PlayerInput::cycleColorButton
	String_t* ___cycleColorButton_11;
	// System.String ActionCode.Demo.PlayerInput::singleColorButton
	String_t* ___singleColorButton_12;
	// ActionCode.Demo.PlayerMotor ActionCode.Demo.PlayerInput::motor
	PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* ___motor_13;
	// ActionCode.Demo.SizeEffector ActionCode.Demo.PlayerInput::sizeEffector
	SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* ___sizeEffector_14;
	// ActionCode.Renderers.SpriteGhostTrailRenderer ActionCode.Demo.PlayerInput::trailRenderer
	SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* ___trailRenderer_15;
	// UnityEngine.Color[] ActionCode.Demo.PlayerInput::ghostColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___ghostColors_16;
	// System.Int32 ActionCode.Demo.PlayerInput::colorIndex
	int32_t ___colorIndex_17;
};

// ActionCode.Demo.PlayerMotor
struct PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ActionCode.Demo.PlayerMotor::hInputParam
	String_t* ___hInputParam_4;
	// System.String ActionCode.Demo.PlayerMotor::vSpeedParam
	String_t* ___vSpeedParam_5;
	// System.String ActionCode.Demo.PlayerMotor::crouchingParam
	String_t* ___crouchingParam_6;
	// System.String ActionCode.Demo.PlayerMotor::jumpParam
	String_t* ___jumpParam_7;
	// System.String ActionCode.Demo.PlayerMotor::attackParam
	String_t* ___attackParam_8;
	// System.String ActionCode.Demo.PlayerMotor::groundedParam
	String_t* ___groundedParam_9;
	// System.Single ActionCode.Demo.PlayerMotor::speed
	float ___speed_10;
	// System.Single ActionCode.Demo.PlayerMotor::jumpForce
	float ___jumpForce_11;
	// UnityEngine.ContactFilter2D ActionCode.Demo.PlayerMotor::groundFilter
	ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 ___groundFilter_12;
	// UnityEngine.Animator ActionCode.Demo.PlayerMotor::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_13;
	// UnityEngine.Rigidbody2D ActionCode.Demo.PlayerMotor::_rigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ____rigidbody_14;
	// UnityEngine.BoxCollider2D ActionCode.Demo.PlayerMotor::_collider
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ____collider_15;
	// UnityEngine.SpriteRenderer ActionCode.Demo.PlayerMotor::_renderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ____renderer_16;
	// System.Single ActionCode.Demo.PlayerMotor::lastInput
	float ___lastInput_17;
	// System.Single ActionCode.Demo.PlayerMotor::lastDirection
	float ___lastDirection_18;
	// System.Int32 ActionCode.Demo.PlayerMotor::hInputId
	int32_t ___hInputId_19;
	// System.Int32 ActionCode.Demo.PlayerMotor::vSpeedId
	int32_t ___vSpeedId_20;
	// System.Int32 ActionCode.Demo.PlayerMotor::crouchingId
	int32_t ___crouchingId_21;
	// System.Int32 ActionCode.Demo.PlayerMotor::jumpId
	int32_t ___jumpId_22;
	// System.Int32 ActionCode.Demo.PlayerMotor::attackId
	int32_t ___attackId_23;
	// System.Int32 ActionCode.Demo.PlayerMotor::groundedId
	int32_t ___groundedId_24;
	// System.Single ActionCode.Demo.PlayerMotor::crouching
	float ___crouching_25;
	// System.Boolean ActionCode.Demo.PlayerMotor::isGrounded
	bool ___isGrounded_26;
	// System.Single ActionCode.Demo.PlayerMotor::SKIN
	float ___SKIN_27;
};

// ActionCode.Demo.SizeEffector
struct SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ActionCode.Demo.SizeEffector::speed
	float ___speed_4;
	// UnityEngine.Vector3 ActionCode.Demo.SizeEffector::_defaultScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____defaultScale_5;
};

// ActionCode.Renderers.SpriteGhostTrailRenderer
struct SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Color ActionCode.Renderers.SpriteGhostTrailRenderer::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_4;
	// System.Boolean ActionCode.Renderers.SpriteGhostTrailRenderer::enableOnAwake
	bool ___enableOnAwake_5;
	// System.Boolean ActionCode.Renderers.SpriteGhostTrailRenderer::useSingleColor
	bool ___useSingleColor_6;
	// System.Int32 ActionCode.Renderers.SpriteGhostTrailRenderer::updatesPerSecond
	int32_t ___updatesPerSecond_7;
	// System.Int32 ActionCode.Renderers.SpriteGhostTrailRenderer::ghostsNumber
	int32_t ___ghostsNumber_8;
	// UnityEngine.Shader ActionCode.Renderers.SpriteGhostTrailRenderer::shader
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader_9;
	// System.String ActionCode.Renderers.SpriteGhostTrailRenderer::containerSuffix
	String_t* ___containerSuffix_10;
	// UnityEngine.SpriteRenderer ActionCode.Renderers.SpriteGhostTrailRenderer::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_11;
	// System.String ActionCode.Renderers.SpriteGhostTrailRenderer::SPRITE_GHOST_SHADER_NAME
	String_t* ___SPRITE_GHOST_SHADER_NAME_12;
	// System.Int32 ActionCode.Renderers.SpriteGhostTrailRenderer::SHADER_SINGLE_COLOR_PROPERTY
	int32_t ___SHADER_SINGLE_COLOR_PROPERTY_13;
	// System.Single ActionCode.Renderers.SpriteGhostTrailRenderer::updateTime
	float ___updateTime_14;
	// System.Int32 ActionCode.Renderers.SpriteGhostTrailRenderer::ghostIndex
	int32_t ___ghostIndex_15;
	// System.Single ActionCode.Renderers.SpriteGhostTrailRenderer::frequencyTime
	float ___frequencyTime_16;
	// UnityEngine.Material ActionCode.Renderers.SpriteGhostTrailRenderer::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_17;
	// UnityEngine.SpriteRenderer[] ActionCode.Renderers.SpriteGhostTrailRenderer::ghostRenderers
	SpriteRendererU5BU5D_t0DEDE77D607814DC56F5AC6D7D80AA5A342ABF28* ___ghostRenderers_18;
	// UnityEngine.Transform ActionCode.Renderers.SpriteGhostTrailRenderer::<Container>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CContainerU3Ek__BackingField_19;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void ActionCode.Demo.CameraLockFollow::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLockFollow_UpdatePosition_mFA6AD4A3E089B534E785AF039C277000C993169B (CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ActionCode.Demo.PlayerMotor>()
inline PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* Component_GetComponent_TisPlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155_m690FF05E10E49FD3185F6123C0C38CF16B529B72 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<ActionCode.Demo.SizeEffector>()
inline SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* Component_GetComponent_TisSizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B_m4FE2E652504D25A2F2E1626A21481573EEBB807B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<ActionCode.Renderers.SpriteGhostTrailRenderer>()
inline SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* Component_GetComponent_TisSpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130_m48C3F6527C90769CE504E8F850D601A264918070 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Jump_m959DF0092B10EA258C6EE018BAFD8A037929C9FF (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Attack_mDB0FF5A11EFD79125974C0171443A4E189441A2F (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::Crouch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Crouch_m7C15E0356BC447F9171E066D7C44437EFAD124B6 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, float ___crounching0, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::Move(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Move_m3015FAE90014BB76333D185AA2912C4E34D967CC (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, float ___horInput0, const RuntimeMethod* method) ;
// System.Void ActionCode.Renderers.SpriteGhostTrailRenderer::Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteGhostTrailRenderer_Toggle_mD208DF4E9E8F5F5813E851843CED8D5252D43175 (SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Renderers.SpriteGhostTrailRenderer::set_Color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteGhostTrailRenderer_set_Color_mA9C65DC2B9313D1656CBA6CD2C298CF558983E55 (SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void ActionCode.Renderers.SpriteGhostTrailRenderer::ToggleSingleColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteGhostTrailRenderer_ToggleSingleColor_mA368B520CF9E382ADDF7CD2D0E8301315ED2EBF5 (SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.SizeEffector::IncreaseSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_IncreaseSize_m7FB04224665CF50D7594ACC8EC303E6E482DFE1C (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.SizeEffector::DecreaseSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_DecreaseSize_m4D92AB31E2B64FA1F61BA1A8B4758234655D7C6C (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.SizeEffector::ResetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_ResetSize_m6CDC63E117C1404FC86B632ADF5D2847E4DBB7DC (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::SetupComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_SetupComponents_m258BC1283E751670F5CF2E3F9799E57CDB565D61 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::HashAnimatorParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_HashAnimatorParams_mB62C3746475F5385F72CA685CB493F03BF0E1959 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413 (const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::UpdateAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_UpdateAnimator_m376A6056F0E000D6A3D6157D1A3F65234212E036 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::UpdatePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_UpdatePhysics_mFFE69A6A51A27F2BBBDCE0604916C6E7CFEE80DA (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Void ActionCode.Demo.PlayerMotor::FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_FlipHorizontally_mF6F8536C463DB8E4F4E9805D1D03A1B9EBE734A6 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___force0, int32_t ___mode1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean ActionCode.Demo.PlayerMotor::IsForwardCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMotor_IsForwardCollision_m7455B4D62790B9BFD2B4CF41DD7CCFB4DE167E74 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody2D::IsTouching(UnityEngine.ContactFilter2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody2D_IsTouching_mA69870E78416F4DC0B381E5D862BEB5778FE6361 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 ___contactFilter0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___id0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Raycast_m4F22AD6D93E283DCBFF1DF2F3B67988BFE092DAA (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___origin0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___direction1, float ___distance2, int32_t ___layerMask3, float ___minDepth4, float ___maxDepth5, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RaycastHit2D::op_Implicit(UnityEngine.RaycastHit2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___hit0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void LayerLab.PanelControlSimpleCasual::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::SetMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Void LayerLab.PanelControlSimpleCasual::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetArrowActive_m92E6155F9B105F78CCE6DC447A9A9C335F480D9D (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ActionCode.Demo.CameraLockFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLockFollow_LateUpdate_m81892084569761B284DDDB41B2D940E27521DA3B (CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePosition();
		CameraLockFollow_UpdatePosition_mFA6AD4A3E089B534E785AF039C277000C993169B(__this, NULL);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.CameraLockFollow::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLockFollow_OnValidate_mCC530305A1A98C4935F514C30EA15E2D78674F9A (CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePosition();
		CameraLockFollow_UpdatePosition_mFA6AD4A3E089B534E785AF039C277000C993169B(__this, NULL);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.CameraLockFollow::UpdatePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLockFollow_UpdatePosition_mFA6AD4A3E089B534E785AF039C277000C993169B (CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0071;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		V_1 = L_4;
		// pos.x = offset.x + target.position.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___offset_5);
		float L_6 = L_5->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___target_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_add(L_6, L_9));
		// pos.y = offset.y + target.position.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___offset_5);
		float L_11 = L_10->___y_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___target_4;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_add(L_11, L_14));
		// transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_16, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.CameraLockFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraLockFollow__ctor_m215B85BE15165B9E3CDB9B61B0401E6094823B3B (CameraLockFollow_t5112858A34A8F9C8D14E4496D04F13AA419CB2D9* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 offset = Vector2.up * 4f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_0, (4.0f), NULL);
		__this->___offset_5 = L_1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ActionCode.Demo.PlayerInput::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Reset_m59FAFCCEFFF7EE6B920ED35E2A7C92D0A0E8DE9A (PlayerInput_t6797499ECAE2483646820DFA9F1F361FB5D52397* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155_m690FF05E10E49FD3185F6123C0C38CF16B529B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B_m4FE2E652504D25A2F2E1626A21481573EEBB807B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130_m48C3F6527C90769CE504E8F850D601A264918070_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// motor = GetComponent<PlayerMotor>();
		PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* L_0;
		L_0 = Component_GetComponent_TisPlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155_m690FF05E10E49FD3185F6123C0C38CF16B529B72(__this, Component_GetComponent_TisPlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155_m690FF05E10E49FD3185F6123C0C38CF16B529B72_RuntimeMethod_var);
		__this->___motor_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___motor_13), (void*)L_0);
		// sizeEffector = GetComponent<SizeEffector>();
		SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* L_1;
		L_1 = Component_GetComponent_TisSizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B_m4FE2E652504D25A2F2E1626A21481573EEBB807B(__this, Component_GetComponent_TisSizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B_m4FE2E652504D25A2F2E1626A21481573EEBB807B_RuntimeMethod_var);
		__this->___sizeEffector_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sizeEffector_14), (void*)L_1);
		// trailRenderer = GetComponent<SpriteGhostTrailRenderer>();
		SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* L_2;
		L_2 = Component_GetComponent_TisSpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130_m48C3F6527C90769CE504E8F850D601A264918070(__this, Component_GetComponent_TisSpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130_m48C3F6527C90769CE504E8F850D601A264918070_RuntimeMethod_var);
		__this->___trailRenderer_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trailRenderer_15), (void*)L_2);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_Update_m82134E7ED6FB6041C317075DBC27C444F082DF50 (PlayerInput_t6797499ECAE2483646820DFA9F1F361FB5D52397* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		// bool hasJumped = Input.GetButtonDown(jumpButton);
		String_t* L_0 = __this->___jumpButton_8;
		bool L_1;
		L_1 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_0, NULL);
		V_0 = L_1;
		// bool hasAttacked = Input.GetButtonDown(attackButton);
		String_t* L_2 = __this->___attackButton_9;
		bool L_3;
		L_3 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_2, NULL);
		V_1 = L_3;
		// bool toggleGhost = Input.GetButtonDown(toggleGhostButton);
		String_t* L_4 = __this->___toggleGhostButton_10;
		bool L_5;
		L_5 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_4, NULL);
		V_2 = L_5;
		// bool cycleColor = Input.GetButtonDown(cycleColorButton);
		String_t* L_6 = __this->___cycleColorButton_11;
		bool L_7;
		L_7 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_6, NULL);
		V_3 = L_7;
		// bool singleColor = Input.GetButtonDown(singleColorButton);
		String_t* L_8 = __this->___singleColorButton_12;
		bool L_9;
		L_9 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_8, NULL);
		V_4 = L_9;
		// bool resetSize = Input.GetButtonDown(resetSizeButton);
		String_t* L_10 = __this->___resetSizeButton_7;
		bool L_11;
		L_11 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(L_10, NULL);
		V_5 = L_11;
		// float crouching = -Input.GetAxisRaw(verticalAxis);
		String_t* L_12 = __this->___verticalAxis_5;
		float L_13;
		L_13 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(L_12, NULL);
		V_6 = ((-L_13));
		// float horInput = Input.GetAxisRaw(horizontalAxis);
		String_t* L_14 = __this->___horizontalAxis_4;
		float L_15;
		L_15 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(L_14, NULL);
		V_7 = L_15;
		// float size = Input.GetAxisRaw(sizeAxis);
		String_t* L_16 = __this->___sizeAxis_6;
		float L_17;
		L_17 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(L_16, NULL);
		V_8 = L_17;
		// if (hasJumped) motor.Jump();
		bool L_18 = V_0;
		V_9 = L_18;
		bool L_19 = V_9;
		if (!L_19)
		{
			goto IL_0086;
		}
	}
	{
		// if (hasJumped) motor.Jump();
		PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* L_20 = __this->___motor_13;
		NullCheck(L_20);
		PlayerMotor_Jump_m959DF0092B10EA258C6EE018BAFD8A037929C9FF(L_20, NULL);
	}

IL_0086:
	{
		// if (hasAttacked) motor.Attack();
		bool L_21 = V_1;
		V_10 = L_21;
		bool L_22 = V_10;
		if (!L_22)
		{
			goto IL_0099;
		}
	}
	{
		// if (hasAttacked) motor.Attack();
		PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* L_23 = __this->___motor_13;
		NullCheck(L_23);
		PlayerMotor_Attack_mDB0FF5A11EFD79125974C0171443A4E189441A2F(L_23, NULL);
	}

IL_0099:
	{
		// motor.Crouch(crouching);
		PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* L_24 = __this->___motor_13;
		float L_25 = V_6;
		NullCheck(L_24);
		PlayerMotor_Crouch_m7C15E0356BC447F9171E066D7C44437EFAD124B6(L_24, L_25, NULL);
		// motor.Move(horInput);
		PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* L_26 = __this->___motor_13;
		float L_27 = V_7;
		NullCheck(L_26);
		PlayerMotor_Move_m3015FAE90014BB76333D185AA2912C4E34D967CC(L_26, L_27, NULL);
		// if (toggleGhost) trailRenderer.Toggle();
		bool L_28 = V_2;
		V_11 = L_28;
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_00c8;
		}
	}
	{
		// if (toggleGhost) trailRenderer.Toggle();
		SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* L_30 = __this->___trailRenderer_15;
		NullCheck(L_30);
		SpriteGhostTrailRenderer_Toggle_mD208DF4E9E8F5F5813E851843CED8D5252D43175(L_30, NULL);
	}

IL_00c8:
	{
		// if (cycleColor)
		bool L_31 = V_3;
		V_12 = L_31;
		bool L_32 = V_12;
		if (!L_32)
		{
			goto IL_0105;
		}
	}
	{
		// colorIndex = (colorIndex + 1) % ghostColors.Length;
		int32_t L_33 = __this->___colorIndex_17;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_34 = __this->___ghostColors_16;
		NullCheck(L_34);
		__this->___colorIndex_17 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_33, 1))%((int32_t)(((RuntimeArray*)L_34)->max_length))));
		// trailRenderer.Color = ghostColors[colorIndex];
		SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* L_35 = __this->___trailRenderer_15;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_36 = __this->___ghostColors_16;
		int32_t L_37 = __this->___colorIndex_17;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_35);
		SpriteGhostTrailRenderer_set_Color_mA9C65DC2B9313D1656CBA6CD2C298CF558983E55(L_35, L_39, NULL);
	}

IL_0105:
	{
		// if (singleColor) trailRenderer.ToggleSingleColor();
		bool L_40 = V_4;
		V_13 = L_40;
		bool L_41 = V_13;
		if (!L_41)
		{
			goto IL_0119;
		}
	}
	{
		// if (singleColor) trailRenderer.ToggleSingleColor();
		SpriteGhostTrailRenderer_tD8CB20109CF0F5958463B44E922C27C51E303130* L_42 = __this->___trailRenderer_15;
		NullCheck(L_42);
		SpriteGhostTrailRenderer_ToggleSingleColor_mA368B520CF9E382ADDF7CD2D0E8301315ED2EBF5(L_42, NULL);
	}

IL_0119:
	{
		// if (size > 0.5f) sizeEffector.IncreaseSize();
		float L_43 = V_8;
		V_14 = (bool)((((float)L_43) > ((float)(0.5f)))? 1 : 0);
		bool L_44 = V_14;
		if (!L_44)
		{
			goto IL_0136;
		}
	}
	{
		// if (size > 0.5f) sizeEffector.IncreaseSize();
		SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* L_45 = __this->___sizeEffector_14;
		NullCheck(L_45);
		SizeEffector_IncreaseSize_m7FB04224665CF50D7594ACC8EC303E6E482DFE1C(L_45, NULL);
		goto IL_0151;
	}

IL_0136:
	{
		// else if (size < -0.5f) sizeEffector.DecreaseSize();
		float L_46 = V_8;
		V_15 = (bool)((((float)L_46) < ((float)(-0.5f)))? 1 : 0);
		bool L_47 = V_15;
		if (!L_47)
		{
			goto IL_0151;
		}
	}
	{
		// else if (size < -0.5f) sizeEffector.DecreaseSize();
		SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* L_48 = __this->___sizeEffector_14;
		NullCheck(L_48);
		SizeEffector_DecreaseSize_m4D92AB31E2B64FA1F61BA1A8B4758234655D7C6C(L_48, NULL);
	}

IL_0151:
	{
		// if (resetSize) sizeEffector.ResetSize();
		bool L_49 = V_5;
		V_16 = L_49;
		bool L_50 = V_16;
		if (!L_50)
		{
			goto IL_0165;
		}
	}
	{
		// if (resetSize) sizeEffector.ResetSize();
		SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* L_51 = __this->___sizeEffector_14;
		NullCheck(L_51);
		SizeEffector_ResetSize_m6CDC63E117C1404FC86B632ADF5D2847E4DBB7DC(L_51, NULL);
	}

IL_0165:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m944C61DF4BA0C5D95C0E37EF4A0703144F4566E0 (PlayerInput_t6797499ECAE2483646820DFA9F1F361FB5D52397* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3136BECD7D9F25AEFC11500AB4BA46CE87EC2F6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral962970581907DBD4C7F3B6D97EE0145B16ADC564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2DD04062F03563B8D362C17CDFBD5CDD6473A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDC6D7FAC84DA6944C92524DBCE998CD945BFC1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEA3C74EA0DCE1E9B02F16277D96FE518E14CA6C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string horizontalAxis = "Horizontal";
		__this->___horizontalAxis_4 = _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___horizontalAxis_4), (void*)_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		// [SerializeField] private string verticalAxis = "Vertical";
		__this->___verticalAxis_5 = _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___verticalAxis_5), (void*)_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		// [SerializeField] private string sizeAxis = "Size";
		__this->___sizeAxis_6 = _stringLiteralCE2DD04062F03563B8D362C17CDFBD5CDD6473A8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sizeAxis_6), (void*)_stringLiteralCE2DD04062F03563B8D362C17CDFBD5CDD6473A8);
		// [SerializeField] private string resetSizeButton = "ResetSize";
		__this->___resetSizeButton_7 = _stringLiteralFEA3C74EA0DCE1E9B02F16277D96FE518E14CA6C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resetSizeButton_7), (void*)_stringLiteralFEA3C74EA0DCE1E9B02F16277D96FE518E14CA6C);
		// [SerializeField] private string jumpButton = "Jump";
		__this->___jumpButton_8 = _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpButton_8), (void*)_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		// [SerializeField] private string attackButton = "Fire1";
		__this->___attackButton_9 = _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackButton_9), (void*)_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		// [SerializeField] private string toggleGhostButton = "ToogleGhost";
		__this->___toggleGhostButton_10 = _stringLiteralDDC6D7FAC84DA6944C92524DBCE998CD945BFC1F;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleGhostButton_10), (void*)_stringLiteralDDC6D7FAC84DA6944C92524DBCE998CD945BFC1F);
		// [SerializeField] private string cycleColorButton = "CycleColor";
		__this->___cycleColorButton_11 = _stringLiteral962970581907DBD4C7F3B6D97EE0145B16ADC564;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cycleColorButton_11), (void*)_stringLiteral962970581907DBD4C7F3B6D97EE0145B16ADC564);
		// [SerializeField] private string singleColorButton = "ToggleSingleColor";
		__this->___singleColorButton_12 = _stringLiteral3136BECD7D9F25AEFC11500AB4BA46CE87EC2F6B;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleColorButton_12), (void*)_stringLiteral3136BECD7D9F25AEFC11500AB4BA46CE87EC2F6B);
		// private Color[] ghostColors = new Color[5]
		// {
		//     Color.red,
		//     Color.blue,
		//     Color.yellow,
		//     Color.gray,
		//     Color.green
		// };
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)5);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_4);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline(NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_8);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline(NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_10);
		__this->___ghostColors_16 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ghostColors_16), (void*)L_9);
		// private int colorIndex = 0;
		__this->___colorIndex_17 = 0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ActionCode.Demo.PlayerMotor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Reset_m79DE55B20384C82A0EA3468D2BAA3A1943E3A46E (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	{
		// SetupComponents();
		PlayerMotor_SetupComponents_m258BC1283E751670F5CF2E3F9799E57CDB565D61(__this, NULL);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Start_m97F985CC259C33CA430C25D8EBEA4D89281E339A (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	{
		// HashAnimatorParams();
		PlayerMotor_HashAnimatorParams_mB62C3746475F5385F72CA685CB493F03BF0E1959(__this, NULL);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Update_mD990BB51E55E3228D160C954559B5D6CC357619E (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (Time.timeScale < 0.1f) return;
		float L_0;
		L_0 = Time_get_timeScale_m99F3D47F45286D6DA73ADB2662B63451A632D413(NULL);
		V_0 = (bool)((((float)L_0) < ((float)(0.100000001f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (Time.timeScale < 0.1f) return;
		goto IL_001a;
	}

IL_0013:
	{
		// UpdateAnimator();
		PlayerMotor_UpdateAnimator_m376A6056F0E000D6A3D6157D1A3F65234212E036(__this, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_FixedUpdate_m1A517A53744EE7E2A7C2C118B3FF7B0EAB8BD771 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	{
		// UpdatePhysics();
		PlayerMotor_UpdatePhysics_mFFE69A6A51A27F2BBBDCE0604916C6E7CFEE80DA(__this, NULL);
		// crouching = 0f;
		__this->___crouching_25 = (0.0f);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::Move(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Move_m3015FAE90014BB76333D185AA2912C4E34D967CC (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, float ___horInput0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lastInput = horInput;
		float L_0 = ___horInput0;
		__this->___lastInput_17 = L_0;
		// if (lastInput * lastDirection < 0f) FlipHorizontally();
		float L_1 = __this->___lastInput_17;
		float L_2 = __this->___lastDirection_18;
		V_0 = (bool)((((float)((float)il2cpp_codegen_multiply(L_1, L_2))) < ((float)(0.0f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// if (lastInput * lastDirection < 0f) FlipHorizontally();
		PlayerMotor_FlipHorizontally_mF6F8536C463DB8E4F4E9805D1D03A1B9EBE734A6(__this, NULL);
	}

IL_0027:
	{
		// if (lastInput < 0f) lastDirection = -1f;
		float L_4 = __this->___lastInput_17;
		V_1 = (bool)((((float)L_4) < ((float)(0.0f)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// if (lastInput < 0f) lastDirection = -1f;
		__this->___lastDirection_18 = (-1.0f);
		goto IL_0061;
	}

IL_0045:
	{
		// else if (lastInput > 0f) lastDirection = 1f;
		float L_6 = __this->___lastInput_17;
		V_2 = (bool)((((float)L_6) > ((float)(0.0f)))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// else if (lastInput > 0f) lastDirection = 1f;
		__this->___lastDirection_18 = (1.0f);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Jump_m959DF0092B10EA258C6EE018BAFD8A037929C9FF (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (isGrounded)
		bool L_0 = __this->___isGrounded_26;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		// animator.SetTrigger(jumpId);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_13;
		int32_t L_3 = __this->___jumpId_22;
		NullCheck(L_2);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_2, L_3, NULL);
		// _rigidbody.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->____rigidbody_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline(NULL);
		float L_6 = __this->___jumpForce_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_5, L_6, NULL);
		NullCheck(L_4);
		Rigidbody2D_AddForce_mDD5CAE0137A42660C2D585B090D7E24496976E1B(L_4, L_7, 1, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Attack_mDB0FF5A11EFD79125974C0171443A4E189441A2F (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(Mathf.Abs(lastInput) < 0.1f) animator.SetTrigger(attackId);
		float L_0 = __this->___lastInput_17;
		float L_1;
		L_1 = fabsf(L_0);
		V_0 = (bool)((((float)L_1) < ((float)(0.100000001f)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if(Mathf.Abs(lastInput) < 0.1f) animator.SetTrigger(attackId);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_13;
		int32_t L_4 = __this->___attackId_23;
		NullCheck(L_3);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_3, L_4, NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::Crouch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_Crouch_m7C15E0356BC447F9171E066D7C44437EFAD124B6 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, float ___crounching0, const RuntimeMethod* method) 
{
	{
		// this.crouching = crounching;
		float L_0 = ___crounching0;
		__this->___crouching_25 = L_0;
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::SetupComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_SetupComponents_m258BC1283E751670F5CF2E3F9799E57CDB565D61 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_13), (void*)L_0);
		// _rigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->____rigidbody_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____rigidbody_14), (void*)L_1);
		// _collider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2;
		L_2 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->____collider_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_15), (void*)L_2);
		// _renderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3;
		L_3 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->____renderer_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____renderer_16), (void*)L_3);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::HashAnimatorParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_HashAnimatorParams_mB62C3746475F5385F72CA685CB493F03BF0E1959 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	{
		// hInputId = Animator.StringToHash(hInputParam);
		String_t* L_0 = __this->___hInputParam_4;
		int32_t L_1;
		L_1 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_0, NULL);
		__this->___hInputId_19 = L_1;
		// vSpeedId = Animator.StringToHash(vSpeedParam);
		String_t* L_2 = __this->___vSpeedParam_5;
		int32_t L_3;
		L_3 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_2, NULL);
		__this->___vSpeedId_20 = L_3;
		// crouchingId = Animator.StringToHash(crouchingParam);
		String_t* L_4 = __this->___crouchingParam_6;
		int32_t L_5;
		L_5 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_4, NULL);
		__this->___crouchingId_21 = L_5;
		// jumpId = Animator.StringToHash(jumpParam);
		String_t* L_6 = __this->___jumpParam_7;
		int32_t L_7;
		L_7 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_6, NULL);
		__this->___jumpId_22 = L_7;
		// attackId = Animator.StringToHash(attackParam);
		String_t* L_8 = __this->___attackParam_8;
		int32_t L_9;
		L_9 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_8, NULL);
		__this->___attackId_23 = L_9;
		// groundedId = Animator.StringToHash(groundedParam);
		String_t* L_10 = __this->___groundedParam_9;
		int32_t L_11;
		L_11 = Animator_StringToHash_mA0E3E79B6D3DFA05D6AEA12A7B5C93FEC40694E7(L_10, NULL);
		__this->___groundedId_24 = L_11;
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::UpdatePhysics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_UpdatePhysics_mFFE69A6A51A27F2BBBDCE0604916C6E7CFEE80DA (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// bool pushingAgainstWall = lastInput * lastDirection > 0 && IsForwardCollision();
		float L_0 = __this->___lastInput_17;
		float L_1 = __this->___lastDirection_18;
		if ((!(((float)((float)il2cpp_codegen_multiply(L_0, L_1))) > ((float)(0.0f)))))
		{
			goto IL_001d;
		}
	}
	{
		bool L_2;
		L_2 = PlayerMotor_IsForwardCollision_m7455B4D62790B9BFD2B4CF41DD7CCFB4DE167E74(__this, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_0 = (bool)G_B3_0;
		// isGrounded = _rigidbody.IsTouching(groundFilter);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3 = __this->____rigidbody_14;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14 L_4 = __this->___groundFilter_12;
		NullCheck(L_3);
		bool L_5;
		L_5 = Rigidbody2D_IsTouching_mA69870E78416F4DC0B381E5D862BEB5778FE6361(L_3, L_4, NULL);
		__this->___isGrounded_26 = L_5;
		// if (!pushingAgainstWall)
		bool L_6 = V_0;
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_007e;
		}
	}
	{
		// Vector3 horVelocity = Vector3.right * lastInput * speed * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_9 = __this->___lastInput_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_8, L_9, NULL);
		float L_11 = __this->___speed_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		V_2 = L_14;
		// transform.position += horVelocity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_17, L_18, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_19, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::UpdateAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_UpdateAnimator_m376A6056F0E000D6A3D6157D1A3F65234212E036 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	{
		// animator.SetFloat(crouchingId, crouching);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_13;
		int32_t L_1 = __this->___crouchingId_21;
		float L_2 = __this->___crouching_25;
		NullCheck(L_0);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_0, L_1, L_2, NULL);
		// animator.SetFloat(hInputId, Mathf.Abs(lastInput));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_13;
		int32_t L_4 = __this->___hInputId_19;
		float L_5 = __this->___lastInput_17;
		float L_6;
		L_6 = fabsf(L_5);
		NullCheck(L_3);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_3, L_4, L_6, NULL);
		// animator.SetFloat(vSpeedId, _rigidbody.velocity.y);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_13;
		int32_t L_8 = __this->___vSpeedId_20;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->____rigidbody_14;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_9, NULL);
		float L_11 = L_10.___y_1;
		NullCheck(L_7);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_7, L_8, L_11, NULL);
		// animator.SetBool(groundedId, isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___animator_13;
		int32_t L_13 = __this->___groundedId_24;
		bool L_14 = __this->___isGrounded_26;
		NullCheck(L_12);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_12, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::FlipHorizontally()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor_FlipHorizontally_mF6F8536C463DB8E4F4E9805D1D03A1B9EBE734A6 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	{
		// _renderer.flipX = !_renderer.flipX;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->____renderer_16;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->____renderer_16;
		NullCheck(L_1);
		bool L_2;
		L_2 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_1, NULL);
		NullCheck(L_0);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Boolean ActionCode.Demo.PlayerMotor::IsForwardCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerMotor_IsForwardCollision_m7455B4D62790B9BFD2B4CF41DD7CCFB4DE167E74 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t G_B3_0 = 0;
	{
		// Vector2 size = _collider.bounds.size;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->____collider_15;
		NullCheck(L_0);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_1;
		L_1 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_0, NULL);
		V_4 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_size_m0699A53A55A78B3201D7270D6F338DFA91B6FAD4((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_2, NULL);
		V_0 = L_3;
		// Vector3 direction = Vector3.right * lastDirection;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		float L_5 = __this->___lastDirection_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// Vector3 bottomPos = transform.position + direction * (size.x / 2f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_9, ((float)(L_11/(2.0f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_8, L_12, NULL);
		V_2 = L_13;
		// Vector3 topPos = bottomPos + Vector3.up * size.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_0;
		float L_17 = L_16.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_15, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_14, L_18, NULL);
		V_3 = L_19;
		// return
		//     Physics2D.Raycast(topPos, direction, SKIN, groundFilter.layerMask, 0f, 0f) ||
		//     Physics2D.Raycast(bottomPos, direction, SKIN, groundFilter.layerMask, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_22, NULL);
		float L_24 = __this->___SKIN_27;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14* L_25 = (&__this->___groundFilter_12);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_26 = L_25->___layerMask_6;
		int32_t L_27;
		L_27 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_28;
		L_28 = Physics2D_Raycast_m4F22AD6D93E283DCBFF1DF2F3B67988BFE092DAA(L_21, L_23, L_24, L_27, (0.0f), (0.0f), NULL);
		bool L_29;
		L_29 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_28, NULL);
		if (L_29)
		{
			goto IL_00d6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_32, NULL);
		float L_34 = __this->___SKIN_27;
		ContactFilter2D_t54A8515C326BF7DA16E5DE97EA7D3CD9B2F77F14* L_35 = (&__this->___groundFilter_12);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_36 = L_35->___layerMask_6;
		int32_t L_37;
		L_37 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_36, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_38;
		L_38 = Physics2D_Raycast_m4F22AD6D93E283DCBFF1DF2F3B67988BFE092DAA(L_31, L_33, L_34, L_37, (0.0f), (0.0f), NULL);
		bool L_39;
		L_39 = RaycastHit2D_op_Implicit_m768ECEE43BC378B51CB2304A9D547E7683CC3EE5(L_38, NULL);
		G_B3_0 = ((int32_t)(L_39));
		goto IL_00d7;
	}

IL_00d6:
	{
		G_B3_0 = 1;
	}

IL_00d7:
	{
		V_5 = (bool)G_B3_0;
		goto IL_00db;
	}

IL_00db:
	{
		// }
		bool L_40 = V_5;
		return L_40;
	}
}
// System.Void ActionCode.Demo.PlayerMotor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMotor__ctor_mE7A311A0EDAF1790E33570C92D4CA8F4F64CD871 (PlayerMotor_t29ACF89692710C1A2ADEBDA35DB49F2271627155* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02F4B5EA8FB857D0931F43619CD0BBE167AEFDB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB7575092C202BF2436CBDC677AF4DF758749FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6635F3B6159FBA54BC9CFF38613ECB296793232);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string hInputParam = "hInput";
		__this->___hInputParam_4 = _stringLiteralD6635F3B6159FBA54BC9CFF38613ECB296793232;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hInputParam_4), (void*)_stringLiteralD6635F3B6159FBA54BC9CFF38613ECB296793232);
		// [SerializeField] private string vSpeedParam = "vSpeed";
		__this->___vSpeedParam_5 = _stringLiteral0CB7575092C202BF2436CBDC677AF4DF758749FF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vSpeedParam_5), (void*)_stringLiteral0CB7575092C202BF2436CBDC677AF4DF758749FF);
		// [SerializeField] private string crouchingParam = "crouching";
		__this->___crouchingParam_6 = _stringLiteral02F4B5EA8FB857D0931F43619CD0BBE167AEFDB2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crouchingParam_6), (void*)_stringLiteral02F4B5EA8FB857D0931F43619CD0BBE167AEFDB2);
		// [SerializeField] private string jumpParam = "jump";
		__this->___jumpParam_7 = _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpParam_7), (void*)_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		// [SerializeField] private string attackParam = "attack";
		__this->___attackParam_8 = _stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackParam_8), (void*)_stringLiteral1387CA5E3672B0B088B1C7438E3CB9614FEF2011);
		// [SerializeField] private string groundedParam = "grounded";
		__this->___groundedParam_9 = _stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundedParam_9), (void*)_stringLiteral6E82A1DE8DD4EE10E1C3A213A1A62CF3EA79F602);
		// [Range(0f, 20f)] public float speed = 10f;
		__this->___speed_10 = (10.0f);
		// [Range(0f, 10f)] public float jumpForce = 5f;
		__this->___jumpForce_11 = (5.0f);
		// private float lastDirection = 1f;
		__this->___lastDirection_18 = (1.0f);
		// private bool isGrounded = false;
		__this->___isGrounded_26 = (bool)0;
		// private readonly float SKIN = 0.04F;
		__this->___SKIN_27 = (0.0399999991f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ActionCode.Demo.SizeEffector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_Awake_m22518B6FB840E85C976FA791B24AF173AF3B88FF (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) 
{
	{
		// _defaultScale = transform.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		__this->____defaultScale_5 = L_1;
		// }
		return;
	}
}
// System.Void ActionCode.Demo.SizeEffector::IncreaseSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_IncreaseSize_m7FB04224665CF50D7594ACC8EC303E6E482DFE1C (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (transform.localScale.x > MAX_SIZE)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		V_0 = (bool)((((float)L_2) > ((float)(2.79999995f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// transform.localScale = Vector3.one * MAX_SIZE;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, (2.79999995f), NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_6, NULL);
		// return;
		goto IL_006b;
	}

IL_003a:
	{
		// transform.localScale += Vector3.one * speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_9, L_14, NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_15, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.SizeEffector::DecreaseSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_DecreaseSize_m4D92AB31E2B64FA1F61BA1A8B4758234655D7C6C (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(transform.localScale.x < MIN_SIZE)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_0, NULL);
		float L_2 = L_1.___x_2;
		V_0 = (bool)((((float)L_2) < ((float)(0.699999988f)))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// transform.localScale = Vector3.one * MIN_SIZE;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_5, (0.699999988f), NULL);
		NullCheck(L_4);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_4, L_6, NULL);
		// return;
		goto IL_006b;
	}

IL_003a:
	{
		// transform.localScale -= Vector3.one * speed * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_9, L_14, NULL);
		NullCheck(L_8);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_8, L_15, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void ActionCode.Demo.SizeEffector::ResetSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector_ResetSize_m6CDC63E117C1404FC86B632ADF5D2847E4DBB7DC (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) 
{
	{
		// transform.localScale = _defaultScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->____defaultScale_5;
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ActionCode.Demo.SizeEffector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SizeEffector__ctor_m777651713F741D7311A492D84F9AD37174D60DC8 (SizeEffector_t4055F7C9FD72CC6614E65CB088FC63AB15F5F49B* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.1f, 5f)] public float speed = 1.2f;
		__this->___speed_4 = (1.20000005f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LayerLab.PanelControlSimpleCasual::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Start_m86233FCC1B575FA7944CBBC502AF731259E027B2 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_4 = NULL;
	{
		// textTitle = transform.GetComponentInChildren<TextMeshProUGUI>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1;
		L_1 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_0, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___textTitle_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textTitle_8), (void*)L_1);
		// buttonPrev.onClick.AddListener(Click_Prev);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___buttonPrev_11;
		NullCheck(L_2);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_3;
		L_3 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_2, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_3, L_4, NULL);
		// buttonNext.onClick.AddListener(Click_Next);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___buttonNext_12;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// foreach (Transform t in panelTransformLight)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransformLight_9;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_0 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0092:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_00a3;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_00a3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0088_1;
			}

IL_005b_1:
			{
				// foreach (Transform t in panelTransformLight)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panelLight.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_15 = __this->___panelLight_6;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_1;
				NullCheck(L_16);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
				L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
				NullCheck(L_15);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_15, L_17, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_1;
				NullCheck(L_18);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
				L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
				NullCheck(L_19);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
			}

IL_0088_1:
			{
				// foreach (Transform t in panelTransformLight)
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_005b_1;
				}
			}
			{
				goto IL_00a4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a4:
	{
		// foreach (Transform t in panelTransformDark)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___panelTransformDark_10;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_22, NULL);
		V_3 = L_23;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ed:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_24 = V_3;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_25 = V_2;
					if (!L_25)
					{
						goto IL_00fe;
					}
				}
				{
					RuntimeObject* L_26 = V_2;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_00fe:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e3_1;
			}

IL_00b3_1:
			{
				// foreach (Transform t in panelTransformDark)
				RuntimeObject* L_27 = V_3;
				NullCheck(L_27);
				RuntimeObject* L_28;
				L_28 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_27);
				V_4 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_28, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// panelDark.Add(t.gameObject);
				List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->___panelDark_7;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_4;
				NullCheck(L_30);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
				L_31 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_30, NULL);
				NullCheck(L_29);
				List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_29, L_31, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
				// t.gameObject.SetActive(false);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = V_4;
				NullCheck(L_32);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_32, NULL);
				NullCheck(L_33);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
			}

IL_00e3_1:
			{
				// foreach (Transform t in panelTransformDark)
				RuntimeObject* L_34 = V_3;
				NullCheck(L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_34);
				if (L_35)
				{
					goto IL_00b3_1;
				}
			}
			{
				goto IL_00ff;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ff:
	{
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_36 = __this->___panelLight_6;
		int32_t L_37 = __this->___page_4;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_36, L_37, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_39 = __this->___panelDark_7;
		int32_t L_40 = __this->___page_4;
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_39, L_40, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// isReady = true;
		__this->___isReady_5 = (bool)1;
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
		// SetMode();
		PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Update_m782E0DD30EA0DFF0F420BE90BEE9A95AFE36A5E9 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!isReady) return;
		bool L_0 = __this->___isReady_5;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!isReady) return;
		goto IL_003c;
	}

IL_0010:
	{
		// if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Click_Prev();
		PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B(__this, NULL);
		goto IL_003c;
	}

IL_0027:
	{
		// else if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		V_2 = L_4;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		// Click_Next();
		PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Click_Prev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Prev_m41BA7208814FB2AEDD1AE027F739B981A31CE78B (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (page <= 0 || !isReady) return;
		int32_t L_0 = __this->___page_4;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		bool L_1 = __this->___isReady_5;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if (page <= 0 || !isReady) return;
		goto IL_00eb;
	}

IL_001f:
	{
		// panelLight[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panelLight_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// panelDark[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panelDark_7;
		int32_t L_7 = __this->___page_4;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_6, L_7, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// page -= 1;
		int32_t L_9 = __this->___page_4;
		__this->___page_4 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___panelLight_6;
		int32_t L_11 = __this->___page_4;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->___panelDark_7;
		int32_t L_14 = __this->___page_4;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_13, L_14, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
		// if (!isDarakMode)
		bool L_16 = __this->___isDarakMode_13;
		V_1 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00c0;
		}
	}
	{
		// textTitle.text = panelLight[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_18 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_19 = __this->___panelLight_6;
		int32_t L_20 = __this->___page_4;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21;
		L_21 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_19, L_20, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_21);
		String_t* L_22;
		L_22 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_21, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_22);
		goto IL_00e4;
	}

IL_00c0:
	{
		// textTitle.text = panelDark[page].name;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = __this->___panelDark_7;
		int32_t L_25 = __this->___page_4;
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_24, L_25, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_26, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_23, L_27);
	}

IL_00e4:
	{
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
	}

IL_00eb:
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Click_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Next_m1E26CD4C061A66119819EBB7A8016CAC5EB6EB68 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (page >= panelLight.Count - 1) return;
		int32_t L_0 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = __this->___panelLight_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_1, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// if (page >= panelLight.Count - 1) return;
		goto IL_0094;
	}

IL_001f:
	{
		// panelLight[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___panelLight_6;
		int32_t L_5 = __this->___page_4;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_4, L_5, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// panelDark[page].SetActive(false);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___panelDark_7;
		int32_t L_8 = __this->___page_4;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_7, L_8, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// page += 1;
		int32_t L_10 = __this->___page_4;
		__this->___page_4 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// panelLight[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___panelLight_6;
		int32_t L_12 = __this->___page_4;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_11, L_12, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// panelDark[page].SetActive(true);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_14 = __this->___panelDark_7;
		int32_t L_15 = __this->___page_4;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_14, L_15, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::SetArrowActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetArrowActive_m92E6155F9B105F78CCE6DC447A9A9C335F480D9D (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// buttonPrev.gameObject.SetActive(page > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___buttonPrev_11;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		int32_t L_2 = __this->___page_4;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0), NULL);
		// buttonNext.gameObject.SetActive(page < panelLight.Count - 1);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___buttonNext_12;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		int32_t L_5 = __this->___page_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = __this->___panelLight_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_6, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)((((int32_t)L_5) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1))))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::CheckControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!isDarakMode)
		bool L_0 = __this->___isDarakMode_13;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// textTitle.text = panelLight[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->___panelLight_6;
		int32_t L_4 = __this->___page_4;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_3, L_4, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_6, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_7);
		goto IL_0076;
	}

IL_0043:
	{
		// textTitle.text = panelDark[page].name.Replace("_", " ");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___textTitle_8;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = __this->___panelDark_7;
		int32_t L_10 = __this->___page_4;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_9, L_10, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_12, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_13);
	}

IL_0076:
	{
		// SetArrowActive();
		PanelControlSimpleCasual_SetArrowActive_m92E6155F9B105F78CCE6DC447A9A9C335F480D9D(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::Click_Mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_Click_Mode_m864F4379E65B8D1B4BEB85781B0B3621986A65AA (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	{
		// isDarakMode = !isDarakMode;
		bool L_0 = __this->___isDarakMode_13;
		__this->___isDarakMode_13 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// SetMode();
		PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A(__this, NULL);
		// CheckControl();
		PanelControlSimpleCasual_CheckControl_m6406A716F24216DD4528665CD38B47DBF67FFF8A(__this, NULL);
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::SetMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual_SetMode_mB304024FF33A720C9E4DA29B8559AF758E1E653A (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!isDarakMode)
		bool L_0 = __this->___isDarakMode_13;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		// panelTransformLight.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___panelTransformLight_9;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// panelTransformDark.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___panelTransformDark_10;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		goto IL_005c;
	}

IL_0036:
	{
		// panelTransformLight.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___panelTransformLight_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// panelTransformDark.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___panelTransformDark_10;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelControlSimpleCasual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelControlSimpleCasual__ctor_mFD96C8F0EE87F4A427C9D8C9347EFA0DA62733F6 (PanelControlSimpleCasual_t2B9B0C17B2B3175818E58EEE9E1575750F45C7AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> panelLight = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panelLight_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panelLight_6), (void*)L_0);
		// [SerializeField] private List<GameObject> panelDark = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___panelDark_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___panelDark_7), (void*)L_1);
		// private bool isDarakMode = false;
		__this->___isDarakMode_13 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LayerLab.PanelSimpleCasual::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSimpleCasual_OnEnable_mC15E5EC57421500E3B5DEB3AA31097A61B021A48 (PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		V_0 = 0;
		goto IL_0018;
	}

IL_0005:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(true);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelSimpleCasual::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSimpleCasual_OnDisable_mD511788676A09D146D1EBF90AC02E68E36A11A28 (PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		V_0 = 0;
		goto IL_0018;
	}

IL_0005:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___otherPanels_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < otherPanels.Length; i++) otherPanels[i].SetActive(false);
		int32_t L_5 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___otherPanels_4;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LayerLab.PanelSimpleCasual::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanelSimpleCasual__ctor_mB372C009B0DCBE583366F308CADF83AFCB813B8A (PanelSimpleCasual_tD74B0A2E31BA150EDF9D19473D51954F3B8B9775* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_mF4D6DB00DEA7D055940165B85FFE1CEF6F7CD3AA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_mC62F535A52768B992F144E443D201F749C5DE932_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_m336EB73DD4A5B11B7F405CF4BC7F37A466FB4FF7_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}

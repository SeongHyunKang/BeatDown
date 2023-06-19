#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.LengthChangedEventArgs>
struct EventHandler_1_t6E4B478A749EEA680E9695DDC015AB0E9B3D16DE;
// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.TimeChangedEventArgs>
struct EventHandler_1_t060669721C7B70CBA910A254267BBBB59B713A24;
// System.Func`2<Melanchall.DryWetMidi.Interaction.NoteData,Melanchall.DryWetMidi.Interaction.Note>
struct Func_2_t37AD7D248518B33F8387CDA6A881FB75BF9DB385;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note>
struct ICollection_1_t5403F27038B28B406D16D8F2C0AF90D7F9900C08;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Interaction.ITempoMapValuesCache>
struct List_1_t8C8B038EAFC549EEBF7F82A96890A2260448DE43;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Note>
struct List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.Tempo>
struct ValueLine_1_t55442BFBFC88E06CD833D330BD1006C8A6A80B49;
// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.TimeSignature>
struct ValueLine_1_tB642FABAB3C7BB390C926454A66A52845168828A;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
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
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Lane[]
struct LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Note[]
struct NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76;
// Melanchall.DryWetMidi.Interaction.Note[]
struct NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// Melanchall.DryWetMidi.Common.SevenBitNumber[]
struct SevenBitNumberU5BU5D_tB7AE0AE7A1A87BBB3AD3CB77D44F6670DA16CC7C;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
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
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BGMManager
struct BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F;
// BackgroundLoop
struct BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A;
// BackgroundScroller
struct BackgroundScroller_t2DE2F4B6A8E0022ACCB48E6CC4792BB3E9808AFB;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// Melanchall.DryWetMidi.Core.ChunkTypesCollection
struct ChunkTypesCollection_t8854C8D0C91473FD90587FA13999B5BEBA4DB3C5;
// Melanchall.DryWetMidi.Core.ChunksCollection
struct ChunksCollection_tD0F6B56952C2B8A353E4F24E713C15F35DDD1E47;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Melanchall.DryWetMidi.Core.DecodeTextCallback
struct DecodeTextCallback_tFCFEB1833B3400518469D80A9E444C41AFBAB1AD;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Melanchall.DryWetMidi.Core.EventTypesCollection
struct EventTypesCollection_t586FF9C8BC65208AAB30BFEB655D5323F19FC67C;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Lane
struct Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Melanchall.DryWetMidi.Interaction.MetricTimeSpan
struct MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9;
// Melanchall.DryWetMidi.Core.MidiFile
struct MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Note
struct Note_tA2285A184DB020998838A4973465183177E99DE1;
// Melanchall.DryWetMidi.Interaction.Note
struct Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD;
// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings
struct NoteDetectionSettings_t75FE01B9786A80AA56E311C38C6685AC89F4950D;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7;
// PlatformSpawner
struct PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08;
// PlayerAnimation
struct PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3;
// PlayerAnimationNew
struct PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// Melanchall.DryWetMidi.Core.ReaderSettings
struct ReaderSettings_t4489BAB2F1EAD4891E2F849F65CAB2F8169A3278;
// Melanchall.DryWetMidi.Core.ReadingSettings
struct ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreDisplay
struct ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B;
// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39;
// ScrollingObject
struct ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SettingsMenu
struct SettingsMenu_t509117608BBFDCA2FBE0FFBB75E4121164E92EBA;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SongManager
struct SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// SwipeMenu
struct SwipeMenu_t06431B3A6592C9AC701DA667B141A32DAF3D68AB;
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
// Melanchall.DryWetMidi.Interaction.TempoMap
struct TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Melanchall.DryWetMidi.Core.TimeDivision
struct TimeDivision_t0D6AF80C187CEA28E3A38F1A0E48F6A2C70E407B;
// Melanchall.DryWetMidi.Interaction.TimedEvent
struct TimedEvent_t369EBD58993E6C4CF77249544089A37C7953475B;
// Melanchall.DryWetMidi.Interaction.TimedEventDetectionSettings
struct TimedEventDetectionSettings_tE29E5F3CEBC44C63D28F904C4E750C58D0B7964C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// Melanchall.DryWetMidi.Core.UnknownChannelEventCallback
struct UnknownChannelEventCallback_t9E827CFF3ECEBAC327D37AE118034A8189122965;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VolumeSaveController
struct VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PlayerAnimation/<JumpCoroutine>d__17
struct U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SongManager/<ReadFromWebsite>d__14
struct U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5403F27038B28B406D16D8F2C0AF90D7F9900C08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18;
IL2CPP_EXTERN_C String_t* _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
IL2CPP_EXTERN_C String_t* _stringLiteral12EA0C6AE04150ED2C21A6D43AC4D0ECA9AE5C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral138036CF00DC7AA638E8C59DE658B2B707E5188E;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral2602033F3FB1AFC0B39748C6EFF8947CCC0FB539;
IL2CPP_EXTERN_C String_t* _stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207;
IL2CPP_EXTERN_C String_t* _stringLiteral28D39098172467059F02372C4A6F08C47866995B;
IL2CPP_EXTERN_C String_t* _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1A6E4CEFF65BE6A1D9E90EBE606845607965C1;
IL2CPP_EXTERN_C String_t* _stringLiteral4AE89FEEEB51501CB1CC5D1C0A68B0CDCB71312A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91;
IL2CPP_EXTERN_C String_t* _stringLiteral562DF94FE022C3EDB334BE693F96C1F437F4CDC2;
IL2CPP_EXTERN_C String_t* _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7B5058A935046849B2F1B8D279BA1332E8A54599;
IL2CPP_EXTERN_C String_t* _stringLiteral8225AECE91A62067ECDECFF1108DF51474F57E19;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral93EC98FC1D2D77CA4620AB0465A4C03C6A6C633B;
IL2CPP_EXTERN_C String_t* _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7;
IL2CPP_EXTERN_C String_t* _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298;
IL2CPP_EXTERN_C String_t* _stringLiteralB28922D4CBB047742711F74389D967A03809C34C;
IL2CPP_EXTERN_C String_t* _stringLiteralB91D10FC5CA4A6BBB256ED283B891D8DDA45911C;
IL2CPP_EXTERN_C String_t* _stringLiteralBCF0ED813C341816D730826DA5E6B02C30A25F7C;
IL2CPP_EXTERN_C String_t* _stringLiteralC008E503687BA2A627379D4E257787AEA3506830;
IL2CPP_EXTERN_C String_t* _stringLiteralC123978EE5BDDE00D993F19944BEA3D43008E7E8;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A;
IL2CPP_EXTERN_C String_t* _stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75;
IL2CPP_EXTERN_C String_t* _stringLiteralE4AF956E9BBB62C3D94BAA5F17FD6C3BEB6FBD86;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralF390DD64EAB82A4E98D1DC0425A52061FB794ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF5EDE39CDEAD277EE55B50BFF1C40D68F9A2F12F;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lane_InputButtonClicked_m5AAD57DBE0C161F997AD710AA477FAF1A43172A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m67CC0EF229DD2ABE1CD7CA2CF9B2A351098C435E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m379D19DE534D41F25E2A894D28BBBF4CB1AB7837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m39EA964CE85827ED829C14D54979E42B2F9D33BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerAnimationNew_DashButtonClicked_m01A75894CDD20F6B75AA80006B2CEDB7FB984986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerAnimationNew_JumpButtonClicked_m365D526EBAD30932C5CAC3D8CB4D560C19FFC68E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeConverter_ConvertTo_TisMetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9_m2E1D9BFB0AFA2EB461FFB4F11627C84E1E6DB276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_mA0E54BC6FD91EF53C4E0C49F496869B338758487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_Reset_m1502770C068C8883251FB171A4DEB516C9E19C7B_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C;
struct NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Note>
struct List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings
struct NoteDetectionSettings_t75FE01B9786A80AA56E311C38C6685AC89F4950D  : public RuntimeObject
{
	// Melanchall.DryWetMidi.Interaction.NoteStartDetectionPolicy Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::_noteStartDetectionPolicy
	int32_t ____noteStartDetectionPolicy_0;
	// Melanchall.DryWetMidi.Interaction.NoteSearchContext Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::_noteSearchContext
	int32_t ____noteSearchContext_1;
	// Melanchall.DryWetMidi.Interaction.TimedEventDetectionSettings Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::<TimedEventDetectionSettings>k__BackingField
	TimedEventDetectionSettings_tE29E5F3CEBC44C63D28F904C4E750C58D0B7964C* ___U3CTimedEventDetectionSettingsU3Ek__BackingField_2;
	// System.Func`2<Melanchall.DryWetMidi.Interaction.NoteData,Melanchall.DryWetMidi.Interaction.Note> Melanchall.DryWetMidi.Interaction.NoteDetectionSettings::<Constructor>k__BackingField
	Func_2_t37AD7D248518B33F8387CDA6A881FB75BF9DB385* ___U3CConstructorU3Ek__BackingField_3;
};

// Melanchall.DryWetMidi.Core.ReadingSettings
struct ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F  : public RuntimeObject
{
	// Melanchall.DryWetMidi.Core.UnexpectedTrackChunksCountPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unexpectedTrackChunksCountPolicy
	int32_t ____unexpectedTrackChunksCountPolicy_0;
	// Melanchall.DryWetMidi.Core.ExtraTrackChunkPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_extraTrackChunkPolicy
	uint8_t ____extraTrackChunkPolicy_1;
	// Melanchall.DryWetMidi.Core.UnknownChunkIdPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unknownChunkIdPolicy
	uint8_t ____unknownChunkIdPolicy_2;
	// Melanchall.DryWetMidi.Core.MissedEndOfTrackPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_missedEndOfTrackPolicy
	uint8_t ____missedEndOfTrackPolicy_3;
	// Melanchall.DryWetMidi.Core.SilentNoteOnPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_silentNoteOnPolicy
	uint8_t ____silentNoteOnPolicy_4;
	// Melanchall.DryWetMidi.Core.InvalidChunkSizePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidChunkSizePolicy
	uint8_t ____invalidChunkSizePolicy_5;
	// Melanchall.DryWetMidi.Core.UnknownFileFormatPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unknownFileFormatPolicy
	int32_t ____unknownFileFormatPolicy_6;
	// Melanchall.DryWetMidi.Core.UnknownChannelEventPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_unknownChannelEventPolicy
	int32_t ____unknownChannelEventPolicy_7;
	// Melanchall.DryWetMidi.Core.InvalidChannelEventParameterValuePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidChannelEventParameterValuePolicy
	uint8_t ____invalidChannelEventParameterValuePolicy_8;
	// Melanchall.DryWetMidi.Core.InvalidMetaEventParameterValuePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidMetaEventParameterValuePolicy
	int32_t ____invalidMetaEventParameterValuePolicy_9;
	// Melanchall.DryWetMidi.Core.InvalidSystemCommonEventParameterValuePolicy Melanchall.DryWetMidi.Core.ReadingSettings::_invalidSystemCommonEventParameterValuePolicy
	int32_t ____invalidSystemCommonEventParameterValuePolicy_10;
	// Melanchall.DryWetMidi.Core.NotEnoughBytesPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_notEnoughBytesPolicy
	int32_t ____notEnoughBytesPolicy_11;
	// Melanchall.DryWetMidi.Core.NoHeaderChunkPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_noHeaderChunkPolicy
	int32_t ____noHeaderChunkPolicy_12;
	// Melanchall.DryWetMidi.Core.ZeroLengthDataPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_zeroLengthDataPolicy
	int32_t ____zeroLengthDataPolicy_13;
	// Melanchall.DryWetMidi.Core.EndOfTrackStoringPolicy Melanchall.DryWetMidi.Core.ReadingSettings::_endOfTrackStoringPolicy
	int32_t ____endOfTrackStoringPolicy_14;
	// Melanchall.DryWetMidi.Core.UnknownChannelEventCallback Melanchall.DryWetMidi.Core.ReadingSettings::<UnknownChannelEventCallback>k__BackingField
	UnknownChannelEventCallback_t9E827CFF3ECEBAC327D37AE118034A8189122965* ___U3CUnknownChannelEventCallbackU3Ek__BackingField_15;
	// Melanchall.DryWetMidi.Core.ChunkTypesCollection Melanchall.DryWetMidi.Core.ReadingSettings::<CustomChunkTypes>k__BackingField
	ChunkTypesCollection_t8854C8D0C91473FD90587FA13999B5BEBA4DB3C5* ___U3CCustomChunkTypesU3Ek__BackingField_16;
	// Melanchall.DryWetMidi.Core.EventTypesCollection Melanchall.DryWetMidi.Core.ReadingSettings::<CustomMetaEventTypes>k__BackingField
	EventTypesCollection_t586FF9C8BC65208AAB30BFEB655D5323F19FC67C* ___U3CCustomMetaEventTypesU3Ek__BackingField_17;
	// System.Text.Encoding Melanchall.DryWetMidi.Core.ReadingSettings::<TextEncoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CTextEncodingU3Ek__BackingField_18;
	// Melanchall.DryWetMidi.Core.DecodeTextCallback Melanchall.DryWetMidi.Core.ReadingSettings::<DecodeTextCallback>k__BackingField
	DecodeTextCallback_tFCFEB1833B3400518469D80A9E444C41AFBAB1AD* ___U3CDecodeTextCallbackU3Ek__BackingField_19;
	// Melanchall.DryWetMidi.Core.ReaderSettings Melanchall.DryWetMidi.Core.ReadingSettings::<ReaderSettings>k__BackingField
	ReaderSettings_t4489BAB2F1EAD4891E2F849F65CAB2F8169A3278* ___U3CReaderSettingsU3Ek__BackingField_20;
};

// StaticGameData
struct StaticGameData_t6F3DA932212798A0CF9EB8B4C69578EC608152C2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Melanchall.DryWetMidi.Interaction.TempoMap
struct TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2  : public RuntimeObject
{
	// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.TimeSignature> Melanchall.DryWetMidi.Interaction.TempoMap::_timeSignatureLine
	ValueLine_1_tB642FABAB3C7BB390C926454A66A52845168828A* ____timeSignatureLine_1;
	// Melanchall.DryWetMidi.Interaction.ValueLine`1<Melanchall.DryWetMidi.Interaction.Tempo> Melanchall.DryWetMidi.Interaction.TempoMap::_tempoLine
	ValueLine_1_t55442BFBFC88E06CD833D330BD1006C8A6A80B49* ____tempoLine_2;
	// System.Collections.Generic.List`1<Melanchall.DryWetMidi.Interaction.ITempoMapValuesCache> Melanchall.DryWetMidi.Interaction.TempoMap::_valuesCaches
	List_1_t8C8B038EAFC549EEBF7F82A96890A2260448DE43* ____valuesCaches_3;
	// System.Boolean Melanchall.DryWetMidi.Interaction.TempoMap::_isTempoMapReady
	bool ____isTempoMapReady_4;
	// Melanchall.DryWetMidi.Core.TimeDivision Melanchall.DryWetMidi.Interaction.TempoMap::<TimeDivision>k__BackingField
	TimeDivision_t0D6AF80C187CEA28E3A38F1A0E48F6A2C70E407B* ___U3CTimeDivisionU3Ek__BackingField_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// PlayerAnimation/<JumpCoroutine>d__17
struct U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089  : public RuntimeObject
{
	// System.Int32 PlayerAnimation/<JumpCoroutine>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PlayerAnimation/<JumpCoroutine>d__17::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PlayerAnimation PlayerAnimation/<JumpCoroutine>d__17::<>4__this
	PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* ___U3CU3E4__this_2;
	// System.Single PlayerAnimation/<JumpCoroutine>d__17::<jumpTargetHeight>5__2
	float ___U3CjumpTargetHeightU3E5__2_3;
};

// SongManager/<ReadFromWebsite>d__14
struct U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C  : public RuntimeObject
{
	// System.Int32 SongManager/<ReadFromWebsite>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SongManager/<ReadFromWebsite>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SongManager SongManager/<ReadFromWebsite>d__14::<>4__this
	SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest SongManager/<ReadFromWebsite>d__14::<www>5__2
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwwwU3E5__2_3;
};

// System.Nullable`1<System.UInt16>
struct Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint16_t ___value_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
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

// UnityEngine.Resolution
struct Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 
{
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Melanchall.DryWetMidi.Common.SevenBitNumber
struct SevenBitNumber_tF771C5FB9E0AECAE9FBEE6ECFBF4FD364BBD5D7A 
{
	// System.Byte Melanchall.DryWetMidi.Common.SevenBitNumber::_value
	uint8_t ____value_5;
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

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
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

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// Melanchall.DryWetMidi.Interaction.MetricTimeSpan
struct MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9  : public RuntimeObject
{
	// System.TimeSpan Melanchall.DryWetMidi.Interaction.MetricTimeSpan::_timeSpan
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____timeSpan_4;
};

// Melanchall.DryWetMidi.Core.MidiFile
struct MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84  : public RuntimeObject
{
	// System.Nullable`1<System.UInt16> Melanchall.DryWetMidi.Core.MidiFile::_originalFormat
	Nullable_1_t70F850DEE49B62D1B877D3C32F9E0EC724ADC4D9 ____originalFormat_0;
	// Melanchall.DryWetMidi.Core.TimeDivision Melanchall.DryWetMidi.Core.MidiFile::<TimeDivision>k__BackingField
	TimeDivision_t0D6AF80C187CEA28E3A38F1A0E48F6A2C70E407B* ___U3CTimeDivisionU3Ek__BackingField_1;
	// Melanchall.DryWetMidi.Core.ChunksCollection Melanchall.DryWetMidi.Core.MidiFile::<Chunks>k__BackingField
	ChunksCollection_tD0F6B56952C2B8A353E4F24E713C15F35DDD1E47* ___U3CChunksU3Ek__BackingField_2;
};

// Melanchall.DryWetMidi.Interaction.Note
struct Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD  : public RuntimeObject
{
	// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.TimeChangedEventArgs> Melanchall.DryWetMidi.Interaction.Note::TimeChanged
	EventHandler_1_t060669721C7B70CBA910A254267BBBB59B713A24* ___TimeChanged_2;
	// System.EventHandler`1<Melanchall.DryWetMidi.Interaction.LengthChangedEventArgs> Melanchall.DryWetMidi.Interaction.Note::LengthChanged
	EventHandler_1_t6E4B478A749EEA680E9695DDC015AB0E9B3D16DE* ___LengthChanged_3;
	// Melanchall.DryWetMidi.Interaction.TimedEvent Melanchall.DryWetMidi.Interaction.Note::<TimedNoteOnEvent>k__BackingField
	TimedEvent_t369EBD58993E6C4CF77249544089A37C7953475B* ___U3CTimedNoteOnEventU3Ek__BackingField_4;
	// Melanchall.DryWetMidi.Interaction.TimedEvent Melanchall.DryWetMidi.Interaction.Note::<TimedNoteOffEvent>k__BackingField
	TimedEvent_t369EBD58993E6C4CF77249544089A37C7953475B* ___U3CTimedNoteOffEventU3Ek__BackingField_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BGMManager
struct BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip[] BGMManager::musicClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___musicClips_4;
	// UnityEngine.AudioSource BGMManager::audioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audioSource_5;
	// System.Int32 BGMManager::currentClipIndex
	int32_t ___currentClipIndex_6;
};

// BackgroundLoop
struct BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BackgroundLoop::width
	float ___width_4;
};

// BackgroundScroller
struct BackgroundScroller_t2DE2F4B6A8E0022ACCB48E6CC4792BB3E9808AFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BackgroundScroller::scrollSpeed
	float ___scrollSpeed_4;
	// System.Single BackgroundScroller::offset
	float ___offset_5;
	// UnityEngine.Material BackgroundScroller::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_6;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::isGameover
	bool ___isGameover_5;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_6;
	// UnityEngine.GameObject GameManager::gameoverUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameoverUI_7;
	// System.Single GameManager::distance
	float ___distance_8;
	// System.Single GameManager::startTime
	float ___startTime_9;
};

// Lane
struct Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Melanchall.DryWetMidi.MusicTheory.NoteName Lane::noteRestriction
	int32_t ___noteRestriction_4;
	// UnityEngine.GameObject Lane::notePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___notePrefab_5;
	// System.Collections.Generic.List`1<Note> Lane::notes
	List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* ___notes_6;
	// System.Collections.Generic.List`1<System.Double> Lane::timeStamps
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* ___timeStamps_7;
	// System.Int32 Lane::spawnIndex
	int32_t ___spawnIndex_8;
	// System.Int32 Lane::inputIndex
	int32_t ___inputIndex_9;
	// UnityEngine.UI.Button Lane::inputButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___inputButton_10;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Note
struct Note_tA2285A184DB020998838A4973465183177E99DE1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Double Note::timeInstantiated
	double ___timeInstantiated_4;
	// System.Single Note::assignedTime
	float ___assignedTime_5;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PauseMenu::pauseMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseMenu_4;
	// System.Boolean PauseMenu::isGamePaused
	bool ___isGamePaused_5;
};

// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Platform::obstacles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___obstacles_4;
	// System.Boolean Platform::stepped
	bool ___stepped_5;
};

// PlatformSpawner
struct PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlatformSpawner::platformPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platformPrefab_4;
	// System.Int32 PlatformSpawner::count
	int32_t ___count_5;
	// System.Single PlatformSpawner::timeBetSpawnMin
	float ___timeBetSpawnMin_6;
	// System.Single PlatformSpawner::timeBetSpawnMax
	float ___timeBetSpawnMax_7;
	// System.Single PlatformSpawner::timeBetSpawn
	float ___timeBetSpawn_8;
	// System.Single PlatformSpawner::yMin
	float ___yMin_9;
	// System.Single PlatformSpawner::yMax
	float ___yMax_10;
	// System.Single PlatformSpawner::xPos
	float ___xPos_11;
	// UnityEngine.GameObject[] PlatformSpawner::platforms
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___platforms_12;
	// System.Int32 PlatformSpawner::currentIndex
	int32_t ___currentIndex_13;
	// UnityEngine.Vector2 PlatformSpawner::poolPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___poolPosition_14;
	// System.Single PlatformSpawner::lastSpawnTime
	float ___lastSpawnTime_15;
};

// PlayerAnimation
struct PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator PlayerAnimation::playerAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___playerAnimator_4;
	// System.Single PlayerAnimation::jumpDistance
	float ___jumpDistance_5;
	// System.Single PlayerAnimation::jumpHeight
	float ___jumpHeight_6;
	// System.Single PlayerAnimation::jumpHeightMultiplier
	float ___jumpHeightMultiplier_7;
	// System.Boolean PlayerAnimation::isJumping
	bool ___isJumping_8;
	// UnityEngine.Coroutine PlayerAnimation::jumpCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___jumpCoroutine_9;
	// UnityEngine.Vector3 PlayerAnimation::startPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPosition_10;
	// UnityEngine.Vector3 PlayerAnimation::jumpStartPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___jumpStartPosition_11;
	// System.Int32 PlayerAnimation::jumpCount
	int32_t ___jumpCount_12;
};

// PlayerAnimationNew
struct PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerAnimationNew::timeSinceLastInput
	float ___timeSinceLastInput_4;
	// System.Boolean PlayerAnimationNew::isJumping
	bool ___isJumping_5;
	// System.Boolean PlayerAnimationNew::isDashing
	bool ___isDashing_6;
	// UnityEngine.Animator PlayerAnimationNew::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.UI.Button PlayerAnimationNew::dashButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___dashButton_8;
	// UnityEngine.UI.Button PlayerAnimationNew::jumpButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___jumpButton_9;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioClip PlayerController::deathClip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___deathClip_4;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_5;
	// System.Int32 PlayerController::jumpCount
	int32_t ___jumpCount_6;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_7;
	// System.Boolean PlayerController::isDead
	bool ___isDead_8;
	// UnityEngine.Rigidbody2D PlayerController::playerRigidbody
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___playerRigidbody_9;
	// UnityEngine.Animator PlayerController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_10;
	// UnityEngine.AudioSource PlayerController::playerAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___playerAudio_11;
};

// ScoreDisplay
struct ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI ScoreDisplay::TotalHits
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TotalHits_4;
	// TMPro.TextMeshProUGUI ScoreDisplay::TotalMiss
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TotalMiss_5;
	// TMPro.TextMeshProUGUI ScoreDisplay::HighestCombo
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___HighestCombo_6;
	// TMPro.TextMeshProUGUI ScoreDisplay::Rank
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___Rank_7;
};

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource ScoreManager::hitSFX
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___hitSFX_5;
	// UnityEngine.AudioSource ScoreManager::missSFX
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___missSFX_6;
	// TMPro.TextMeshProUGUI ScoreManager::scoreText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___scoreText_7;
	// System.Collections.Generic.List`1<System.Int32> ScoreManager::RankScores
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___RankScores_8;
};

// ScrollingObject
struct ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ScrollingObject::speed
	float ___speed_4;
};

// SettingsMenu
struct SettingsMenu_t509117608BBFDCA2FBE0FFBB75E4121164E92EBA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Resolution[] SettingsMenu::resolutions
	ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* ___resolutions_4;
	// UnityEngine.UI.Dropdown SettingsMenu::resolutionDropdown
	Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* ___resolutionDropdown_5;
	// System.Int32 SettingsMenu::currentResolutionIndex
	int32_t ___currentResolutionIndex_6;
};

// SongManager
struct SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource SongManager::audiosource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___audiosource_5;
	// Lane[] SongManager::lanes
	LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* ___lanes_6;
	// System.Single SongManager::songDelayInSeconds
	float ___songDelayInSeconds_7;
	// System.Double SongManager::marginOfError
	double ___marginOfError_8;
	// System.Int32 SongManager::inputDelayInMilliseconds
	int32_t ___inputDelayInMilliseconds_9;
	// System.String SongManager::fileLocation
	String_t* ___fileLocation_10;
	// System.Single SongManager::noteTime
	float ___noteTime_11;
	// System.Single SongManager::noteSpawnX
	float ___noteSpawnX_12;
	// System.Single SongManager::noteTapX
	float ___noteTapX_13;
};

// SwipeMenu
struct SwipeMenu_t06431B3A6592C9AC701DA667B141A32DAF3D68AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VolumeSaveController
struct VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider VolumeSaveController::volumeSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___volumeSlider_4;
	// TMPro.TextMeshProUGUI VolumeSaveController::volumeTextUI
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___volumeTextUI_5;
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
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

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t53255477D0A9C6980AB48693A520EFBC94DFFB96* ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_t8A008B010A742724CFC93576D6976E474BB13059* ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t89B39292AD45371F7FDCB295AAE956D33588BC6E* ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t830EC096236A3CEC7189DFA6E0B2E74C5C97780B* ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
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
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_267;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_268;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_269;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_270;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_271;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_272;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_273;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_274;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_275;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_276;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_277;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_278;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_279;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_280;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_282;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_283;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_284;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_285;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<Note>
struct List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NoteU5BU5D_t6E30CF1012D0B8AFFCD945FA24D47ADFE00BBB76* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Note>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings

// Melanchall.DryWetMidi.Interaction.NoteDetectionSettings

// Melanchall.DryWetMidi.Core.ReadingSettings

// Melanchall.DryWetMidi.Core.ReadingSettings

// StaticGameData
struct StaticGameData_t6F3DA932212798A0CF9EB8B4C69578EC608152C2_StaticFields
{
	// System.Int32 StaticGameData::TotalHits
	int32_t ___TotalHits_0;
	// System.Int32 StaticGameData::TotalMiss
	int32_t ___TotalMiss_1;
	// System.Int32 StaticGameData::HighestCombo
	int32_t ___HighestCombo_2;
	// System.Int32 StaticGameData::TotalScore
	int32_t ___TotalScore_3;
	// System.Int32 StaticGameData::Rank
	int32_t ___Rank_4;
};

// StaticGameData

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Melanchall.DryWetMidi.Interaction.TempoMap
struct TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2_StaticFields
{
	// Melanchall.DryWetMidi.Interaction.TempoMap Melanchall.DryWetMidi.Interaction.TempoMap::Default
	TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2* ___Default_0;
};

// Melanchall.DryWetMidi.Interaction.TempoMap

// PlayerAnimation/<JumpCoroutine>d__17

// PlayerAnimation/<JumpCoroutine>d__17

// SongManager/<ReadFromWebsite>d__14

// SongManager/<ReadFromWebsite>d__14

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Resolution

// UnityEngine.Resolution

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.ContactPoint2D

// UnityEngine.ContactPoint2D

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.IO.MemoryStream

// System.IO.MemoryStream

// Melanchall.DryWetMidi.Interaction.MetricTimeSpan
struct MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9_StaticFields
{
	// System.String Melanchall.DryWetMidi.Interaction.MetricTimeSpan::TotalMicrosecondsIsOutOfRangeMessage
	String_t* ___TotalMicrosecondsIsOutOfRangeMessage_3;
};

// Melanchall.DryWetMidi.Interaction.MetricTimeSpan

// Melanchall.DryWetMidi.Core.MidiFile

// Melanchall.DryWetMidi.Core.MidiFile

// Melanchall.DryWetMidi.Interaction.Note
struct Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD_StaticFields
{
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Interaction.Note::DefaultVelocity
	SevenBitNumber_tF771C5FB9E0AECAE9FBEE6ECFBF4FD364BBD5D7A ___DefaultVelocity_0;
	// Melanchall.DryWetMidi.Common.SevenBitNumber Melanchall.DryWetMidi.Interaction.Note::DefaultOffVelocity
	SevenBitNumber_tF771C5FB9E0AECAE9FBEE6ECFBF4FD364BBD5D7A ___DefaultOffVelocity_1;
};

// Melanchall.DryWetMidi.Interaction.Note

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.UI.Button/ButtonClickedEvent

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BGMManager

// BGMManager

// BackgroundLoop

// BackgroundLoop

// BackgroundScroller

// BackgroundScroller

// UnityEngine.BoxCollider2D

// UnityEngine.BoxCollider2D

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// GameManager

// Lane

// Lane

// MainMenu

// MainMenu

// Note

// Note

// PauseMenu

// PauseMenu

// Platform

// Platform

// PlatformSpawner

// PlatformSpawner

// PlayerAnimation

// PlayerAnimation

// PlayerAnimationNew

// PlayerAnimationNew

// PlayerController

// PlayerController

// ScoreDisplay

// ScoreDisplay

// ScoreManager
struct ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields
{
	// ScoreManager ScoreManager::Instance
	ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* ___Instance_4;
	// System.Int32 ScoreManager::totalHits
	int32_t ___totalHits_9;
	// System.Int32 ScoreManager::totalMiss
	int32_t ___totalMiss_10;
	// System.Int32 ScoreManager::comboScore
	int32_t ___comboScore_11;
	// System.Int32 ScoreManager::highestCombo
	int32_t ___highestCombo_12;
	// System.String ScoreManager::Rank
	String_t* ___Rank_13;
};

// ScoreManager

// ScrollingObject

// ScrollingObject

// SettingsMenu

// SettingsMenu

// SongManager
struct SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields
{
	// SongManager SongManager::Instance
	SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* ___Instance_4;
	// Melanchall.DryWetMidi.Core.MidiFile SongManager::midiFile
	MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* ___midiFile_14;
};

// SongManager

// SwipeMenu

// SwipeMenu

// VolumeSaveController

// VolumeSaveController

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// UnityEngine.UI.Dropdown
struct Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89_StaticFields
{
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t68DC820D58A3ABBAE844326B15A7F14D48FAE55F* ___s_NoOptionData_35;
};

// UnityEngine.UI.Dropdown

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_304;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_305;
};

// TMPro.TextMeshProUGUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 m_Items[1];

	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Melanchall.DryWetMidi.Interaction.Note[]
struct NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416  : public RuntimeArray
{
	ALIGN_FIELD (8) Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* m_Items[1];

	inline Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A  : public RuntimeArray
{
	ALIGN_FIELD (8) Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 m_Items[1];

	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 value)
	{
		m_Items[index] = value;
	}
};
// Lane[]
struct LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C  : public RuntimeArray
{
	ALIGN_FIELD (8) Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* m_Items[1];

	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
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
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// TTimeSpan Melanchall.DryWetMidi.Interaction.TimeConverter::ConvertTo<System.Object>(System.Int64,Melanchall.DryWetMidi.Interaction.TempoMap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeConverter_ConvertTo_TisRuntimeObject_mE6319B59F586088B39FC2077C6D0996FF1FE1D0F_gshared (int64_t ___0_time, TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2* ___1_tempoMap, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void BackgroundLoop::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Reposition_mC430454492B2C4FBD0F71148118C3573C59F42CA (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Collision2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::OnPlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerDead_mE274881CC06883C79CD6813804EEE5C3FBAAAFC1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void BGMManager::PlayNextMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_PlayNextMusic_m5C4749645305D3900DD8965CB4F878EE84060A16 (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___0_call, const RuntimeMethod* method) ;
// Melanchall.DryWetMidi.MusicTheory.NoteName Melanchall.DryWetMidi.Interaction.Note::get_NoteName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Note_get_NoteName_m1B261BE84890DFD9DB1CBAD6AD0479AB0DE42C44 (Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* __this, const RuntimeMethod* method) ;
// System.Int64 Melanchall.DryWetMidi.Interaction.Note::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Note_get_Time_mCC7EE4A77262F94E7B41F07B721145341812EC8E (Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* __this, const RuntimeMethod* method) ;
// Melanchall.DryWetMidi.Interaction.TempoMap Melanchall.DryWetMidi.Interaction.TempoMapManagingUtilities::GetTempoMap(Melanchall.DryWetMidi.Core.MidiFile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2* TempoMapManagingUtilities_GetTempoMap_m2A6844A1179B15FC7BD8FDBEB78982DB6BE2A7D8 (MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* ___0_file, const RuntimeMethod* method) ;
// TTimeSpan Melanchall.DryWetMidi.Interaction.TimeConverter::ConvertTo<Melanchall.DryWetMidi.Interaction.MetricTimeSpan>(System.Int64,Melanchall.DryWetMidi.Interaction.TempoMap)
inline MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* TimeConverter_ConvertTo_TisMetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9_m2E1D9BFB0AFA2EB461FFB4F11627C84E1E6DB276 (int64_t ___0_time, TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2* ___1_tempoMap, const RuntimeMethod* method)
{
	return ((  MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* (*) (int64_t, TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2*, const RuntimeMethod*))TimeConverter_ConvertTo_TisRuntimeObject_mE6319B59F586088B39FC2077C6D0996FF1FE1D0F_gshared)(___0_time, ___1_tempoMap, method);
}
// System.Int32 Melanchall.DryWetMidi.Interaction.MetricTimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTimeSpan_get_Minutes_m7563E76AD22B1A95127E06FDA15E2F174C2234A0 (MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* __this, const RuntimeMethod* method) ;
// System.Int32 Melanchall.DryWetMidi.Interaction.MetricTimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTimeSpan_get_Seconds_m2E5DE52AED6CC5F2F74A5C27FBA462995E0FBBC2 (MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* __this, const RuntimeMethod* method) ;
// System.Int32 Melanchall.DryWetMidi.Interaction.MetricTimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MetricTimeSpan_get_Milliseconds_mD2D0E8CEE62E72ECAC5AE624C34873F57A763F7D (MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
inline void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
inline int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline)(__this, method);
}
// System.Double SongManager::GetAudioSourceTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1 (const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
inline double List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  double (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, int32_t, const RuntimeMethod*))List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_gshared)(__this, ___0_index, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<Note>()
inline Note_tA2285A184DB020998838A4973465183177E99DE1* GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Note_tA2285A184DB020998838A4973465183177E99DE1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Note>::Add(T)
inline void List_1_Add_m67CC0EF229DD2ABE1CD7CA2CF9B2A351098C435E_inline (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* __this, Note_tA2285A184DB020998838A4973465183177E99DE1* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221*, Note_tA2285A184DB020998838A4973465183177E99DE1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Lane::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Miss_mE966BF79F03DD69C1990D773117A0FF922BF5674 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Lane::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Hit_m19EB5F25BA1C682AB6ABDA59D61D95210383CAD1 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Note>::get_Item(System.Int32)
inline Note_tA2285A184DB020998838A4973465183177E99DE1* List_1_get_Item_m39EA964CE85827ED829C14D54979E42B2F9D33BE (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Note_tA2285A184DB020998838A4973465183177E99DE1* (*) (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void ScoreManager::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Hit_m17DC5B91E121C27AE2768A4F7E06F073B4894062 (const RuntimeMethod* method) ;
// System.Void ScoreManager::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Miss_mE6D942D17AC4C49BD5AF381FEA69F88966226E10 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Note>::.ctor()
inline void List_1__ctor_m379D19DE534D41F25E2A894D28BBBF4CB1AB7837 (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single SongManager::get_noteDespawnX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SongManager_get_noteDespawnX_m954695FCCAEA8DAF973D9E0354D0984288762DEE (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void PauseMenu::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ResumeGame_m8C22F921DCAA4122C7FF4FCDB87A5041962493A0 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PauseMenu::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseGame_m5F9F76E8D0822B61CEE60DD44562CA95076BAEEF (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void PauseMenu::PauseButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseButtonClicked_mE3799EE888468E5A6C8F9D34BE014A4D999632C3 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::StopJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_StopJump_m868CCD6A4B5CC824E19A988F76489978CA63F7B7 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::ReturnToGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_ReturnToGround_mF27D8ABA49B6F5A34E72D74AEFA310EBA78FCE13 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::PlayAttackAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_PlayAttackAnimation_m39540B12A4A5CA5C504F8EA1B3C13314A3E1A540 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::StopAllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_StopAllAnimations_m1AE4B09E7E5D8F44028E34CE4007FF1D9E0F7B25 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::StartJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_StartJump_mBF6338EDE1D92ACA82A92494AEBD6E4AC7E38846 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimation::PlayJumpAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_PlayJumpAnimation_m7E7261D841726BCBB0C5C82A39EE74377A08F854 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PlayerAnimation::JumpCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAnimation_JumpCoroutine_m51874F21C2B9A3B9DB081F65BBD9C01C2F69F352 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void PlayerAnimation/<JumpCoroutine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpCoroutineU3Ed__17__ctor_mE0BAE6FE132F463F3B0CDE7FBBF200A6E08D5E91 (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimationNew::ResetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_ResetAnimation_m023BB42419560498E28E42BA34439615855A392C (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimationNew::MoveCharacterToBottomLane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_MoveCharacterToBottomLane_m8BA01EA701C47916245BD13E209B95FC7B1F34A1 (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) ;
// System.Void PlayerAnimationNew::MoveCharacterToTopLane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_MoveCharacterToTopLane_m4102954295C274770B7881BBC518B0E6A4AD0BEB (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// UnityEngine.Resolution[] UnityEngine.Screen::get_resolutions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* Screen_get_resolutions_mC4E187F4D1D5055AD5551C6B8B5FD0460E63A824 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::ClearOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24 (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B (Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::AddOptions(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839 (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_options, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Dropdown::RefreshShownValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_RefreshShownValue_mA112A95E8653859FC2B6C2D0CC89660D36E8970E (Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Screen::get_fullScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Screen_get_fullScreen_m9B3B4F9FB4B6FD6E1AEF626736C4462A2FD7407C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100 (int32_t ___0_width, int32_t ___1_height, bool ___2_fullscreen, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::SetQualityLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_SetQualityLevel_mCAE1F9B15496825C5DCBDDE430A3650B967BB138 (int32_t ___0_index, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SongManager::ReadFromWebsite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongManager_ReadFromWebsite_m4356BBCBDD155C46FE7347B12F7470B8C8105981 (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) ;
// System.Void SongManager::ReadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_ReadFromFile_m6CEA2114484CDD3290DB43DE6BA116697898364F (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) ;
// System.Void SongManager/<ReadFromWebsite>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14__ctor_m27853A74CE538FE059BA3362D84225CA901664AB (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// Melanchall.DryWetMidi.Core.MidiFile Melanchall.DryWetMidi.Core.MidiFile::Read(System.String,Melanchall.DryWetMidi.Core.ReadingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* MidiFile_Read_m067EDA91ED1E76DEC56E44E80DDB9622256560E6 (String_t* ___0_filePath, ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F* ___1_settings, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void SongManager::GetDataFromMidi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_GetDataFromMidi_mD408189890DEE65235775E407BEEDEDCE9DD9BCB (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note> Melanchall.DryWetMidi.Interaction.NotesManagingUtilities::GetNotes(Melanchall.DryWetMidi.Core.MidiFile,Melanchall.DryWetMidi.Interaction.NoteDetectionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NotesManagingUtilities_GetNotes_m6F200E408740F1FA4DDE160D81DA9F5CD5294DA8 (MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* ___0_file, NoteDetectionSettings_t75FE01B9786A80AA56E311C38C6685AC89F4950D* ___1_settings, const RuntimeMethod* method) ;
// System.Void Lane::SetTimeStamps(Melanchall.DryWetMidi.Interaction.Note[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_SetTimeStamps_mFA4CA9FE6C8AF54F826BF168DFFF4906B399DCF9 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioSource::get_timeSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// System.Void SongManager/<ReadFromWebsite>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_m44A6D77E4BB87E35BCB1C157E41CFFCE4CE6D7C8 (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) ;
// System.Void SongManager/<ReadFromWebsite>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_System_IDisposable_Dispose_m8EF86B8D71C22C1CE640B2F2AFA997E1CB2C765A (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// Melanchall.DryWetMidi.Core.MidiFile Melanchall.DryWetMidi.Core.MidiFile::Read(System.IO.Stream,Melanchall.DryWetMidi.Core.ReadingSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* MidiFile_Read_m573B9FDFC615FED73A00544C9A55E23ABB157659 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F* ___1_settings, const RuntimeMethod* method) ;
// System.Void VolumeSaveController::LoadValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeSaveController_LoadValues_mA44FACE96C6DF58799EB94E11F46E8C314CEC73E (VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// System.Void BackgroundLoop::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Awake_m655D177F1A4D63D62CFBFEC88802664EEDFA16F4 (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* V_0 = NULL;
	{
		// BoxCollider2D backgroundCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		V_0 = L_0;
		// width = backgroundCollider.size.x;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_1, NULL);
		float L_3 = L_2.___x_0;
		__this->___width_4 = L_3;
		// }
		return;
	}
}
// System.Void BackgroundLoop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Update_m32927DA0A3295DC46D19EDD36D40AEBE193F5C5C (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	{
		// if(transform.position.x <= -width)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = __this->___width_4;
		if ((!(((float)L_2) <= ((float)((-L_3))))))
		{
			goto IL_001f;
		}
	}
	{
		// Reposition();
		BackgroundLoop_Reposition_mC430454492B2C4FBD0F71148118C3573C59F42CA(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void BackgroundLoop::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Reposition_mC430454492B2C4FBD0F71148118C3573C59F42CA (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 offset = new Vector2(width * 8f, 0);
		float L_0 = __this->___width_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_0, (8.0f))), (0.0f), NULL);
		// transform.position = (Vector2)transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void BackgroundLoop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop__ctor_m567F0EAF3454EE50F5344E6C0541554BC9C845A6 (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28D39098172467059F02372C4A6F08C47866995B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		return;
	}

IL_0014:
	{
		// Debug.LogWarning("?? ? ? ??? ?? ???? ?????!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral28D39098172467059F02372C4A6F08C47866995B, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// startTime = Time.time;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___startTime_9 = L_0;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCF0ED813C341816D730826DA5E6B02C30A25F7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if ((isGameover && Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || isGameover && Input.GetMouseButtonDown(0))
		bool L_0 = __this->___isGameover_5;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}

IL_0020:
	{
		bool L_4 = __this->___isGameover_5;
		if (!L_4)
		{
			goto IL_0036;
		}
	}
	{
		bool L_5;
		L_5 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_5)
		{
			goto IL_0036;
		}
	}

IL_0030:
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_0036:
	{
		// if (!isGameover)
		bool L_6 = __this->___isGameover_5;
		if (L_6)
		{
			goto IL_0090;
		}
	}
	{
		// float currentTime = Time.time - startTime;
		float L_7;
		L_7 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_8 = __this->___startTime_9;
		V_1 = ((float)il2cpp_codegen_subtract(L_7, L_8));
		// distance = currentTime;
		float L_9 = V_1;
		__this->___distance_8 = L_9;
		// float distanceWithDecimal = Mathf.Floor(distance * 100) / 100;
		float L_10 = __this->___distance_8;
		float L_11;
		L_11 = floorf(((float)il2cpp_codegen_multiply(L_10, (100.0f))));
		V_2 = ((float)(L_11/(100.0f)));
		// scoreText.text = "Distance : " + distanceWithDecimal.ToString("F2") + "m";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___scoreText_6;
		String_t* L_13;
		L_13 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_2), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBCF0ED813C341816D730826DA5E6B02C30A25F7C, L_13, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnPlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerDead_mE274881CC06883C79CD6813804EEE5C3FBAAAFC1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// isGameover = true;
		__this->___isGameover_5 = (bool)1;
		// gameoverUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameoverUI_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Platform::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnEnable_mBA7B999AD0EE440E1EB3CD213B2479D52684150A (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// stepped = false;
		__this->___stepped_5 = (bool)0;
		// for (int i = 0; i < obstacles.Length; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_000b:
	{
		// if (Random.Range(0, 3) == 0)
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 3, NULL);
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// obstacles[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___obstacles_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_0032;
	}

IL_0024:
	{
		// obstacles[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___obstacles_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_0032:
	{
		// for (int i = 0; i < obstacles.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0036:
	{
		// for (int i = 0; i < obstacles.Length; i++)
		int32_t L_10 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___obstacles_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Platform::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnCollisionEnter2D_m055BD01394A4EAB2DC0CA6B1016956AA4AA986E0 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.collider.CompareTag("Player") && !stepped)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_1;
		L_1 = Collision2D_get_collider_m90FA98F6619E9F1E2EFAE8132EDB6ECA1A2C4F37(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		bool L_3 = __this->___stepped_5;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		// stepped = true;
		__this->___stepped_5 = (bool)1;
		// float distance = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m7B49FC4AD80BC236383C1A82204EC91E11369498 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PlatformSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSpawner_Start_m63A5983FA20B863B6B416DCEB803EFE4E3445EA0 (PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// platforms = new GameObject[count];
		int32_t L_0 = __this->___count_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___platforms_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platforms_12), (void*)L_1);
		// for (int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_0015:
	{
		// platforms[i] = Instantiate(platformPrefab, poolPosition, Quaternion.identity);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___platforms_12;
		int32_t L_3 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___platformPrefab_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___poolPosition_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_4, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_8);
		// platforms[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___platforms_12;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// for (int i = 0; i < count; i++)
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < count; i++)
		int32_t L_14 = V_0;
		int32_t L_15 = __this->___count_5;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0015;
		}
	}
	{
		// lastSpawnTime = 0f;
		__this->___lastSpawnTime_15 = (0.0f);
		// timeBetSpawn = 0f;
		__this->___timeBetSpawn_8 = (0.0f);
		// }
		return;
	}
}
// System.Void PlatformSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSpawner_Update_m189C18859ABFBD2C21577EC6DF9FF82FF834B87B (PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if (GameManager.instance.isGameover)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___isGameover_5;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if (Time.time >= lastSpawnTime + timeBetSpawn)
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___lastSpawnTime_15;
		float L_4 = __this->___timeBetSpawn_8;
		if ((!(((float)L_2) >= ((float)((float)il2cpp_codegen_add(L_3, L_4))))))
		{
			goto IL_00b6;
		}
	}
	{
		// lastSpawnTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSpawnTime_15 = L_5;
		// timeBetSpawn = Random.Range(timeBetSpawnMin, timeBetSpawnMax);
		float L_6 = __this->___timeBetSpawnMin_6;
		float L_7 = __this->___timeBetSpawnMax_7;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_6, L_7, NULL);
		__this->___timeBetSpawn_8 = L_8;
		// float yPos = Random.Range(yMin, yMax);
		float L_9 = __this->___yMin_9;
		float L_10 = __this->___yMax_10;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_9, L_10, NULL);
		V_0 = L_11;
		// platforms[currentIndex].transform.position = new Vector2(xPos, yPos);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___platforms_12;
		int32_t L_13 = __this->___currentIndex_13;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = __this->___xPos_11;
		float L_18 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), L_17, L_18, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_19, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_20, NULL);
		// platforms[currentIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___platforms_12;
		int32_t L_22 = __this->___currentIndex_13;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
		// currentIndex++;
		int32_t L_25 = __this->___currentIndex_13;
		__this->___currentIndex_13 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		// if (currentIndex >= count)
		int32_t L_26 = __this->___currentIndex_13;
		int32_t L_27 = __this->___count_5;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_00b6;
		}
	}
	{
		// currentIndex = 0;
		__this->___currentIndex_13 = 0;
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void PlatformSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSpawner__ctor_m0A48A7C9FA24A5BCD033D09E70CF713DA275A985 (PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08* __this, const RuntimeMethod* method) 
{
	{
		// public int count = 3;
		__this->___count_5 = 3;
		// public float timeBetSpawnMin = 1.25f;
		__this->___timeBetSpawnMin_6 = (1.25f);
		// public float timeBetSpawnMax = 2.25f;
		__this->___timeBetSpawnMax_7 = (2.25f);
		// public float yMin = -3.5f;
		__this->___yMin_9 = (-3.5f);
		// public float yMax = 1.5f;
		__this->___yMax_10 = (1.5f);
		// private float xPos = 20f;
		__this->___xPos_11 = (20.0f);
		// private Vector2 poolPosition = new Vector2(0, -25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (-25.0f), /*hidden argument*/NULL);
		__this->___poolPosition_14 = L_0;
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
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___playerRigidbody_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerRigidbody_9), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_10), (void*)L_1);
		// playerAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2;
		L_2 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___playerAudio_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerAudio_11), (void*)L_2);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isDead) return;
		bool L_0 = __this->___isDead_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isDead) return;
		return;
	}

IL_0009:
	{
		// if ((Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began) || Input.GetMouseButtonDown(0))
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_2;
		L_2 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}

IL_0021:
	{
		bool L_4;
		L_4 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_4)
		{
			goto IL_007b;
		}
	}

IL_0029:
	{
		// if (jumpCount < 2)
		int32_t L_5 = __this->___jumpCount_6;
		if ((((int32_t)L_5) >= ((int32_t)2)))
		{
			goto IL_00ba;
		}
	}
	{
		// jumpCount++;
		int32_t L_6 = __this->___jumpCount_6;
		__this->___jumpCount_6 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// playerRigidbody.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___playerRigidbody_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_7);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_7, L_8, NULL);
		// playerRigidbody.AddForce(new Vector2(0, jumpForce));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_9 = __this->___playerRigidbody_9;
		float L_10 = __this->___jumpForce_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_11), (0.0f), L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_9, L_11, NULL);
		// playerAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = __this->___playerAudio_11;
		NullCheck(L_12);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		goto IL_00ba;
	}

IL_007b:
	{
		// else if (Input.GetMouseButtonUp(0) && playerRigidbody.velocity.y > 0)
		bool L_13;
		L_13 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_13)
		{
			goto IL_00ba;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_14 = __this->___playerRigidbody_9;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_14, NULL);
		float L_16 = L_15.___y_1;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00ba;
		}
	}
	{
		// playerRigidbody.velocity = playerRigidbody.velocity * 0.5f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17 = __this->___playerRigidbody_9;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = __this->___playerRigidbody_9;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_19, (0.5f), NULL);
		NullCheck(L_17);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_17, L_20, NULL);
	}

IL_00ba:
	{
		// animator.SetBool("isGrounded", isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_10;
		bool L_22 = __this->___isGrounded_7;
		NullCheck(L_21);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_21, _stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75, L_22, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("isDead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_10;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteralAE8900DC91B51B8520DDF29118082DF79022F298, NULL);
		// playerAudio.clip = deathClip;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___playerAudio_11;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___deathClip_4;
		NullCheck(L_1);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_1, L_2, NULL);
		// playerAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___playerAudio_11;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// playerRigidbody.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___playerRigidbody_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_4);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// isDead = true;
		__this->___isDead_8 = (bool)1;
		// GameManager.instance.OnPlayerDead();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_6);
		GameManager_OnPlayerDead_mE274881CC06883C79CD6813804EEE5C3FBAAAFC1(L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter2D_mB82BB8D400DC3E0E6B7117AE1A94E72E99CF53FB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Dead") && !isDead)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = __this->___isDead_8;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// Die();
		PlayerController_Die_m05D5887BD76E979C3DA3DB2D5E9032D30763BB2D(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionEnter2D_m28C67E4361403BA9990C1E6D9526F78362591667 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// if (collision.contacts[0].normal.y > 0.7f)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_1;
		L_1 = Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68(L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_3 = L_2.___y_1;
		if ((!(((float)L_3) > ((float)(0.699999988f)))))
		{
			goto IL_002b;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_7 = (bool)1;
		// jumpCount = 0;
		__this->___jumpCount_6 = 0;
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnCollisionExit2D_m72AC145E780FFE87067C59A4173C7C172F749FA7 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// isGrounded = false;
		__this->___isGrounded_7 = (bool)0;
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// public float jumpForce = 700f;
		__this->___jumpForce_5 = (700.0f);
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
// System.Void ScrollingObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject_Update_m8B3A5C50D8EE990922F425DE1B663E730835B1A9 (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!GameManager.instance.isGameover)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___isGameover_5;
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		// transform.Translate(Vector3.left * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_4 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_2, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ScrollingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject__ctor_m31AF77F42F4734ECB23AD9DF9C68925E81880365 (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_4 = (10.0f);
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
// System.Void BackgroundScroller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller_Start_m42D7C1972E082354B240CC4AC91A8F2C2B62FF75 (BackgroundScroller_t2DE2F4B6A8E0022ACCB48E6CC4792BB3E9808AFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->___mat_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void BackgroundScroller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller_Update_m464912BE6AE3F670A6C40C06659DB4D8800A248F (BackgroundScroller_t2DE2F4B6A8E0022ACCB48E6CC4792BB3E9808AFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// offset += (Time.deltaTime * scrollSpeed) / 10f;
		float L_0 = __this->___offset_5;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->___scrollSpeed_4;
		__this->___offset_5 = ((float)il2cpp_codegen_add(L_0, ((float)(((float)il2cpp_codegen_multiply(L_1, L_2))/(10.0f)))));
		// mat.SetTextureOffset("_MainTex", new Vector2(offset, 0));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = __this->___mat_6;
		float L_4 = __this->___offset_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_4, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Material_SetTextureOffset_m40F3FCE32535625DDF26C0C073D37968117FBFE1(L_3, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, L_5, NULL);
		// }
		return;
	}
}
// System.Void BackgroundScroller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundScroller__ctor_mD6572248BE8C8F0AA207DEC5232A842169F858AF (BackgroundScroller_t2DE2F4B6A8E0022ACCB48E6CC4792BB3E9808AFB* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0f, 1f)] public float scrollSpeed = 0.5f;
		__this->___scrollSpeed_4 = (0.5f);
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
// System.Void BGMManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_Awake_m499BD49D3763936E96B9199E1450F33D8BE452DB (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___audioSource_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___audioSource_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void BGMManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_Start_mB444319FB8E8080140CAF1E0F61645533EE0421A (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
		// currentClipIndex = Random.Range(0, musicClips.Length);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = __this->___musicClips_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		__this->___currentClipIndex_6 = L_1;
		// audioSource.clip = musicClips[currentClipIndex];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_5;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->___musicClips_4;
		int32_t L_4 = __this->___currentClipIndex_6;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_2, L_6, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___audioSource_5;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// }
		return;
	}
}
// System.Void BGMManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_Update_mF4F38F55E4BB5B9DB7702D05DE4B98389462A7B5 (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
		// if (!audioSource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audioSource_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// PlayNextMusic();
		BGMManager_PlayNextMusic_m5C4749645305D3900DD8965CB4F878EE84060A16(__this, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void BGMManager::PlayNextMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager_PlayNextMusic_m5C4749645305D3900DD8965CB4F878EE84060A16 (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
		// currentClipIndex = (currentClipIndex + 1) % musicClips.Length;
		int32_t L_0 = __this->___currentClipIndex_6;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = __this->___musicClips_4;
		NullCheck(L_1);
		__this->___currentClipIndex_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		// audioSource.clip = musicClips[currentClipIndex];
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___audioSource_5;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = __this->___musicClips_4;
		int32_t L_4 = __this->___currentClipIndex_6;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_2, L_6, NULL);
		// audioSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___audioSource_5;
		NullCheck(L_7);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_7, NULL);
		// }
		return;
	}
}
// System.Void BGMManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BGMManager__ctor_mFD9B18C39DDD18A07FA0D4CDBAB8A9D17A68FDFF (BGMManager_tAC12D03592C5AEFC175199DBA4598C8F672EBC1F* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Lane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Start_mA8C213F98D9FB67318E8CF6CA67925FABCC9D0B9 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lane_InputButtonClicked_m5AAD57DBE0C161F997AD710AA477FAF1A43172A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inputButton.onClick.AddListener(InputButtonClicked);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___inputButton_10;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)Lane_InputButtonClicked_m5AAD57DBE0C161F997AD710AA477FAF1A43172A9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lane::SetTimeStamps(Melanchall.DryWetMidi.Interaction.Note[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_SetTimeStamps_mFA4CA9FE6C8AF54F826BF168DFFF4906B399DCF9 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* ___0_array, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeConverter_ConvertTo_TisMetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9_m2E1D9BFB0AFA2EB461FFB4F11627C84E1E6DB276_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* V_0 = NULL;
	int32_t V_1 = 0;
	Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* V_2 = NULL;
	MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* V_3 = NULL;
	{
		// foreach (var note in array)
		NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* L_0 = ___0_array;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0068;
	}

IL_0006:
	{
		// foreach (var note in array)
		NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (note.NoteName == noteRestriction)
		Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Note_get_NoteName_m1B261BE84890DFD9DB1CBAD6AD0479AB0DE42C44(L_5, NULL);
		int32_t L_7 = __this->___noteRestriction_4;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0064;
		}
	}
	{
		// var metricTimeSpan = TimeConverter.ConvertTo<MetricTimeSpan>(note.Time, SongManager.midiFile.GetTempoMap());
		Note_tCA7A19EF96CEEAAD8FF2949E7466A52B8BB2D8CD* L_8 = V_2;
		NullCheck(L_8);
		int64_t L_9;
		L_9 = Note_get_Time_mCC7EE4A77262F94E7B41F07B721145341812EC8E(L_8, NULL);
		MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* L_10 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14;
		TempoMap_t943512BE83E5E70E63DC95142773AD3D675AF0A2* L_11;
		L_11 = TempoMapManagingUtilities_GetTempoMap_m2A6844A1179B15FC7BD8FDBEB78982DB6BE2A7D8(L_10, NULL);
		MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* L_12;
		L_12 = TimeConverter_ConvertTo_TisMetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9_m2E1D9BFB0AFA2EB461FFB4F11627C84E1E6DB276(L_9, L_11, TimeConverter_ConvertTo_TisMetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9_m2E1D9BFB0AFA2EB461FFB4F11627C84E1E6DB276_RuntimeMethod_var);
		V_3 = L_12;
		// timeStamps.Add((double)metricTimeSpan.Minutes * 60f + metricTimeSpan.Seconds + (double)metricTimeSpan.Milliseconds / 1000f);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_13 = __this->___timeStamps_7;
		MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = MetricTimeSpan_get_Minutes_m7563E76AD22B1A95127E06FDA15E2F174C2234A0(L_14, NULL);
		MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = MetricTimeSpan_get_Seconds_m2E5DE52AED6CC5F2F74A5C27FBA462995E0FBBC2(L_16, NULL);
		MetricTimeSpan_t491FA133C4ED03471BAF2B620501F2D1321D37A9* L_18 = V_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = MetricTimeSpan_get_Milliseconds_mD2D0E8CEE62E72ECAC5AE624C34873F57A763F7D(L_18, NULL);
		NullCheck(L_13);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_13, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_15), (60.0))), ((double)L_17))), ((double)(((double)L_19)/(1000.0))))), List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
	}

IL_0064:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0068:
	{
		// foreach (var note in array)
		int32_t L_21 = V_1;
		NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0006;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Lane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Update_m78C77718DB223E7F6C8FF164ACD1399FCDF9AB01 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m67CC0EF229DD2ABE1CD7CA2CF9B2A351098C435E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB28922D4CBB047742711F74389D967A03809C34C);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// if (spawnIndex < timeStamps.Count)
		int32_t L_0 = __this->___spawnIndex_8;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_1 = __this->___timeStamps_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_1, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0085;
		}
	}
	{
		// if (SongManager.GetAudioSourceTime() >= timeStamps[spawnIndex] - SongManager.Instance.noteTime)
		double L_3;
		L_3 = SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1(NULL);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_4 = __this->___timeStamps_7;
		int32_t L_5 = __this->___spawnIndex_8;
		NullCheck(L_4);
		double L_6;
		L_6 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_4, L_5, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_7 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_7);
		float L_8 = L_7->___noteTime_11;
		if ((!(((double)L_3) >= ((double)((double)il2cpp_codegen_subtract(L_6, ((double)L_8)))))))
		{
			goto IL_0085;
		}
	}
	{
		// var note = Instantiate(notePrefab, transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___notePrefab_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_11;
		// notes.Add(note.GetComponent<Note>());
		List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* L_12 = __this->___notes_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_0;
		NullCheck(L_13);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_14;
		L_14 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_13, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_Add_m67CC0EF229DD2ABE1CD7CA2CF9B2A351098C435E_inline(L_12, L_14, List_1_Add_m67CC0EF229DD2ABE1CD7CA2CF9B2A351098C435E_RuntimeMethod_var);
		// note.GetComponent<Note>().assignedTime = (float)timeStamps[spawnIndex];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_16;
		L_16 = GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA(L_15, GameObject_GetComponent_TisNote_tA2285A184DB020998838A4973465183177E99DE1_mDD2E118CAA3FE934C978D576E9CCFDD090158AAA_RuntimeMethod_var);
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_17 = __this->___timeStamps_7;
		int32_t L_18 = __this->___spawnIndex_8;
		NullCheck(L_17);
		double L_19;
		L_19 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_17, L_18, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		NullCheck(L_16);
		L_16->___assignedTime_5 = ((float)L_19);
		// spawnIndex++;
		int32_t L_20 = __this->___spawnIndex_8;
		__this->___spawnIndex_8 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0085:
	{
		// if (inputIndex < timeStamps.Count)
		int32_t L_21 = __this->___inputIndex_9;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_22 = __this->___timeStamps_7;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_22, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		if ((((int32_t)L_21) >= ((int32_t)L_23)))
		{
			goto IL_0103;
		}
	}
	{
		// double timeStamp = timeStamps[inputIndex];
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_24 = __this->___timeStamps_7;
		int32_t L_25 = __this->___inputIndex_9;
		NullCheck(L_24);
		double L_26;
		L_26 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_24, L_25, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		// double marginOfError = SongManager.Instance.marginOfError;
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_27 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_27);
		double L_28 = L_27->___marginOfError_8;
		V_1 = L_28;
		// double audioTime = SongManager.GetAudioSourceTime() - (SongManager.Instance.inputDelayInMilliseconds / 1000.0);
		double L_29;
		L_29 = SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1(NULL);
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_30 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_30);
		int32_t L_31 = L_30->___inputDelayInMilliseconds_9;
		V_2 = ((double)il2cpp_codegen_subtract(L_29, ((double)(((double)L_31)/(1000.0)))));
		// if (timeStamp + marginOfError <= audioTime)
		double L_32 = V_1;
		double L_33 = V_2;
		if ((!(((double)((double)il2cpp_codegen_add(L_26, L_32))) <= ((double)L_33))))
		{
			goto IL_0103;
		}
	}
	{
		// Miss();
		Lane_Miss_mE966BF79F03DD69C1990D773117A0FF922BF5674(__this, NULL);
		// print($"Missed {inputIndex} note");
		int32_t L_34 = __this->___inputIndex_9;
		int32_t L_35 = L_34;
		RuntimeObject* L_36 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_35);
		String_t* L_37;
		L_37 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB28922D4CBB047742711F74389D967A03809C34C, L_36, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_37, NULL);
		// inputIndex++;
		int32_t L_38 = __this->___inputIndex_9;
		__this->___inputIndex_9 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void Lane::InputButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_InputButtonClicked_m5AAD57DBE0C161F997AD710AA477FAF1A43172A9 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m39EA964CE85827ED829C14D54979E42B2F9D33BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B5058A935046849B2F1B8D279BA1332E8A54599);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4AF956E9BBB62C3D94BAA5F17FD6C3BEB6FBD86);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// if (inputIndex >= timeStamps.Count)
		int32_t L_0 = __this->___inputIndex_9;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_1 = __this->___timeStamps_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_inline(L_1, List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// double timeStamp = timeStamps[inputIndex];
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_3 = __this->___timeStamps_7;
		int32_t L_4 = __this->___inputIndex_9;
		NullCheck(L_3);
		double L_5;
		L_5 = List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE(L_3, L_4, List_1_get_Item_m2B427D7B2367495464DE6E4579A4739049C226CE_RuntimeMethod_var);
		V_0 = L_5;
		// double marginOfError = SongManager.Instance.marginOfError;
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_6 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_6);
		double L_7 = L_6->___marginOfError_8;
		V_1 = L_7;
		// double audioTime = SongManager.GetAudioSourceTime() - (SongManager.Instance.inputDelayInMilliseconds / 1000.0);
		double L_8;
		L_8 = SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1(NULL);
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_9 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_9);
		int32_t L_10 = L_9->___inputDelayInMilliseconds_9;
		V_2 = ((double)il2cpp_codegen_subtract(L_8, ((double)(((double)L_10)/(1000.0)))));
		// if (Math.Abs(audioTime - timeStamp) < marginOfError)
		double L_11 = V_2;
		double L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = fabs(((double)il2cpp_codegen_subtract(L_11, L_12)));
		double L_14 = V_1;
		if ((!(((double)L_13) < ((double)L_14))))
		{
			goto IL_00a2;
		}
	}
	{
		// Hit();
		Lane_Hit_m19EB5F25BA1C682AB6ABDA59D61D95210383CAD1(__this, NULL);
		// print($"Hit on {inputIndex} note");
		int32_t L_15 = __this->___inputIndex_9;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7B5058A935046849B2F1B8D279BA1332E8A54599, L_17, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_18, NULL);
		// Destroy(notes[inputIndex].gameObject);
		List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* L_19 = __this->___notes_6;
		int32_t L_20 = __this->___inputIndex_9;
		NullCheck(L_19);
		Note_tA2285A184DB020998838A4973465183177E99DE1* L_21;
		L_21 = List_1_get_Item_m39EA964CE85827ED829C14D54979E42B2F9D33BE(L_19, L_20, List_1_get_Item_m39EA964CE85827ED829C14D54979E42B2F9D33BE_RuntimeMethod_var);
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_22, NULL);
		// inputIndex++;
		int32_t L_23 = __this->___inputIndex_9;
		__this->___inputIndex_9 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}

IL_00a2:
	{
		// print($"HIt inaccurate on {inputIndex} note with {Math.Abs(audioTime - timeStamp)} delay");
		int32_t L_24 = __this->___inputIndex_9;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		double L_27 = V_2;
		double L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = fabs(((double)il2cpp_codegen_subtract(L_27, L_28)));
		double L_30 = L_29;
		RuntimeObject* L_31 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_30);
		String_t* L_32;
		L_32 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE4AF956E9BBB62C3D94BAA5F17FD6C3BEB6FBD86, L_26, L_31, NULL);
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_32, NULL);
		// }
		return;
	}
}
// System.Void Lane::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Hit_m19EB5F25BA1C682AB6ABDA59D61D95210383CAD1 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	{
		// ScoreManager.Hit();
		ScoreManager_Hit_m17DC5B91E121C27AE2768A4F7E06F073B4894062(NULL);
		// }
		return;
	}
}
// System.Void Lane::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane_Miss_mE966BF79F03DD69C1990D773117A0FF922BF5674 (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	{
		// ScoreManager.Miss();
		ScoreManager_Miss_mE6D942D17AC4C49BD5AF381FEA69F88966226E10(NULL);
		// }
		return;
	}
}
// System.Void Lane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lane__ctor_m429A1FF8F33D7D8793D9D568809A85C48888BE2B (Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m379D19DE534D41F25E2A894D28BBBF4CB1AB7837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Note> notes = new List<Note>();
		List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221* L_0 = (List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221*)il2cpp_codegen_object_new(List_1_t2F44E2D89EEAFD4871BA0F1D996D4D0333F53221_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m379D19DE534D41F25E2A894D28BBBF4CB1AB7837(L_0, List_1__ctor_m379D19DE534D41F25E2A894D28BBBF4CB1AB7837_RuntimeMethod_var);
		__this->___notes_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___notes_6), (void*)L_0);
		// public List<double> timeStamps = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_1 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_1, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		__this->___timeStamps_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timeStamps_7), (void*)L_1);
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
// System.Void MainMenu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayGame_mEC2DA4274CDD4D658AE27480E2C70C6049A496B5 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_QuitGame_mBF761274C14BD7341FE8C32A538D28343B63EDC4 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainMenu::toNotFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_toNotFound_mE24EBC488E5547D636A0F3D2134CB0DA8A5C6EF3 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::toBeatRunEaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_toBeatRunEaster_m04A6ABAAF4EF487E79AC26F1444B87441BBBF824 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF390DD64EAB82A4E98D1DC0425A52061FB794ABE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("UnirunBased");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralF390DD64EAB82A4E98D1DC0425A52061FB794ABE, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::LevelSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_LevelSelect_mC6AA9DE70B664A723B2D7E621CED55E113618A69 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2602033F3FB1AFC0B39748C6EFF8947CCC0FB539);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LevelSelect");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral2602033F3FB1AFC0B39748C6EFF8947CCC0FB539, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Note::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_Start_m14184A0832F0A37C2A9E857E157B3DADDA526ECF (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	{
		// timeInstantiated = SongManager.GetAudioSourceTime();
		double L_0;
		L_0 = SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1(NULL);
		__this->___timeInstantiated_4 = L_0;
		// }
		return;
	}
}
// System.Void Note::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note_Update_m01EAE666CB48BAD29DF760BBB4001FABFF2EABB2 (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// double timeSinceInstantiated = SongManager.GetAudioSourceTime() - timeInstantiated;
		double L_0;
		L_0 = SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1(NULL);
		double L_1 = __this->___timeInstantiated_4;
		// float t = (float)(timeSinceInstantiated / (SongManager.Instance.noteTime * 2));
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_2 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		float L_3 = L_2->___noteTime_11;
		V_0 = ((float)((double)(((double)il2cpp_codegen_subtract(L_0, L_1))/((double)((float)il2cpp_codegen_multiply(L_3, (2.0f)))))));
		// if(t>1)
		float L_4 = V_0;
		if ((!(((float)L_4) > ((float)(1.0f)))))
		{
			goto IL_0034;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		return;
	}

IL_0034:
	{
		// transform.localPosition = Vector3.Lerp(Vector3.right * SongManager.Instance.noteSpawnX, Vector3.right * SongManager.Instance.noteDespawnX, t);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_8 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_8);
		float L_9 = L_8->___noteSpawnX_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_12 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_12);
		float L_13;
		L_13 = SongManager_get_noteDespawnX_m954695FCCAEA8DAF973D9E0354D0984288762DEE(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_13, NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_10, L_14, L_15, NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_16, NULL);
		// GetComponent<SpriteRenderer>().enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_17;
		L_17 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		NullCheck(L_17);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_17, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Note::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Note__ctor_m604E0FF46514DBA4F0DDAB63C417950327839F44 (Note_tA2285A184DB020998838A4973465183177E99DE1* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PauseMenu::PauseButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseButtonClicked_mE3799EE888468E5A6C8F9D34BE014A4D999632C3 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if (isGamePaused)
		bool L_0 = __this->___isGamePaused_5;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// ResumeGame();
		PauseMenu_ResumeGame_m8C22F921DCAA4122C7FF4FCDB87A5041962493A0(__this, NULL);
		return;
	}

IL_000f:
	{
		// PauseGame();
		PauseMenu_PauseGame_m5F9F76E8D0822B61CEE60DD44562CA95076BAEEF(__this, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::RestartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_RestartGame_m6BD70CD74CCB1654FE9527364DA2AD9E754EA2E8 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LoadMenu_m301E8408F8C5253F3753113332BBC089863B19A9 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_QuitGame_m699C16B5AE66C12C48F4D7B4821169679C5FF760 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseGame_m5F9F76E8D0822B61CEE60DD44562CA95076BAEEF (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// isGamePaused = true;
		__this->___isGamePaused_5 = (bool)1;
		// Time.timeScale = 0f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// pauseMenu.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenu_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_ResumeGame_m8C22F921DCAA4122C7FF4FCDB87A5041962493A0 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// isGamePaused = false;
		__this->___isGamePaused_5 = (bool)0;
		// Time.timeScale = 1f;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// pauseMenu.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseMenu_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// PauseButtonClicked();
		PauseMenu_PauseButtonClicked_mE3799EE888468E5A6C8F9D34BE014A4D999632C3(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void PlayerAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Start_m453CD53EBED16C3CDF03A551E6911722CC7B71EB (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	{
		// startPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___startPosition_10 = L_1;
		// jumpStartPosition = startPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___startPosition_10;
		__this->___jumpStartPosition_11 = L_2;
		// }
		return;
	}
}
// System.Void PlayerAnimation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_Update_mEB516B0433E673E491291C85A8E05619DDFCECD0 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.DownArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)274), NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (isJumping)
		bool L_1 = __this->___isJumping_8;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// StopJump();
		PlayerAnimation_StopJump_m868CCD6A4B5CC824E19A988F76489978CA63F7B7(__this, NULL);
	}

IL_001a:
	{
		// ReturnToGround();
		PlayerAnimation_ReturnToGround_mF27D8ABA49B6F5A34E72D74AEFA310EBA78FCE13(__this, NULL);
		// PlayAttackAnimation();
		PlayerAnimation_PlayAttackAnimation_m39540B12A4A5CA5C504F8EA1B3C13314A3E1A540(__this, NULL);
		return;
	}

IL_0027:
	{
		// else if (Input.GetKeyDown(KeyCode.UpArrow))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)273), NULL);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		// if (!isJumping)
		bool L_3 = __this->___isJumping_8;
		if (L_3)
		{
			goto IL_0049;
		}
	}
	{
		// StopAllAnimations();
		PlayerAnimation_StopAllAnimations_m1AE4B09E7E5D8F44028E34CE4007FF1D9E0F7B25(__this, NULL);
		// StartJump();
		PlayerAnimation_StartJump_mBF6338EDE1D92ACA82A92494AEBD6E4AC7E38846(__this, NULL);
		goto IL_004f;
	}

IL_0049:
	{
		// StopJump();
		PlayerAnimation_StopJump_m868CCD6A4B5CC824E19A988F76489978CA63F7B7(__this, NULL);
	}

IL_004f:
	{
		// ReturnToGround();
		PlayerAnimation_ReturnToGround_mF27D8ABA49B6F5A34E72D74AEFA310EBA78FCE13(__this, NULL);
		// PlayJumpAnimation();
		PlayerAnimation_PlayJumpAnimation_m7E7261D841726BCBB0C5C82A39EE74377A08F854(__this, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimation::PlayAttackAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_PlayAttackAnimation_m39540B12A4A5CA5C504F8EA1B3C13314A3E1A540 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerAnimator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___playerAnimator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// playerAnimator.SetTrigger("Attack");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___playerAnimator_4;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimation::PlayJumpAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_PlayJumpAnimation_m7E7261D841726BCBB0C5C82A39EE74377A08F854 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerAnimator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___playerAnimator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// playerAnimator.SetTrigger("Jump");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___playerAnimator_4;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimation::StartJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_StartJump_mBF6338EDE1D92ACA82A92494AEBD6E4AC7E38846 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	{
		// isJumping = true;
		__this->___isJumping_8 = (bool)1;
		// jumpStartPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___jumpStartPosition_11 = L_1;
		// jumpCoroutine = StartCoroutine(JumpCoroutine());
		RuntimeObject* L_2;
		L_2 = PlayerAnimation_JumpCoroutine_m51874F21C2B9A3B9DB081F65BBD9C01C2F69F352(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		__this->___jumpCoroutine_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpCoroutine_9), (void*)L_3);
		// jumpCount++;
		int32_t L_4 = __this->___jumpCount_12;
		__this->___jumpCount_12 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// }
		return;
	}
}
// System.Void PlayerAnimation::StopJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_StopJump_m868CCD6A4B5CC824E19A988F76489978CA63F7B7 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	{
		// if (isJumping && jumpCoroutine != null)
		bool L_0 = __this->___isJumping_8;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1 = __this->___jumpCoroutine_9;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// isJumping = false;
		__this->___isJumping_8 = (bool)0;
		// StopCoroutine(jumpCoroutine);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2 = __this->___jumpCoroutine_9;
		MonoBehaviour_StopCoroutine_mB0FC91BE84203BD8E360B3FBAE5B958B4C5ED22A(__this, L_2, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimation::ReturnToGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_ReturnToGround_mF27D8ABA49B6F5A34E72D74AEFA310EBA78FCE13 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = startPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___startPosition_10;
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// jumpStartPosition = startPosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___startPosition_10;
		__this->___jumpStartPosition_11 = L_2;
		// jumpCount = 0;
		__this->___jumpCount_12 = 0;
		// }
		return;
	}
}
// System.Void PlayerAnimation::StopAllAnimations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation_StopAllAnimations_m1AE4B09E7E5D8F44028E34CE4007FF1D9E0F7B25 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerAnimator != null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___playerAnimator_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		// playerAnimator.ResetTrigger("Attack");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___playerAnimator_4;
		NullCheck(L_2);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_2, _stringLiteral508450355DF2A5BB172C6D21A5C54D7806587D91, NULL);
		// playerAnimator.ResetTrigger("Jump");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___playerAnimator_4;
		NullCheck(L_3);
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_3, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator PlayerAnimation::JumpCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerAnimation_JumpCoroutine_m51874F21C2B9A3B9DB081F65BBD9C01C2F69F352 (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* L_0 = (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089*)il2cpp_codegen_object_new(U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpCoroutineU3Ed__17__ctor_mE0BAE6FE132F463F3B0CDE7FBBF200A6E08D5E91(L_0, 0, NULL);
		U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PlayerAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimation__ctor_m86611FABE0C081C99E68C9B17D8DC3462AC270EB (PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* __this, const RuntimeMethod* method) 
{
	{
		// public float jumpDistance = 0.5f;
		__this->___jumpDistance_5 = (0.5f);
		// public float jumpHeight = 1f;
		__this->___jumpHeight_6 = (1.0f);
		// public float jumpHeightMultiplier = 3f;
		__this->___jumpHeightMultiplier_7 = (3.0f);
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
// System.Void PlayerAnimation/<JumpCoroutine>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpCoroutineU3Ed__17__ctor_mE0BAE6FE132F463F3B0CDE7FBBF200A6E08D5E91 (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PlayerAnimation/<JumpCoroutine>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpCoroutineU3Ed__17_System_IDisposable_Dispose_m6156FA50471B31E8E06F475B5DFA30B7CABACC24 (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PlayerAnimation/<JumpCoroutine>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpCoroutineU3Ed__17_MoveNext_m0D718216879DD3DFC849DC8C5B2B31519891220A (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00c1;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float jumpTargetHeight = jumpStartPosition.y + jumpHeight * jumpHeightMultiplier;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_4 = V_1;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&L_4->___jumpStartPosition_11);
		float L_6 = L_5->___y_3;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___jumpHeight_6;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___jumpHeightMultiplier_7;
		__this->___U3CjumpTargetHeightU3E5__2_3 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_8, L_10))));
		goto IL_00c8;
	}

IL_0045:
	{
		// float yOffset = jumpHeight * jumpHeightMultiplier * jumpCount - jumpHeight * jumpHeightMultiplier * (jumpCount - 1);
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_11 = V_1;
		NullCheck(L_11);
		float L_12 = L_11->___jumpHeight_6;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___jumpHeightMultiplier_7;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___jumpCount_12;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___jumpHeight_6;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_19 = V_1;
		NullCheck(L_19);
		float L_20 = L_19->___jumpHeightMultiplier_7;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___jumpCount_12;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_12, L_14)), ((float)L_16))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_18, L_20)), ((float)((int32_t)il2cpp_codegen_subtract(L_22, 1)))))));
		// Vector3 jumpTarget = jumpStartPosition + Vector3.up * yOffset;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_23 = V_1;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___jumpStartPosition_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_26 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_27, NULL);
		V_3 = L_28;
		// transform.position = Vector3.MoveTowards(transform.position, jumpTarget, Time.deltaTime * 20f);
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_29, NULL);
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_31 = V_1;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_31, NULL);
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_3;
		float L_35;
		L_35 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline(L_33, L_34, ((float)il2cpp_codegen_multiply(L_35, (20.0f))), NULL);
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_36, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00c1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c8:
	{
		// while (isJumping && transform.position.y < jumpTargetHeight)
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_37 = V_1;
		NullCheck(L_37);
		bool L_38 = L_37->___isJumping_8;
		if (!L_38)
		{
			goto IL_00eb;
		}
	}
	{
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_39 = V_1;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		float L_42 = L_41.___y_3;
		float L_43 = __this->___U3CjumpTargetHeightU3E5__2_3;
		if ((((float)L_42) < ((float)L_43)))
		{
			goto IL_0045;
		}
	}

IL_00eb:
	{
		// isJumping = false;
		PlayerAnimation_t83D8C6D9FB50F858AB7E9EFB999BEA9094AED2E3* L_44 = V_1;
		NullCheck(L_44);
		L_44->___isJumping_8 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PlayerAnimation/<JumpCoroutine>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpCoroutineU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC73BF8601C079C2EDDDCE6B9DAF37704F422E462 (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PlayerAnimation/<JumpCoroutine>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_mA0E54BC6FD91EF53C4E0C49F496869B338758487 (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpCoroutineU3Ed__17_System_Collections_IEnumerator_Reset_mA0E54BC6FD91EF53C4E0C49F496869B338758487_RuntimeMethod_var)));
	}
}
// System.Object PlayerAnimation/<JumpCoroutine>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpCoroutineU3Ed__17_System_Collections_IEnumerator_get_Current_m3FF30CD10E2FE5212C5A3CBFE9BE82CC07582721 (U3CJumpCoroutineU3Ed__17_t44EF9EF9CC744F31D83FA292D06DCBEB1EA84089* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PlayerAnimationNew::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_Start_mFD1A8879609AAC31055954B3C97EEBC3434097AE (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAnimationNew_DashButtonClicked_m01A75894CDD20F6B75AA80006B2CEDB7FB984986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerAnimationNew_JumpButtonClicked_m365D526EBAD30932C5CAC3D8CB4D560C19FFC68E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_7), (void*)L_0);
		// dashButton.onClick.AddListener(DashButtonClicked);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->___dashButton_8;
		NullCheck(L_1);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_2;
		L_2 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_1, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_3 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_3, __this, (intptr_t)((void*)PlayerAnimationNew_DashButtonClicked_m01A75894CDD20F6B75AA80006B2CEDB7FB984986_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_2, L_3, NULL);
		// jumpButton.onClick.AddListener(JumpButtonClicked);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___jumpButton_9;
		NullCheck(L_4);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_5;
		L_5 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_4, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_6, __this, (intptr_t)((void*)PlayerAnimationNew_JumpButtonClicked_m365D526EBAD30932C5CAC3D8CB4D560C19FFC68E_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_Update_mD0797E933BDAFA739A292879E29715CA6CF50D45 (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	{
		// timeSinceLastInput += Time.deltaTime;
		float L_0 = __this->___timeSinceLastInput_4;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timeSinceLastInput_4 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (timeSinceLastInput > 0.25f)
		float L_2 = __this->___timeSinceLastInput_4;
		if ((!(((float)L_2) > ((float)(0.25f)))))
		{
			goto IL_0025;
		}
	}
	{
		// ResetAnimation();
		PlayerAnimationNew_ResetAnimation_m023BB42419560498E28E42BA34439615855A392C(__this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::DashButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_DashButtonClicked_m01A75894CDD20F6B75AA80006B2CEDB7FB984986 (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveCharacterToBottomLane();
		PlayerAnimationNew_MoveCharacterToBottomLane_m8BA01EA701C47916245BD13E209B95FC7B1F34A1(__this, NULL);
		// timeSinceLastInput = 0f;
		__this->___timeSinceLastInput_4 = (0.0f);
		// isJumping = false;
		__this->___isJumping_5 = (bool)0;
		// isDashing = true;
		__this->___isDashing_6 = (bool)1;
		// animator.SetBool("isAttacking", isDashing);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		bool L_1 = __this->___isDashing_6;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::JumpButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_JumpButtonClicked_m365D526EBAD30932C5CAC3D8CB4D560C19FFC68E (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MoveCharacterToTopLane();
		PlayerAnimationNew_MoveCharacterToTopLane_m4102954295C274770B7881BBC518B0E6A4AD0BEB(__this, NULL);
		// timeSinceLastInput = 0f;
		__this->___timeSinceLastInput_4 = (0.0f);
		// isJumping = true;
		__this->___isJumping_5 = (bool)1;
		// isDashing = false;
		__this->___isDashing_6 = (bool)0;
		// animator.SetBool("isJumping", isJumping);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		bool L_1 = __this->___isJumping_5;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC, L_1, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::ResetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_ResetAnimation_m023BB42419560498E28E42BA34439615855A392C (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isJumping = false;
		__this->___isJumping_5 = (bool)0;
		// isDashing = false;
		__this->___isDashing_6 = (bool)0;
		// animator.SetBool("isAttacking", isDashing);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		bool L_1 = __this->___isDashing_6;
		NullCheck(L_0);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteralD97B0577F464078484CF8808A78E5C0B47BDF09A, L_1, NULL);
		// animator.SetBool("isJumping", isJumping);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_7;
		bool L_3 = __this->___isJumping_5;
		NullCheck(L_2);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_2, _stringLiteral62012883D3A13EAB8473757C089740CE05DD45CC, L_3, NULL);
		// MoveCharacterToBottomLane();
		PlayerAnimationNew_MoveCharacterToBottomLane_m8BA01EA701C47916245BD13E209B95FC7B1F34A1(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::MoveCharacterToTopLane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_MoveCharacterToTopLane_m4102954295C274770B7881BBC518B0E6A4AD0BEB (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newPos = new Vector3(-6, 1, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (-6.0f), (1.0f), (0.0f), NULL);
		// transform.SetPositionAndRotation(newPos, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::MoveCharacterToBottomLane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew_MoveCharacterToBottomLane_m8BA01EA701C47916245BD13E209B95FC7B1F34A1 (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 newPos = new Vector3(-6, -2.5f, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (-6.0f), (-2.5f), (0.0f), NULL);
		// transform.SetPositionAndRotation(newPos, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		NullCheck(L_0);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PlayerAnimationNew::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerAnimationNew__ctor_m36EE9B9B7D9F8375DEF57437706EAB9D5FCE9D8A (PlayerAnimationNew_tCD99418938322CF1248FACE17553DBD1AEC696D6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ScoreDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_Start_m96F650A0EADE6CBFF87C58A17E15F808D32251CB (ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TotalHits.text = ScoreManager.totalHits.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___TotalHits_4;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___totalHits_9), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// TotalMiss.text = ScoreManager.totalMiss.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___TotalMiss_5;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___totalMiss_10), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// HighestCombo.text = ScoreManager.highestCombo.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4 = __this->___HighestCombo_6;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___highestCombo_12), NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_5);
		// Rank.text = ScoreManager.Rank;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___Rank_7;
		String_t* L_7 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13;
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void ScoreDisplay::ReturnToMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay_ReturnToMain_mBDF2EF9B06554894151839CB4D30C4DFB0B6EE38 (ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Main Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralAC173E4FA065F34E208E6CC1B91E8B21070AD1E7, NULL);
		// }
		return;
	}
}
// System.Void ScoreDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreDisplay__ctor_mC8666625EE8D2FFC495D905A0DA75ADF0CF41CB8 (ScoreDisplay_t893776D244C1C319EA3917E9EDFBD7782193B87B* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ScoreManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Start_m7E00370AD0134DB3AEA647B9BA69055725AA83FE (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// comboScore = 0;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11 = 0;
		// }
		return;
	}
}
// System.Void ScoreManager::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Hit_m17DC5B91E121C27AE2768A4F7E06F073B4894062 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// totalHits += 1;
		int32_t L_0 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___totalHits_9;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___totalHits_9 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// comboScore += 1;
		int32_t L_1 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// Instance.hitSFX.Play();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_2 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___hitSFX_5;
		NullCheck(L_3);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_3, NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::Miss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Miss_mE6D942D17AC4C49BD5AF381FEA69F88966226E10 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (highestCombo < comboScore)
		int32_t L_0 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___highestCombo_12;
		int32_t L_1 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		// highestCombo = comboScore;
		int32_t L_2 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___highestCombo_12 = L_2;
	}

IL_0016:
	{
		// totalMiss += 1;
		int32_t L_3 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___totalMiss_10;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___totalMiss_10 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		// comboScore = 0;
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11 = 0;
		// Instance.missSFX.Play();
		ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* L_4 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___missSFX_6;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// }
		return;
	}
}
// System.Void ScoreManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager_Update_m68EC29B04B4118B51E293C1C3077D87FF3FE7811 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB91D10FC5CA4A6BBB256ED283B891D8DDA45911C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Combo : " + comboScore.ToString();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___scoreText_7;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___comboScore_11), NULL);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB91D10FC5CA4A6BBB256ED283B891D8DDA45911C, L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_2);
		// if (RankScores.Count != 0)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___RankScores_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0072;
		}
	}
	{
		// if (highestCombo >= RankScores[0])
		int32_t L_5 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___highestCombo_12;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = __this->___RankScores_8;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_6, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_004a;
		}
	}
	{
		// Rank = "S";
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13 = _stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13), (void*)_stringLiteral09684B67A5909FD48E1F14A8AF8DDD483C620B10);
		return;
	}

IL_004a:
	{
		// else if (highestCombo >= RankScores[1])
		int32_t L_8 = ((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___highestCombo_12;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = __this->___RankScores_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_9, 1, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0068;
		}
	}
	{
		// Rank = "A";
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13 = _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13), (void*)_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		return;
	}

IL_0068:
	{
		// Rank = "B";
		((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13 = _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
		Il2CppCodeGenWriteBarrier((void**)(&((ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_StaticFields*)il2cpp_codegen_static_fields_for(ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39_il2cpp_TypeInfo_var))->___Rank_13), (void*)_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
	}

IL_0072:
	{
		// }
		return;
	}
}
// System.Void ScoreManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreManager__ctor_mE5C264C34A9CBBAB72DCF99CCCC9841AF8F9FEE6 (ScoreManager_t86D4A06D4B38717B8C529883F37DA25BA5750F39* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SettingsMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_Start_mE2F6C7DC6F8D450A9CB8F4DB9E432132B7CD8E5A (SettingsMenu_t509117608BBFDCA2FBE0FFBB75E4121164E92EBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// resolutions = Screen.resolutions;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_0;
		L_0 = Screen_get_resolutions_mC4E187F4D1D5055AD5551C6B8B5FD0460E63A824(NULL);
		__this->___resolutions_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resolutions_4), (void*)L_0);
		// resolutionDropdown.ClearOptions();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_1 = __this->___resolutionDropdown_5;
		NullCheck(L_1);
		Dropdown_ClearOptions_m3EE71BFE47AB96BC7F731C4EE6BC728ED0E6EE56(L_1, NULL);
		// List<string> options = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < resolutions.Length; i++)
		V_1 = 0;
		goto IL_00b4;
	}

IL_0023:
	{
		// string option = resolutions[i].width + "x" + resolutions[i].height;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_3 = __this->___resolutions_4;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), NULL);
		V_3 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_7 = __this->___resolutions_4;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), NULL);
		V_3 = L_9;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_6, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, L_10, NULL);
		V_2 = L_11;
		// options.Add(option);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = V_2;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// if (resolutions[i].width == Screen.currentResolution.width && resolutions[i].height == Screen.currentResolution.height)
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_14 = __this->___resolutions_4;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), NULL);
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_17;
		L_17 = Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD(NULL);
		V_4 = L_17;
		int32_t L_18;
		L_18 = Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24((&V_4), NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_00b0;
		}
	}
	{
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_19 = __this->___resolutions_4;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21;
		L_21 = Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), NULL);
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_22;
		L_22 = Screen_get_currentResolution_m8FE4C43E4F6EF28E0B85EB94B6C69D1EC5687CCD(NULL);
		V_4 = L_22;
		int32_t L_23;
		L_23 = Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B((&V_4), NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)L_23))))
		{
			goto IL_00b0;
		}
	}
	{
		// currentResolutionIndex = i;
		int32_t L_24 = V_1;
		__this->___currentResolutionIndex_6 = L_24;
	}

IL_00b0:
	{
		// for (int i = 0; i < resolutions.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00b4:
	{
		// for (int i = 0; i < resolutions.Length; i++)
		int32_t L_26 = V_1;
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_27 = __this->___resolutions_4;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// resolutionDropdown.AddOptions(options);
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_28 = __this->___resolutionDropdown_5;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_29 = V_0;
		NullCheck(L_28);
		Dropdown_AddOptions_mCFB763400FA1BCA695C168E7FBCDE20C9B8E7839(L_28, L_29, NULL);
		// resolutionDropdown.value = currentResolutionIndex;
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_30 = __this->___resolutionDropdown_5;
		int32_t L_31 = __this->___currentResolutionIndex_6;
		NullCheck(L_30);
		Dropdown_set_value_m0764A5E2023E34705ADD422689BF6C0074449FEE(L_30, L_31, NULL);
		// resolutionDropdown.RefreshShownValue();
		Dropdown_t54C0BDC1441E058BE37E796F68886671C270EF89* L_32 = __this->___resolutionDropdown_5;
		NullCheck(L_32);
		Dropdown_RefreshShownValue_mA112A95E8653859FC2B6C2D0CC89660D36E8970E(L_32, NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::SetResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_SetResolution_mB147D7B1A2F86103070809A7577ABD7AA19F3B5B (SettingsMenu_t509117608BBFDCA2FBE0FFBB75E4121164E92EBA* __this, int32_t ___0_resolutionIndex, const RuntimeMethod* method) 
{
	Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Resolution resolution = resolutions[resolutionIndex];
		ResolutionU5BU5D_t943BB1FE2B73E9E630A701D55F4C6EED8B54175A* L_0 = __this->___resolutions_4;
		int32_t L_1 = ___0_resolutionIndex;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Resolution_tDF215F567EEFFD07B9A8FB7CEACC08EA6B8B9525 L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// Screen.SetResolution(resolution.width, resolution.height, Screen.fullScreen);
		int32_t L_4;
		L_4 = Resolution_get_width_mC55423852D453EEC0B66E692AA3E7F5DE772FB24((&V_0), NULL);
		int32_t L_5;
		L_5 = Resolution_get_height_mD46754FA3634CA816BE91D1610D1FEBDECCEBE5B((&V_0), NULL);
		bool L_6;
		L_6 = Screen_get_fullScreen_m9B3B4F9FB4B6FD6E1AEF626736C4462A2FD7407C(NULL);
		Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100(L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::SetQuality(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu_SetQuality_mCD210142F9C8B70F4420F5A05D6D944A29B95BE3 (SettingsMenu_t509117608BBFDCA2FBE0FFBB75E4121164E92EBA* __this, int32_t ___0_qualityIndex, const RuntimeMethod* method) 
{
	{
		// QualitySettings.SetQualityLevel(qualityIndex);
		int32_t L_0 = ___0_qualityIndex;
		QualitySettings_SetQualityLevel_mCAE1F9B15496825C5DCBDDE430A3650B967BB138(L_0, NULL);
		// }
		return;
	}
}
// System.Void SettingsMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsMenu__ctor_mAB642D09DCFB585F2998C81DE33DD08C5C420E1C (SettingsMenu_t509117608BBFDCA2FBE0FFBB75E4121164E92EBA* __this, const RuntimeMethod* method) 
{
	{
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
// System.Single SongManager::get_noteDespawnX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SongManager_get_noteDespawnX_m954695FCCAEA8DAF973D9E0354D0984288762DEE (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	{
		// return noteTapX - (noteSpawnX - noteTapX);
		float L_0 = __this->___noteTapX_13;
		float L_1 = __this->___noteSpawnX_12;
		float L_2 = __this->___noteTapX_13;
		return ((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_subtract(L_1, L_2))));
	}
}
// System.Void SongManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_Start_m871680966C4A0B543EAFC8F078926DAF6B67A5BD (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = this;
		((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4), (void*)__this);
		// if (Application.streamingAssetsPath.StartsWith("http://") || Application.streamingAssetsPath.StartsWith("https://"))
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteral3AE148F4539A6130C80EF45C5441F068ADBF8C8C, NULL);
		if (L_1)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_2;
		L_2 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_2, _stringLiteralA493FF06F94D0907E2F1797D03C4EB68CE5751F2, NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}

IL_0028:
	{
		// StartCoroutine(ReadFromWebsite());
		RuntimeObject* L_4;
		L_4 = SongManager_ReadFromWebsite_m4356BBCBDD155C46FE7347B12F7470B8C8105981(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		return;
	}

IL_0036:
	{
		// ReadFromFile();
		SongManager_ReadFromFile_m6CEA2114484CDD3290DB43DE6BA116697898364F(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SongManager::ReadFromWebsite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SongManager_ReadFromWebsite_m4356BBCBDD155C46FE7347B12F7470B8C8105981 (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* L_0 = (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C*)il2cpp_codegen_object_new(U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CReadFromWebsiteU3Ed__14__ctor_m27853A74CE538FE059BA3362D84225CA901664AB(L_0, 0, NULL);
		U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SongManager::ReadFromFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_ReadFromFile_m6CEA2114484CDD3290DB43DE6BA116697898364F (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12EA0C6AE04150ED2C21A6D43AC4D0ECA9AE5C7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C1A6E4CEFF65BE6A1D9E90EBE606845607965C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5EDE39CDEAD277EE55B50BFF1C40D68F9A2F12F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// print("Running on Editor");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralF5EDE39CDEAD277EE55B50BFF1C40D68F9A2F12F, NULL);
		// midiFile = MidiFile.Read(Application.streamingAssetsPath + "/" + fileLocation);
		String_t* L_1;
		L_1 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_2 = __this->___fileLocation_10;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_2, NULL);
		MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* L_4;
		L_4 = MidiFile_Read_m067EDA91ED1E76DEC56E44E80DDB9622256560E6(L_3, (ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F*)NULL, NULL);
		((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14), (void*)L_4);
		goto IL_006b;
	}

IL_0033:
	{
		// else if (Application.platform == RuntimePlatform.Android)
		int32_t L_5;
		L_5 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_006b;
		}
	}
	{
		// print("Running on Android");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral3C1A6E4CEFF65BE6A1D9E90EBE606845607965C1, NULL);
		// midiFile = MidiFile.Read("jar:file://" + Application.streamingAssetsPath + "!assets/" + fileLocation);
		String_t* L_6;
		L_6 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_7 = __this->___fileLocation_10;
		String_t* L_8;
		L_8 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral2746B283A9377664FAC642B633C6E630FD0DA207, L_6, _stringLiteral12EA0C6AE04150ED2C21A6D43AC4D0ECA9AE5C7B, L_7, NULL);
		MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* L_9;
		L_9 = MidiFile_Read_m067EDA91ED1E76DEC56E44E80DDB9622256560E6(L_8, (ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F*)NULL, NULL);
		((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14), (void*)L_9);
	}

IL_006b:
	{
		// GetDataFromMidi();
		SongManager_GetDataFromMidi_mD408189890DEE65235775E407BEEDEDCE9DD9BCB(__this, NULL);
		// }
		return;
	}
}
// System.Void SongManager::GetDataFromMidi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_GetDataFromMidi_mD408189890DEE65235775E407BEEDEDCE9DD9BCB (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5403F27038B28B406D16D8F2C0AF90D7F9900C08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral562DF94FE022C3EDB334BE693F96C1F437F4CDC2);
		s_Il2CppMethodInitialized = true;
	}
	NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* V_0 = NULL;
	LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var notes = midiFile.GetNotes();
		MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* L_0 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14;
		RuntimeObject* L_1;
		L_1 = NotesManagingUtilities_GetNotes_m6F200E408740F1FA4DDE160D81DA9F5CD5294DA8(L_0, (NoteDetectionSettings_t75FE01B9786A80AA56E311C38C6685AC89F4950D*)NULL, NULL);
		// var array = new Melanchall.DryWetMidi.Interaction.Note[notes.Count];
		RuntimeObject* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note>::get_Count() */, ICollection_1_t5403F27038B28B406D16D8F2C0AF90D7F9900C08_il2cpp_TypeInfo_var, L_2);
		NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* L_4 = (NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416*)(NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416*)SZArrayNew(NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// notes.CopyTo(array, 0);
		NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* L_5 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<Melanchall.DryWetMidi.Interaction.Note>::CopyTo(T[],System.Int32) */, ICollection_1_t5403F27038B28B406D16D8F2C0AF90D7F9900C08_il2cpp_TypeInfo_var, L_2, L_5, 0);
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* L_6 = __this->___lanes_6;
		V_1 = L_6;
		V_2 = 0;
		goto IL_0036;
	}

IL_0029:
	{
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Lane_t451AA233823F3E8A8FB2BCDB2B2DE9E73ECC43C1* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		NoteU5BU5D_t31439D70FFE6AAEC4770095C12F552EC2190A416* L_11 = V_0;
		NullCheck(L_10);
		Lane_SetTimeStamps_mFA4CA9FE6C8AF54F826BF168DFFF4906B399DCF9(L_10, L_11, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0036:
	{
		// foreach (var lane in lanes) lane.SetTimeStamps(array);
		int32_t L_13 = V_2;
		LaneU5BU5D_t43A2D2019861082B5B52D9AC21C015F59FCD730C* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// Invoke(nameof(StartSong), songDelayInSeconds);
		float L_15 = __this->___songDelayInSeconds_7;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral562DF94FE022C3EDB334BE693F96C1F437F4CDC2, L_15, NULL);
		// }
		return;
	}
}
// System.Void SongManager::StartSong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_StartSong_m01F6A01CAFED8B4BF26A74FE92EF126F37FFB1BC (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	{
		// audiosource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audiosource_5;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Double SongManager::GetAudioSourceTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SongManager_GetAudioSourceTime_m423A60625049561F2D001763A65AF47BC4C5A0D1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (double)Instance.audiosource.timeSamples / Instance.audiosource.clip.frequency;
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_0 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___audiosource_5;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AudioSource_get_timeSamples_mF230FF8ABBD5A5250CBC487D0E0FCE286BA95B82(L_1, NULL);
		SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_3 = ((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___Instance_4;
		NullCheck(L_3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = L_3->___audiosource_5;
		NullCheck(L_4);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5;
		L_5 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AudioClip_get_frequency_m6647E10F4B2B1335187B0066E82468CCCF19647B(L_5, NULL);
		return ((double)(((double)L_2)/((double)L_6)));
	}
}
// System.Void SongManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager_Update_m795DE6BCA1C3627589034C29A19739AF597DF3B6 (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AE89FEEEB51501CB1CC5D1C0A68B0CDCB71312A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!audiosource.isPlaying)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___audiosource_5;
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_0, NULL);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// SceneManager.LoadScene("EndScreen");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4AE89FEEEB51501CB1CC5D1C0A68B0CDCB71312A, NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void SongManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SongManager__ctor_m3B0BA690D52A8867366D0AAD993AB2AB17598F77 (SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void SongManager/<ReadFromWebsite>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14__ctor_m27853A74CE538FE059BA3362D84225CA901664AB (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SongManager/<ReadFromWebsite>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_System_IDisposable_Dispose_m8EF86B8D71C22C1CE640B2F2AFA997E1CB2C765A (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_m44A6D77E4BB87E35BCB1C157E41CFFCE4CE6D7C8(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean SongManager/<ReadFromWebsite>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReadFromWebsiteU3Ed__14_MoveNext_mDA0176F83146BAC514A9A0C25E1BC5D4D2FCA128 (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* V_2 = NULL;
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_00da:
			{// begin fault (depth: 1)
				U3CReadFromWebsiteU3Ed__14_System_IDisposable_Dispose_m8EF86B8D71C22C1CE640B2F2AFA997E1CB2C765A(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_001c_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0067_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00e1;
			}

IL_001c_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				// using (UnityWebRequest www = UnityWebRequest.Get(Application.streamingAssetsPath + "/" + fileLocation))
				String_t* L_4;
				L_4 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
				SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = L_5->___fileLocation_10;
				String_t* L_7;
				L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_6, NULL);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8;
				L_8 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_7, NULL);
				__this->___U3CwwwU3E5__2_3 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)L_8);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// yield return www.SendWebRequest();
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_9);
				UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_10;
				L_10 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_9, NULL);
				__this->___U3CU3E2__current_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00e1;
			}

IL_0067_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				// if(www.isNetworkError || www.isHttpError)
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_11);
				bool L_12;
				L_12 = UnityWebRequest_get_isNetworkError_m036684411466688E71E67CDD3703BAC9035A56F0(L_11, NULL);
				if (L_12)
				{
					goto IL_0089_1;
				}
			}
			{
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_13);
				bool L_14;
				L_14 = UnityWebRequest_get_isHttpError_m945BA480A179E05CC9659846414D9521ED648ED5(L_13, NULL);
				if (!L_14)
				{
					goto IL_009b_1;
				}
			}

IL_0089_1:
			{
				// Debug.LogError(www.error);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_15);
				String_t* L_16;
				L_16 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_15, NULL);
				il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
				Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_16, NULL);
				goto IL_00c9_1;
			}

IL_009b_1:
			{
				// byte[] results = www.downloadHandler.data;
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17 = __this->___U3CwwwU3E5__2_3;
				NullCheck(L_17);
				DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_18;
				L_18 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_17, NULL);
				NullCheck(L_18);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
				L_19 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_18, NULL);
				// using (var stream = new MemoryStream(results))
				MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_20 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_20, L_19, NULL);
				V_3 = L_20;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00bf_1:
					{// begin finally (depth: 2)
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_21 = V_3;
							if (!L_21)
							{
								goto IL_00c8_1;
							}
						}
						{
							MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_22 = V_3;
							NullCheck(L_22);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
						}

IL_00c8_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// midiFile = MidiFile.Read(stream);
					MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_23 = V_3;
					MidiFile_tAA982CB4F6D670B3B5AB422344082BCB8A4A5F84* L_24;
					L_24 = MidiFile_Read_m573B9FDFC615FED73A00544C9A55E23ABB157659(L_23, (ReadingSettings_tF6FB07BE4370AC0C2C6558DE6E4212766ED2A53F*)NULL, NULL);
					((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14 = L_24;
					Il2CppCodeGenWriteBarrier((void**)(&((SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_StaticFields*)il2cpp_codegen_static_fields_for(SongManager_t1900AA9B3EE9F256DB919A948D67D5A1BEF117B3_il2cpp_TypeInfo_var))->___midiFile_14), (void*)L_24);
					// }
					goto IL_00c9_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00c9_1:
			{
				// }
				U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_m44A6D77E4BB87E35BCB1C157E41CFFCE4CE6D7C8(__this, NULL);
				__this->___U3CwwwU3E5__2_3 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E5__2_3), (void*)(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)NULL);
				// }
				V_0 = (bool)0;
				goto IL_00e1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e1:
	{
		bool L_25 = V_0;
		return L_25;
	}
}
// System.Void SongManager/<ReadFromWebsite>d__14::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_U3CU3Em__Finally1_m44A6D77E4BB87E35BCB1C157E41CFFCE4CE6D7C8 (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwwwU3E5__2_3;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = __this->___U3CwwwU3E5__2_3;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object SongManager/<ReadFromWebsite>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadFromWebsiteU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB93B688BC9EDA59B2FE572BDA59F74E43BA12D7E (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SongManager/<ReadFromWebsite>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_Reset_m1502770C068C8883251FB171A4DEB516C9E19C7B (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_Reset_m1502770C068C8883251FB171A4DEB516C9E19C7B_RuntimeMethod_var)));
	}
}
// System.Object SongManager/<ReadFromWebsite>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CReadFromWebsiteU3Ed__14_System_Collections_IEnumerator_get_Current_mBDF174C9FA96C904839F598FE24F641150DBE713 (U3CReadFromWebsiteU3Ed__14_t4FC8A1D0684115D48ACE52B842DE5624AD9E1A8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SwipeMenu::NotFoundScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeMenu_NotFoundScene_m4F658194C61AE05206C6013A1978DA0155AC5A14 (SwipeMenu_t06431B3A6592C9AC701DA667B141A32DAF3D68AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8225AECE91A62067ECDECFF1108DF51474F57E19);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("NotFound");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8225AECE91A62067ECDECFF1108DF51474F57E19, NULL);
		// }
		return;
	}
}
// System.Void SwipeMenu::ForbiddenScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeMenu_ForbiddenScene_mEA56E82DFBC0117FBFE1D34FA985890245A88E45 (SwipeMenu_t06431B3A6592C9AC701DA667B141A32DAF3D68AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC123978EE5BDDE00D993F19944BEA3D43008E7E8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Forbidden");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC123978EE5BDDE00D993F19944BEA3D43008E7E8, NULL);
		// }
		return;
	}
}
// System.Void SwipeMenu::BadRequestScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeMenu_BadRequestScene_m4E76CC3664E2E1C36F0A5324DA38E94E8F54AC1C (SwipeMenu_t06431B3A6592C9AC701DA667B141A32DAF3D68AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93EC98FC1D2D77CA4620AB0465A4C03C6A6C633B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("BadRequest");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral93EC98FC1D2D77CA4620AB0465A4C03C6A6C633B, NULL);
		// }
		return;
	}
}
// System.Void SwipeMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwipeMenu__ctor_mF71FD4B4351FB13F62DE12BC7C9C7F164D7B8DD2 (SwipeMenu_t06431B3A6592C9AC701DA667B141A32DAF3D68AB* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void VolumeSaveController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeSaveController_Start_m4AD1CFD03B4982A81A67C36CD05DF70046FFB845 (VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7* __this, const RuntimeMethod* method) 
{
	{
		// LoadValues();
		VolumeSaveController_LoadValues_mA44FACE96C6DF58799EB94E11F46E8C314CEC73E(__this, NULL);
		// }
		return;
	}
}
// System.Void VolumeSaveController::VolumeSlider(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeSaveController_VolumeSlider_mED0310A541579A92F8CBE475D6A9CCCCAB1F683D (VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7* __this, float ___0_volume, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC008E503687BA2A627379D4E257787AEA3506830);
		s_Il2CppMethodInitialized = true;
	}
	{
		// volumeTextUI.text = volume.ToString("0.0");
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___volumeTextUI_5;
		String_t* L_1;
		L_1 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&___0_volume), _stringLiteralC008E503687BA2A627379D4E257787AEA3506830, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void VolumeSaveController::SaveVolumeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeSaveController_SaveVolumeButton_m9A311ECA64EF2313833D1A30FE78E303B89D6E3E (VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138036CF00DC7AA638E8C59DE658B2B707E5188E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float volumeValue = volumeSlider.value;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___volumeSlider_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		// PlayerPrefs.SetFloat("VolumeValue", volumeValue);
		float L_2 = V_0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral138036CF00DC7AA638E8C59DE658B2B707E5188E, L_2, NULL);
		// LoadValues();
		VolumeSaveController_LoadValues_mA44FACE96C6DF58799EB94E11F46E8C314CEC73E(__this, NULL);
		// }
		return;
	}
}
// System.Void VolumeSaveController::LoadValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeSaveController_LoadValues_mA44FACE96C6DF58799EB94E11F46E8C314CEC73E (VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138036CF00DC7AA638E8C59DE658B2B707E5188E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float volumeValue = PlayerPrefs.GetFloat("VolumeValue");
		float L_0;
		L_0 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral138036CF00DC7AA638E8C59DE658B2B707E5188E, NULL);
		V_0 = L_0;
		// volumeSlider.value = volumeValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = __this->___volumeSlider_4;
		float L_2 = V_0;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		// AudioListener.volume = volumeValue;
		float L_3 = V_0;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721(L_3, NULL);
		// }
		return;
	}
}
// System.Void VolumeSaveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VolumeSaveController__ctor_m7B278CFA3AD66B1891D11E9BDC53E33E350BA02C (VolumeSaveController_t3B46341649E06F4EF01B2BCF43ADA984BD5C8AC7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m0363264647799F3173AC37F8E819F98298249B08_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, float ___2_maxDistanceDelta, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_target;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_current;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_target;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_current;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___1_target;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_current;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___2_maxDistanceDelta;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___2_maxDistanceDelta;
		float L_22 = ___2_maxDistanceDelta;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___1_target;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___0_current;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___0_current;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___0_current;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___2_maxDistanceDelta;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		int32_t L_7 = V_1;
		double L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (double)L_8);
		return;
	}

IL_0034:
	{
		double L_9 = ___0_item;
		((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m918767C5956A2384AA39CBEA32A2A722DE32B2F8_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}

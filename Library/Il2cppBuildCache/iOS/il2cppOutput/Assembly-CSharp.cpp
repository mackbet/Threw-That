#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,trajectory/BodyData>
struct Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rigidbody>
struct IEqualityComparer_1_t41BFB44F2485BE268555D24959C2BE1893ACB3D3;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Rigidbody,trajectory/BodyData>
struct KeyCollection_t9AE835D73250B783881DBD0D82659DCDA5EF190F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Rigidbody,trajectory/BodyData>
struct ValueCollection_t7525A4A1A2FEE47971954C880AA2C4F92D37FC36;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.Rigidbody,trajectory/BodyData>[]
struct EntryU5BU5D_tA3764934E134A64A25467E3FD666112F3844E887;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
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
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// ball
struct ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114;
// canvasButtons
struct canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41;
// gameController
struct gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2;
// movingHoleX
struct movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4;
// movingHoleZ
struct movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886;
// point
struct point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A;
// simulationCollisions
struct simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D;
// trajectory
struct trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;
// trajectory/BodyData
struct BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5;

IL2CPP_EXTERN_C RuntimeClass* BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A;
IL2CPP_EXTERN_C String_t* _stringLiteral61B8D324687C24872968A15276C954F913457113;
IL2CPP_EXTERN_C String_t* _stringLiteral85231F4B1CF342888A6F05DF9C5CC653039D16C8;
IL2CPP_EXTERN_C String_t* _stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932;
IL2CPP_EXTERN_C String_t* _stringLiteral92D5F67DF9B64B6B1F1417F0BB2DE08F66594BF8;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC43CFD1A6286919FECC561A448B806E93905331D;
IL2CPP_EXTERN_C String_t* _stringLiteralD50653F83232F04B0B9CCBDA31F8099A44352C1C;
IL2CPP_EXTERN_C String_t* _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C;
IL2CPP_EXTERN_C String_t* _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_Tispoint_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A_m082EB7B668C6DDD332B7207D4AB867FB290BC9FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TissimulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D_mC151E3AD649B6AA0949509904A5449903F735E9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m53541808378F448A11942ACB183008F5C89D0120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;

struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,trajectory/BodyData>
struct Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA3764934E134A64A25467E3FD666112F3844E887* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9AE835D73250B783881DBD0D82659DCDA5EF190F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7525A4A1A2FEE47971954C880AA2C4F92D37FC36 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___entries_1)); }
	inline EntryU5BU5D_tA3764934E134A64A25467E3FD666112F3844E887* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA3764934E134A64A25467E3FD666112F3844E887** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA3764934E134A64A25467E3FD666112F3844E887* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___keys_7)); }
	inline KeyCollection_t9AE835D73250B783881DBD0D82659DCDA5EF190F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9AE835D73250B783881DBD0D82659DCDA5EF190F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9AE835D73250B783881DBD0D82659DCDA5EF190F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ___values_8)); }
	inline ValueCollection_t7525A4A1A2FEE47971954C880AA2C4F92D37FC36 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7525A4A1A2FEE47971954C880AA2C4F92D37FC36 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7525A4A1A2FEE47971954C880AA2C4F92D37FC36 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<UnityEngine.Rigidbody,trajectory/BodyData>
struct KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660, ___key_0)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_key_0() const { return ___key_0; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660, ___value_1)); }
	inline BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * get_value_1() const { return ___value_1; }
	inline BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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

// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Rigidbody,trajectory/BodyData>
struct Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA, ___dictionary_0)); }
	inline Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA, ___current_3)); }
	inline KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Body_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Body_2)); }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * get_m_Body_2() const { return ___m_Body_2; }
	inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 ** get_address_of_m_Body_2() { return &___m_Body_2; }
	inline void set_m_Body_2(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * value)
	{
		___m_Body_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Body_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * ___m_Body_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
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
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
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


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// trajectory/BodyData
struct BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 trajectory/BodyData::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion trajectory/BodyData::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;
	// UnityEngine.Vector3 trajectory/BodyData::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_2;
	// UnityEngine.Vector3 trajectory/BodyData::angularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___angularVelocity_3;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}

	inline static int32_t get_offset_of_velocity_2() { return static_cast<int32_t>(offsetof(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5, ___velocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_2() const { return ___velocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_2() { return &___velocity_2; }
	inline void set_velocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_2 = value;
	}

	inline static int32_t get_offset_of_angularVelocity_3() { return static_cast<int32_t>(offsetof(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5, ___angularVelocity_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_angularVelocity_3() const { return ___angularVelocity_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_angularVelocity_3() { return &___angularVelocity_3; }
	inline void set_angularVelocity_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___angularVelocity_3 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
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

// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
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

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MeshRenderer
struct MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
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
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ball
struct ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// gameController ball::gameController
	gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * ___gameController_4;
	// UnityEngine.GameObject ball::ballContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ballContainer_5;
	// UnityEngine.AudioSource ball::AudioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___AudioSource_6;
	// System.Boolean ball::collisionChecker
	bool ___collisionChecker_7;
	// System.Boolean ball::touch_platform
	bool ___touch_platform_8;

public:
	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114, ___gameController_4)); }
	inline gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * get_gameController_4() const { return ___gameController_4; }
	inline gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameController_4), (void*)value);
	}

	inline static int32_t get_offset_of_ballContainer_5() { return static_cast<int32_t>(offsetof(ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114, ___ballContainer_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ballContainer_5() const { return ___ballContainer_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ballContainer_5() { return &___ballContainer_5; }
	inline void set_ballContainer_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ballContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_AudioSource_6() { return static_cast<int32_t>(offsetof(ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114, ___AudioSource_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_AudioSource_6() const { return ___AudioSource_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_AudioSource_6() { return &___AudioSource_6; }
	inline void set_AudioSource_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___AudioSource_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AudioSource_6), (void*)value);
	}

	inline static int32_t get_offset_of_collisionChecker_7() { return static_cast<int32_t>(offsetof(ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114, ___collisionChecker_7)); }
	inline bool get_collisionChecker_7() const { return ___collisionChecker_7; }
	inline bool* get_address_of_collisionChecker_7() { return &___collisionChecker_7; }
	inline void set_collisionChecker_7(bool value)
	{
		___collisionChecker_7 = value;
	}

	inline static int32_t get_offset_of_touch_platform_8() { return static_cast<int32_t>(offsetof(ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114, ___touch_platform_8)); }
	inline bool get_touch_platform_8() const { return ___touch_platform_8; }
	inline bool* get_address_of_touch_platform_8() { return &___touch_platform_8; }
	inline void set_touch_platform_8(bool value)
	{
		___touch_platform_8 = value;
	}
};


// canvasButtons
struct canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject canvasButtons::menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menu_4;
	// UnityEngine.GameObject canvasButtons::soundControllCheckbox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___soundControllCheckbox_5;
	// UnityEngine.GameObject canvasButtons::musicsControllCheckbox
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___musicsControllCheckbox_6;
	// UnityEngine.GameObject canvasButtons::music
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___music_7;
	// System.Boolean canvasButtons::started
	bool ___started_8;

public:
	inline static int32_t get_offset_of_menu_4() { return static_cast<int32_t>(offsetof(canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41, ___menu_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menu_4() const { return ___menu_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menu_4() { return &___menu_4; }
	inline void set_menu_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menu_4), (void*)value);
	}

	inline static int32_t get_offset_of_soundControllCheckbox_5() { return static_cast<int32_t>(offsetof(canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41, ___soundControllCheckbox_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_soundControllCheckbox_5() const { return ___soundControllCheckbox_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_soundControllCheckbox_5() { return &___soundControllCheckbox_5; }
	inline void set_soundControllCheckbox_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___soundControllCheckbox_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundControllCheckbox_5), (void*)value);
	}

	inline static int32_t get_offset_of_musicsControllCheckbox_6() { return static_cast<int32_t>(offsetof(canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41, ___musicsControllCheckbox_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_musicsControllCheckbox_6() const { return ___musicsControllCheckbox_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_musicsControllCheckbox_6() { return &___musicsControllCheckbox_6; }
	inline void set_musicsControllCheckbox_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___musicsControllCheckbox_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicsControllCheckbox_6), (void*)value);
	}

	inline static int32_t get_offset_of_music_7() { return static_cast<int32_t>(offsetof(canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41, ___music_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_music_7() const { return ___music_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_music_7() { return &___music_7; }
	inline void set_music_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___music_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___music_7), (void*)value);
	}

	inline static int32_t get_offset_of_started_8() { return static_cast<int32_t>(offsetof(canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41, ___started_8)); }
	inline bool get_started_8() const { return ___started_8; }
	inline bool* get_address_of_started_8() { return &___started_8; }
	inline void set_started_8(bool value)
	{
		___started_8 = value;
	}
};


// gameController
struct gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 gameController::touchPositionStart
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchPositionStart_4;
	// UnityEngine.Vector2 gameController::touchPositionEnd
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchPositionEnd_5;
	// UnityEngine.Vector2 gameController::differenceOfPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___differenceOfPosition_6;
	// UnityEngine.Vector3 gameController::difference
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___difference_7;
	// UnityEngine.Color gameController::colorStart
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorStart_8;
	// UnityEngine.Color gameController::colorEnd
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___colorEnd_9;
	// UnityEngine.Rigidbody gameController::ballRigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___ballRigidbody_10;
	// UnityEngine.UI.Text gameController::bestScoreTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___bestScoreTxt_11;
	// UnityEngine.UI.Text gameController::currentScoreTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentScoreTxt_12;
	// UnityEngine.UI.Text gameController::attemptsCountTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___attemptsCountTxt_13;
	// UnityEngine.UI.Text gameController::result
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___result_14;
	// UnityEngine.GameObject gameController::loseTxt
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loseTxt_15;
	// UnityEngine.GameObject gameController::retry
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___retry_16;
	// UnityEngine.GameObject gameController::platformContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___platformContainer_17;
	// UnityEngine.GameObject gameController::holeContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___holeContainer_18;
	// UnityEngine.GameObject gameController::ballContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ballContainer_19;
	// UnityEngine.GameObject gameController::platformPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___platformPrefab_20;
	// UnityEngine.GameObject gameController::holePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___holePrefab_21;
	// UnityEngine.GameObject gameController::movingHolePrefabX
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___movingHolePrefabX_22;
	// UnityEngine.GameObject gameController::movingHolePrefabZ
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___movingHolePrefabZ_23;
	// UnityEngine.GameObject gameController::ballPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ballPrefab_24;
	// UnityEngine.GameObject gameController::arrow
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___arrow_25;
	// UnityEngine.GameObject gameController::cam
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cam_26;
	// UnityEngine.GameObject gameController::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_27;
	// UnityEngine.GameObject gameController::hand
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___hand_28;
	// UnityEngine.GameObject gameController::openMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___openMenu_29;
	// UnityEngine.RectTransform gameController::RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___RectTransform_30;
	// UnityEngine.AudioSource gameController::win
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___win_31;
	// UnityEngine.AudioSource gameController::lose
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___lose_32;
	// UnityEngine.Vector3 gameController::platformPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___platformPosition_33;
	// UnityEngine.Vector3 gameController::holePosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___holePosition_34;
	// UnityEngine.Vector3 gameController::ballPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___ballPosition_35;
	// UnityEngine.Vector3 gameController::cameraNewPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___cameraNewPosition_36;
	// System.Int32 gameController::lastLevel
	int32_t ___lastLevel_37;
	// System.Int32 gameController::level
	int32_t ___level_38;
	// System.Int32 gameController::currentScore
	int32_t ___currentScore_39;
	// System.Int32 gameController::bestScore
	int32_t ___bestScore_40;
	// System.Int32 gameController::attempts
	int32_t ___attempts_41;
	// System.Int32 gameController::hardLevel
	int32_t ___hardLevel_42;
	// System.Boolean gameController::camIsMoving
	bool ___camIsMoving_43;
	// System.Boolean gameController::simulating
	bool ___simulating_44;
	// System.Boolean gameController::autoWin
	bool ___autoWin_45;
	// System.Single gameController::speedOfCamera
	float ___speedOfCamera_46;
	// System.Single gameController::step
	float ___step_47;
	// System.Single gameController::maxForce
	float ___maxForce_48;
	// System.Single gameController::screenWidth
	float ___screenWidth_49;
	// System.Single gameController::screenHeight
	float ___screenHeight_50;
	// UnityEngine.GameObject gameController::ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ball_51;
	// trajectory gameController::Trajectory
	trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * ___Trajectory_52;

public:
	inline static int32_t get_offset_of_touchPositionStart_4() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___touchPositionStart_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchPositionStart_4() const { return ___touchPositionStart_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchPositionStart_4() { return &___touchPositionStart_4; }
	inline void set_touchPositionStart_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchPositionStart_4 = value;
	}

	inline static int32_t get_offset_of_touchPositionEnd_5() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___touchPositionEnd_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchPositionEnd_5() const { return ___touchPositionEnd_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchPositionEnd_5() { return &___touchPositionEnd_5; }
	inline void set_touchPositionEnd_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchPositionEnd_5 = value;
	}

	inline static int32_t get_offset_of_differenceOfPosition_6() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___differenceOfPosition_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_differenceOfPosition_6() const { return ___differenceOfPosition_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_differenceOfPosition_6() { return &___differenceOfPosition_6; }
	inline void set_differenceOfPosition_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___differenceOfPosition_6 = value;
	}

	inline static int32_t get_offset_of_difference_7() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___difference_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_difference_7() const { return ___difference_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_difference_7() { return &___difference_7; }
	inline void set_difference_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___difference_7 = value;
	}

	inline static int32_t get_offset_of_colorStart_8() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___colorStart_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorStart_8() const { return ___colorStart_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorStart_8() { return &___colorStart_8; }
	inline void set_colorStart_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorStart_8 = value;
	}

	inline static int32_t get_offset_of_colorEnd_9() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___colorEnd_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_colorEnd_9() const { return ___colorEnd_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_colorEnd_9() { return &___colorEnd_9; }
	inline void set_colorEnd_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___colorEnd_9 = value;
	}

	inline static int32_t get_offset_of_ballRigidbody_10() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___ballRigidbody_10)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_ballRigidbody_10() const { return ___ballRigidbody_10; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_ballRigidbody_10() { return &___ballRigidbody_10; }
	inline void set_ballRigidbody_10(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___ballRigidbody_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballRigidbody_10), (void*)value);
	}

	inline static int32_t get_offset_of_bestScoreTxt_11() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___bestScoreTxt_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_bestScoreTxt_11() const { return ___bestScoreTxt_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_bestScoreTxt_11() { return &___bestScoreTxt_11; }
	inline void set_bestScoreTxt_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___bestScoreTxt_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestScoreTxt_11), (void*)value);
	}

	inline static int32_t get_offset_of_currentScoreTxt_12() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___currentScoreTxt_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentScoreTxt_12() const { return ___currentScoreTxt_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentScoreTxt_12() { return &___currentScoreTxt_12; }
	inline void set_currentScoreTxt_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentScoreTxt_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentScoreTxt_12), (void*)value);
	}

	inline static int32_t get_offset_of_attemptsCountTxt_13() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___attemptsCountTxt_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_attemptsCountTxt_13() const { return ___attemptsCountTxt_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_attemptsCountTxt_13() { return &___attemptsCountTxt_13; }
	inline void set_attemptsCountTxt_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___attemptsCountTxt_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attemptsCountTxt_13), (void*)value);
	}

	inline static int32_t get_offset_of_result_14() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___result_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_result_14() const { return ___result_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_result_14() { return &___result_14; }
	inline void set_result_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___result_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_14), (void*)value);
	}

	inline static int32_t get_offset_of_loseTxt_15() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___loseTxt_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loseTxt_15() const { return ___loseTxt_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loseTxt_15() { return &___loseTxt_15; }
	inline void set_loseTxt_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loseTxt_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loseTxt_15), (void*)value);
	}

	inline static int32_t get_offset_of_retry_16() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___retry_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_retry_16() const { return ___retry_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_retry_16() { return &___retry_16; }
	inline void set_retry_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___retry_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retry_16), (void*)value);
	}

	inline static int32_t get_offset_of_platformContainer_17() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___platformContainer_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_platformContainer_17() const { return ___platformContainer_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_platformContainer_17() { return &___platformContainer_17; }
	inline void set_platformContainer_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___platformContainer_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformContainer_17), (void*)value);
	}

	inline static int32_t get_offset_of_holeContainer_18() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___holeContainer_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_holeContainer_18() const { return ___holeContainer_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_holeContainer_18() { return &___holeContainer_18; }
	inline void set_holeContainer_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___holeContainer_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holeContainer_18), (void*)value);
	}

	inline static int32_t get_offset_of_ballContainer_19() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___ballContainer_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ballContainer_19() const { return ___ballContainer_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ballContainer_19() { return &___ballContainer_19; }
	inline void set_ballContainer_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ballContainer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballContainer_19), (void*)value);
	}

	inline static int32_t get_offset_of_platformPrefab_20() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___platformPrefab_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_platformPrefab_20() const { return ___platformPrefab_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_platformPrefab_20() { return &___platformPrefab_20; }
	inline void set_platformPrefab_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___platformPrefab_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platformPrefab_20), (void*)value);
	}

	inline static int32_t get_offset_of_holePrefab_21() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___holePrefab_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_holePrefab_21() const { return ___holePrefab_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_holePrefab_21() { return &___holePrefab_21; }
	inline void set_holePrefab_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___holePrefab_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holePrefab_21), (void*)value);
	}

	inline static int32_t get_offset_of_movingHolePrefabX_22() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___movingHolePrefabX_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_movingHolePrefabX_22() const { return ___movingHolePrefabX_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_movingHolePrefabX_22() { return &___movingHolePrefabX_22; }
	inline void set_movingHolePrefabX_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___movingHolePrefabX_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movingHolePrefabX_22), (void*)value);
	}

	inline static int32_t get_offset_of_movingHolePrefabZ_23() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___movingHolePrefabZ_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_movingHolePrefabZ_23() const { return ___movingHolePrefabZ_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_movingHolePrefabZ_23() { return &___movingHolePrefabZ_23; }
	inline void set_movingHolePrefabZ_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___movingHolePrefabZ_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movingHolePrefabZ_23), (void*)value);
	}

	inline static int32_t get_offset_of_ballPrefab_24() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___ballPrefab_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ballPrefab_24() const { return ___ballPrefab_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ballPrefab_24() { return &___ballPrefab_24; }
	inline void set_ballPrefab_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ballPrefab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballPrefab_24), (void*)value);
	}

	inline static int32_t get_offset_of_arrow_25() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___arrow_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_arrow_25() const { return ___arrow_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_arrow_25() { return &___arrow_25; }
	inline void set_arrow_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___arrow_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrow_25), (void*)value);
	}

	inline static int32_t get_offset_of_cam_26() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___cam_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cam_26() const { return ___cam_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cam_26() { return &___cam_26; }
	inline void set_cam_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cam_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_26), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_27() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___canvas_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_27() const { return ___canvas_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_27() { return &___canvas_27; }
	inline void set_canvas_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_27), (void*)value);
	}

	inline static int32_t get_offset_of_hand_28() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___hand_28)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_hand_28() const { return ___hand_28; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_hand_28() { return &___hand_28; }
	inline void set_hand_28(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___hand_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hand_28), (void*)value);
	}

	inline static int32_t get_offset_of_openMenu_29() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___openMenu_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_openMenu_29() const { return ___openMenu_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_openMenu_29() { return &___openMenu_29; }
	inline void set_openMenu_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___openMenu_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___openMenu_29), (void*)value);
	}

	inline static int32_t get_offset_of_RectTransform_30() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___RectTransform_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_RectTransform_30() const { return ___RectTransform_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_RectTransform_30() { return &___RectTransform_30; }
	inline void set_RectTransform_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___RectTransform_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RectTransform_30), (void*)value);
	}

	inline static int32_t get_offset_of_win_31() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___win_31)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_win_31() const { return ___win_31; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_win_31() { return &___win_31; }
	inline void set_win_31(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___win_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win_31), (void*)value);
	}

	inline static int32_t get_offset_of_lose_32() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___lose_32)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_lose_32() const { return ___lose_32; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_lose_32() { return &___lose_32; }
	inline void set_lose_32(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___lose_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lose_32), (void*)value);
	}

	inline static int32_t get_offset_of_platformPosition_33() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___platformPosition_33)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_platformPosition_33() const { return ___platformPosition_33; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_platformPosition_33() { return &___platformPosition_33; }
	inline void set_platformPosition_33(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___platformPosition_33 = value;
	}

	inline static int32_t get_offset_of_holePosition_34() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___holePosition_34)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_holePosition_34() const { return ___holePosition_34; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_holePosition_34() { return &___holePosition_34; }
	inline void set_holePosition_34(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___holePosition_34 = value;
	}

	inline static int32_t get_offset_of_ballPosition_35() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___ballPosition_35)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_ballPosition_35() const { return ___ballPosition_35; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_ballPosition_35() { return &___ballPosition_35; }
	inline void set_ballPosition_35(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___ballPosition_35 = value;
	}

	inline static int32_t get_offset_of_cameraNewPosition_36() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___cameraNewPosition_36)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_cameraNewPosition_36() const { return ___cameraNewPosition_36; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_cameraNewPosition_36() { return &___cameraNewPosition_36; }
	inline void set_cameraNewPosition_36(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___cameraNewPosition_36 = value;
	}

	inline static int32_t get_offset_of_lastLevel_37() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___lastLevel_37)); }
	inline int32_t get_lastLevel_37() const { return ___lastLevel_37; }
	inline int32_t* get_address_of_lastLevel_37() { return &___lastLevel_37; }
	inline void set_lastLevel_37(int32_t value)
	{
		___lastLevel_37 = value;
	}

	inline static int32_t get_offset_of_level_38() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___level_38)); }
	inline int32_t get_level_38() const { return ___level_38; }
	inline int32_t* get_address_of_level_38() { return &___level_38; }
	inline void set_level_38(int32_t value)
	{
		___level_38 = value;
	}

	inline static int32_t get_offset_of_currentScore_39() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___currentScore_39)); }
	inline int32_t get_currentScore_39() const { return ___currentScore_39; }
	inline int32_t* get_address_of_currentScore_39() { return &___currentScore_39; }
	inline void set_currentScore_39(int32_t value)
	{
		___currentScore_39 = value;
	}

	inline static int32_t get_offset_of_bestScore_40() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___bestScore_40)); }
	inline int32_t get_bestScore_40() const { return ___bestScore_40; }
	inline int32_t* get_address_of_bestScore_40() { return &___bestScore_40; }
	inline void set_bestScore_40(int32_t value)
	{
		___bestScore_40 = value;
	}

	inline static int32_t get_offset_of_attempts_41() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___attempts_41)); }
	inline int32_t get_attempts_41() const { return ___attempts_41; }
	inline int32_t* get_address_of_attempts_41() { return &___attempts_41; }
	inline void set_attempts_41(int32_t value)
	{
		___attempts_41 = value;
	}

	inline static int32_t get_offset_of_hardLevel_42() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___hardLevel_42)); }
	inline int32_t get_hardLevel_42() const { return ___hardLevel_42; }
	inline int32_t* get_address_of_hardLevel_42() { return &___hardLevel_42; }
	inline void set_hardLevel_42(int32_t value)
	{
		___hardLevel_42 = value;
	}

	inline static int32_t get_offset_of_camIsMoving_43() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___camIsMoving_43)); }
	inline bool get_camIsMoving_43() const { return ___camIsMoving_43; }
	inline bool* get_address_of_camIsMoving_43() { return &___camIsMoving_43; }
	inline void set_camIsMoving_43(bool value)
	{
		___camIsMoving_43 = value;
	}

	inline static int32_t get_offset_of_simulating_44() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___simulating_44)); }
	inline bool get_simulating_44() const { return ___simulating_44; }
	inline bool* get_address_of_simulating_44() { return &___simulating_44; }
	inline void set_simulating_44(bool value)
	{
		___simulating_44 = value;
	}

	inline static int32_t get_offset_of_autoWin_45() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___autoWin_45)); }
	inline bool get_autoWin_45() const { return ___autoWin_45; }
	inline bool* get_address_of_autoWin_45() { return &___autoWin_45; }
	inline void set_autoWin_45(bool value)
	{
		___autoWin_45 = value;
	}

	inline static int32_t get_offset_of_speedOfCamera_46() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___speedOfCamera_46)); }
	inline float get_speedOfCamera_46() const { return ___speedOfCamera_46; }
	inline float* get_address_of_speedOfCamera_46() { return &___speedOfCamera_46; }
	inline void set_speedOfCamera_46(float value)
	{
		___speedOfCamera_46 = value;
	}

	inline static int32_t get_offset_of_step_47() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___step_47)); }
	inline float get_step_47() const { return ___step_47; }
	inline float* get_address_of_step_47() { return &___step_47; }
	inline void set_step_47(float value)
	{
		___step_47 = value;
	}

	inline static int32_t get_offset_of_maxForce_48() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___maxForce_48)); }
	inline float get_maxForce_48() const { return ___maxForce_48; }
	inline float* get_address_of_maxForce_48() { return &___maxForce_48; }
	inline void set_maxForce_48(float value)
	{
		___maxForce_48 = value;
	}

	inline static int32_t get_offset_of_screenWidth_49() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___screenWidth_49)); }
	inline float get_screenWidth_49() const { return ___screenWidth_49; }
	inline float* get_address_of_screenWidth_49() { return &___screenWidth_49; }
	inline void set_screenWidth_49(float value)
	{
		___screenWidth_49 = value;
	}

	inline static int32_t get_offset_of_screenHeight_50() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___screenHeight_50)); }
	inline float get_screenHeight_50() const { return ___screenHeight_50; }
	inline float* get_address_of_screenHeight_50() { return &___screenHeight_50; }
	inline void set_screenHeight_50(float value)
	{
		___screenHeight_50 = value;
	}

	inline static int32_t get_offset_of_ball_51() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___ball_51)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ball_51() const { return ___ball_51; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ball_51() { return &___ball_51; }
	inline void set_ball_51(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ball_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ball_51), (void*)value);
	}

	inline static int32_t get_offset_of_Trajectory_52() { return static_cast<int32_t>(offsetof(gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2, ___Trajectory_52)); }
	inline trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * get_Trajectory_52() const { return ___Trajectory_52; }
	inline trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 ** get_address_of_Trajectory_52() { return &___Trajectory_52; }
	inline void set_Trajectory_52(trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * value)
	{
		___Trajectory_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Trajectory_52), (void*)value);
	}
};


// movingHoleX
struct movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 movingHoleX::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_4;
	// System.Random movingHoleX::rand
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rand_5;
	// System.Single movingHoleX::speed
	float ___speed_6;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4, ___direction_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_4() const { return ___direction_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_rand_5() { return static_cast<int32_t>(offsetof(movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4, ___rand_5)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rand_5() const { return ___rand_5; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rand_5() { return &___rand_5; }
	inline void set_rand_5(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rand_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}
};


// movingHoleZ
struct movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector3 movingHoleZ::direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction_4;
	// System.Random movingHoleZ::rand
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rand_5;
	// System.Single movingHoleZ::speed
	float ___speed_6;
	// System.Single movingHoleZ::dif
	float ___dif_7;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886, ___direction_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_direction_4() const { return ___direction_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_rand_5() { return static_cast<int32_t>(offsetof(movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886, ___rand_5)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rand_5() const { return ___rand_5; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rand_5() { return &___rand_5; }
	inline void set_rand_5(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rand_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rand_5), (void*)value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_dif_7() { return static_cast<int32_t>(offsetof(movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886, ___dif_7)); }
	inline float get_dif_7() const { return ___dif_7; }
	inline float* get_address_of_dif_7() { return &___dif_7; }
	inline void set_dif_7(float value)
	{
		___dif_7 = value;
	}
};


// point
struct point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean point::hit
	bool ___hit_4;

public:
	inline static int32_t get_offset_of_hit_4() { return static_cast<int32_t>(offsetof(point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A, ___hit_4)); }
	inline bool get_hit_4() const { return ___hit_4; }
	inline bool* get_address_of_hit_4() { return &___hit_4; }
	inline void set_hit_4(bool value)
	{
		___hit_4 = value;
	}
};


// simulationCollisions
struct simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean simulationCollisions::collisionChecker
	bool ___collisionChecker_4;

public:
	inline static int32_t get_offset_of_collisionChecker_4() { return static_cast<int32_t>(offsetof(simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D, ___collisionChecker_4)); }
	inline bool get_collisionChecker_4() const { return ___collisionChecker_4; }
	inline bool* get_address_of_collisionChecker_4() { return &___collisionChecker_4; }
	inline void set_collisionChecker_4(bool value)
	{
		___collisionChecker_4 = value;
	}
};


// trajectory
struct trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject trajectory::simulatingPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___simulatingPrefab_4;
	// UnityEngine.GameObject trajectory::ballContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ballContainer_5;
	// UnityEngine.GameObject trajectory::holeContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___holeContainer_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,trajectory/BodyData> trajectory::savedBodies
	Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * ___savedBodies_7;
	// System.Int32 trajectory::maxIterations
	int32_t ___maxIterations_8;

public:
	inline static int32_t get_offset_of_simulatingPrefab_4() { return static_cast<int32_t>(offsetof(trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509, ___simulatingPrefab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_simulatingPrefab_4() const { return ___simulatingPrefab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_simulatingPrefab_4() { return &___simulatingPrefab_4; }
	inline void set_simulatingPrefab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___simulatingPrefab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___simulatingPrefab_4), (void*)value);
	}

	inline static int32_t get_offset_of_ballContainer_5() { return static_cast<int32_t>(offsetof(trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509, ___ballContainer_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ballContainer_5() const { return ___ballContainer_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ballContainer_5() { return &___ballContainer_5; }
	inline void set_ballContainer_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ballContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ballContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_holeContainer_6() { return static_cast<int32_t>(offsetof(trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509, ___holeContainer_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_holeContainer_6() const { return ___holeContainer_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_holeContainer_6() { return &___holeContainer_6; }
	inline void set_holeContainer_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___holeContainer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holeContainer_6), (void*)value);
	}

	inline static int32_t get_offset_of_savedBodies_7() { return static_cast<int32_t>(offsetof(trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509, ___savedBodies_7)); }
	inline Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * get_savedBodies_7() const { return ___savedBodies_7; }
	inline Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F ** get_address_of_savedBodies_7() { return &___savedBodies_7; }
	inline void set_savedBodies_7(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * value)
	{
		___savedBodies_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedBodies_7), (void*)value);
	}

	inline static int32_t get_offset_of_maxIterations_8() { return static_cast<int32_t>(offsetof(trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509, ___maxIterations_8)); }
	inline int32_t get_maxIterations_8() const { return ___maxIterations_8; }
	inline int32_t* get_address_of_maxIterations_8() { return &___maxIterations_8; }
	inline void set_maxIterations_8(int32_t value)
	{
		___maxIterations_8 = value;
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// UnityEngine.Rigidbody[]
struct RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * m_Items[1];

public:
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Collision::get_impulse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Collision_get_impulse_mFE116E37D020B0E28DBE48A96B3FFF41A8E44E98 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision_get_transform_m1026DF994801C6DBB9F3F5E325107FE278517C10 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ball>()
inline ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void gameController::checkLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_checkLose_m12496E426D2BAAD4AF095F5E4B4B36FC78523820 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507 (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// System.Void gameController::updateIndicators()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_updateIndicators_m80D411E900331584ACD066A72EB65F9A5E7825EB (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::playWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_playWin_m3411ACF719FA3ADF9399D12BEA2FAF057E83C964 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::addPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_addPlatform_mCDAC50FD3240C5E5D3A48F71F2A8C712D2AA0D52 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::addHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_addHole_m57963D84DBD2B33F1DE68F2AA11B785EEE46B32F (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Void gameController::clearBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_clearBall_mBC1C9E800FB46540FB8046A7213B2920C8405117 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::clearPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_clearPlatform_m23498076B07399749104643C1FF8D9AAFE669191 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::clearHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_clearHole_mEAC221A787AD79B2242D5C90DEA9AFDFC97D90C0 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::newBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_newBall_m702E3D604079C97E6D422B580B022E66B85E2B64 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void gameController::controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_controller_m158C327FCA12A378FDDDFA186F3270A37A40275C (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Single gameController::newDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float gameController_newDistance_m755507EAC6600102BB28F662C821923E1BD73DDE (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Int32 gameController::random_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gameController_random_X_m50BD268F9FC5B31C1222A6C0150F1623F4EC305B (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void gameController::rotateArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_rotateArrow_mFBDCA35D997155913FF1098D0E21593650512FD9 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::resizeArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_resizeArrow_m3DA5CB4331A8DEFB959390112D16CC998FC9DCDF (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Void gameController::paintArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_paintArrow_mE710F3F53D1A9FF6056EE0EEA21D016708D4228B (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Single gameController::getAngleFromVector2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float gameController_getAngleFromVector2_m22A6E2B1910AA164F4A0ED9CB848891B98DA6FFA (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p_vector20, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::AddRelativeTorque(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddRelativeTorque_m088537EE9F7B75DC820FDFDE1CDCFCAAF7214CD9 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void gameController::playLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_playLose_mB71FD451E9B999F78C3EA3B86FC13EA28B9A0627 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ball>()
inline ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void trajectory/BodyData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyData__ctor_mCA56704AB5CCC8FBE70FF6D491FB8AA74574C085 (BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,trajectory/BodyData>::Add(!0,!1)
inline void Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75 (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___key0, BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F *, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *, BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,trajectory/BodyData>::.ctor()
inline void Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4 (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Rigidbody>()
inline RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* Object_FindObjectsOfType_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m53541808378F448A11942ACB183008F5C89D0120 (const RuntimeMethod* method)
{
	return ((  RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Rigidbody,trajectory/BodyData>::GetEnumerator()
inline Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA  Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42 (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA  (*) (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Rigidbody,trajectory/BodyData>::get_Current()
inline KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_inline (Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  (*) (Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<UnityEngine.Rigidbody,trajectory/BodyData>::get_Value()
inline BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline (KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 * __this, const RuntimeMethod* method)
{
	return ((  BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * (*) (KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Rigidbody,trajectory/BodyData>::get_Key()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline (KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_angularVelocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Rigidbody,trajectory/BodyData>::MoveNext()
inline bool Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D (Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Rigidbody,trajectory/BodyData>::Dispose()
inline void Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9 (Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// System.Void UnityEngine.Physics::set_autoSimulation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_set_autoSimulation_mB36DD41F15B4BDC92CD9F6A59F2C8FD052E294DF (bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<simulationCollisions>()
inline simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * GameObject_GetComponent_TissimulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D_mC151E3AD649B6AA0949509904A5449903F735E9E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_angularVelocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Physics::Simulate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_Simulate_m31460BDCDC045AB4EBFF6A93220CE651466B44E7 (float ___step0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<point>()
inline point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * Component_GetComponent_Tispoint_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A_m082EB7B668C6DDD332B7207D4AB867FB290BC9FF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
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
// System.Void ball::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball_Start_m83BB573318E2793C33569F1605EDF8C8D3EF08CC (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_AudioSource_6(L_1);
		// }
		return;
	}
}
// System.Void ball::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball_Update_m02E1C77A09470B1F99ACF986D92A5FD5B480D9AD (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.transform.position.y < -10)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		if ((!(((float)L_3) < ((float)(-10.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ball::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball_OnTriggerEnter_m18BA7D5340378F84F060E00C12677B77671A61CF (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B8D324687C24872968A15276C954F913457113);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "point" && gameController.simulating == false && touch_platform == false)
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral61B8D324687C24872968A15276C954F913457113, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_004b;
		}
	}
	{
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_4 = __this->get_gameController_4();
		NullCheck(L_4);
		bool L_5 = L_4->get_simulating_44();
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		bool L_6 = __this->get_touch_platform_8();
		if (L_6)
		{
			goto IL_004b;
		}
	}
	{
		// gameController.level++;
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_7 = __this->get_gameController_4();
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_level_38();
		NullCheck(L_8);
		L_8->set_level_38(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		// Destroy(other.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_10 = ___other0;
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// collisionChecker = true;
		__this->set_collisionChecker_7((bool)1);
		// }
		return;
	}
}
// System.Void ball::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball_OnCollisionEnter_m311CB4D107CC0BCA5306EFCF2C2623D19D7BB604 (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// if (gameObject.transform.position != gameController.ballPosition && gameController.simulating == false && PlayerPrefs.GetString("sounds") != "No")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_3 = __this->get_gameController_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3->get_ballPosition_35();
		bool L_5;
		L_5 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_2, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0071;
		}
	}
	{
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_6 = __this->get_gameController_4();
		NullCheck(L_6);
		bool L_7 = L_6->get_simulating_44();
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_8, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// float volume = collision.impulse.magnitude / 20f;
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_10 = ___collision0;
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Collision_get_impulse_mFE116E37D020B0E28DBE48A96B3FFF41A8E44E98(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		V_0 = ((float)((float)L_12/(float)(20.0f)));
		// AudioSource.volume = volume;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = __this->get_AudioSource_6();
		float L_14 = V_0;
		NullCheck(L_13);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_13, L_14, /*hidden argument*/NULL);
		// AudioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_15 = __this->get_AudioSource_6();
		NullCheck(L_15);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_15, /*hidden argument*/NULL);
	}

IL_0071:
	{
		// if (gameObject.transform.position.z - gameController.ballPosition.z > 1 && collision.transform.tag == "platform" && touch_platform == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_20 = __this->get_gameController_4();
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_21 = L_20->get_address_of_ballPosition_35();
		float L_22 = L_21->get_z_4();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_22))) > ((float)(1.0f)))))
		{
			goto IL_013d;
		}
	}
	{
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_23 = ___collision0;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Collision_get_transform_m1026DF994801C6DBB9F3F5E325107FE278517C10(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_013d;
		}
	}
	{
		bool L_27 = __this->get_touch_platform_8();
		if (L_27)
		{
			goto IL_013d;
		}
	}
	{
		// gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_29;
		L_29 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_28, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_29);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30;
		L_30 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_29, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_31;
		L_31 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_30);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_30, L_31, /*hidden argument*/NULL);
		// touch_platform = true;
		__this->set_touch_platform_8((bool)1);
		// if (gameController.attempts == 0)
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_32 = __this->get_gameController_4();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_attempts_41();
		if (L_33)
		{
			goto IL_013d;
		}
	}
	{
		// bool fg = true;
		V_2 = (bool)1;
		// for(int i = 0; i < ballContainer.transform.childCount; i++)
		V_3 = 0;
		goto IL_011c;
	}

IL_00f7:
	{
		// if(ballContainer.transform.GetChild(i).GetComponent<ball>().touch_platform == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = __this->get_ballContainer_5();
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		int32_t L_36 = V_3;
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * L_38;
		L_38 = Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6(L_37, /*hidden argument*/Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6_RuntimeMethod_var);
		NullCheck(L_38);
		bool L_39 = L_38->get_touch_platform_8();
		if (L_39)
		{
			goto IL_0118;
		}
	}
	{
		// fg = false;
		V_2 = (bool)0;
		// break;
		goto IL_012f;
	}

IL_0118:
	{
		// for(int i = 0; i < ballContainer.transform.childCount; i++)
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_011c:
	{
		// for(int i = 0; i < ballContainer.transform.childCount; i++)
		int32_t L_41 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = __this->get_ballContainer_5();
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		int32_t L_44;
		L_44 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_43, /*hidden argument*/NULL);
		if ((((int32_t)L_41) < ((int32_t)L_44)))
		{
			goto IL_00f7;
		}
	}

IL_012f:
	{
		// if (fg)
		bool L_45 = V_2;
		if (!L_45)
		{
			goto IL_013d;
		}
	}
	{
		// gameController.checkLose();
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_46 = __this->get_gameController_4();
		NullCheck(L_46);
		gameController_checkLose_m12496E426D2BAAD4AF095F5E4B4B36FC78523820(L_46, /*hidden argument*/NULL);
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Void ball::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball_OnCollisionStay_m42BD397A342FE3D13E2737AE1016AFF3A9398227 (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (gameObject.transform.position.z - gameController.ballPosition.z > 1 && collision.transform.tag == "platform" && touch_platform == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_4 = __this->get_gameController_4();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = L_4->get_address_of_ballPosition_35();
		float L_6 = L_5->get_z_4();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_6))) > ((float)(1.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_7 = ___collision0;
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Collision_get_transform_m1026DF994801C6DBB9F3F5E325107FE278517C10(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteralB2F9235F4F063A8609A1E74346AC3F275A7303EE, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00cc;
		}
	}
	{
		bool L_11 = __this->get_touch_platform_8();
		if (L_11)
		{
			goto IL_00cc;
		}
	}
	{
		// gameObject.GetComponent<MeshRenderer>().material.color = Color.red;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		MeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B * L_13;
		L_13 = GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B(L_12, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m4E244CD0EBBF9E0A3A73AF14F6EC434CA82E6F4B_RuntimeMethod_var);
		NullCheck(L_13);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14;
		L_14 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_13, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		NullCheck(L_14);
		Material_set_color_mC3C88E2389B7132EBF3EB0D1F040545176B795C0(L_14, L_15, /*hidden argument*/NULL);
		// touch_platform = true;
		__this->set_touch_platform_8((bool)1);
		// if (gameController.attempts == 0)
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_16 = __this->get_gameController_4();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_attempts_41();
		if (L_17)
		{
			goto IL_00cc;
		}
	}
	{
		// bool fg = true;
		V_0 = (bool)1;
		// for (int i = 0; i < ballContainer.transform.childCount; i++)
		V_1 = 0;
		goto IL_00ab;
	}

IL_0086:
	{
		// if (ballContainer.transform.GetChild(i).GetComponent<ball>().touch_platform == false)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_ballContainer_5();
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * L_22;
		L_22 = Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6(L_21, /*hidden argument*/Component_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mBB16A1E52AE15FAB8E6DE120DC759DEE3EE7F2B6_RuntimeMethod_var);
		NullCheck(L_22);
		bool L_23 = L_22->get_touch_platform_8();
		if (L_23)
		{
			goto IL_00a7;
		}
	}
	{
		// fg = false;
		V_0 = (bool)0;
		// break;
		goto IL_00be;
	}

IL_00a7:
	{
		// for (int i = 0; i < ballContainer.transform.childCount; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00ab:
	{
		// for (int i = 0; i < ballContainer.transform.childCount; i++)
		int32_t L_25 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_ballContainer_5();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_0086;
		}
	}

IL_00be:
	{
		// if (fg)
		bool L_29 = V_0;
		if (!L_29)
		{
			goto IL_00cc;
		}
	}
	{
		// gameController.checkLose();
		gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * L_30 = __this->get_gameController_4();
		NullCheck(L_30);
		gameController_checkLose_m12496E426D2BAAD4AF095F5E4B4B36FC78523820(L_30, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		// }
		return;
	}
}
// System.Void ball::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball_OnDrawGizmos_mB882F46CDD6A61E958BC0D58091F31EC574E42F1 (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ball__ctor_mB0D5A18FEC9519AA2883D78D1B673A1B14AC0619 (ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * __this, const RuntimeMethod* method)
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
// System.Void canvasButtons::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_Start_mEB5C85EC2235F024FAE748DAED2706EC68851FAA (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetString("sounds") == "No")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// soundControllCheckbox.GetComponent<Toggle>().isOn = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_soundControllCheckbox_5();
		NullCheck(L_2);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_3;
		L_3 = GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49(L_2, /*hidden argument*/GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49_RuntimeMethod_var);
		NullCheck(L_3);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_003a;
	}

IL_0029:
	{
		// soundControllCheckbox.GetComponent<Toggle>().isOn = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_soundControllCheckbox_5();
		NullCheck(L_4);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_5;
		L_5 = GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49(L_4, /*hidden argument*/GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49_RuntimeMethod_var);
		NullCheck(L_5);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if (PlayerPrefs.GetString("musics") == "No")
		String_t* L_6;
		L_6 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A, /*hidden argument*/NULL);
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0078;
		}
	}
	{
		// musicsControllCheckbox.GetComponent<Toggle>().isOn = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_musicsControllCheckbox_6();
		NullCheck(L_8);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_9;
		L_9 = GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49(L_8, /*hidden argument*/GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49_RuntimeMethod_var);
		NullCheck(L_9);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_9, (bool)0, /*hidden argument*/NULL);
		// music.GetComponent<AudioSource>().volume = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_music_7();
		NullCheck(L_10);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11;
		L_11 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_10, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_11);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_11, (0.0f), /*hidden argument*/NULL);
		// }
		goto IL_0089;
	}

IL_0078:
	{
		// musicsControllCheckbox.GetComponent<Toggle>().isOn = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_musicsControllCheckbox_6();
		NullCheck(L_12);
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_13;
		L_13 = GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49(L_12, /*hidden argument*/GameObject_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_m34CD4077023A1701311E3E7D5B0A9E6EE1979A49_RuntimeMethod_var);
		NullCheck(L_13);
		Toggle_set_isOn_mB018B9F410D7236AAB71D6D1A5BACC64C891F507(L_13, (bool)1, /*hidden argument*/NULL);
	}

IL_0089:
	{
		// started = true;
		__this->set_started_8((bool)1);
		// }
		return;
	}
}
// System.Void canvasButtons::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_Update_m903E9C4446B3DAFA667C243E9B141D6D180C8DCA (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void canvasButtons::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_Retry_m16665F9B51277D3D4607AC1C6D2FAC910C34E5CF (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void canvasButtons::OpenMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_OpenMenu_mE520919651762946AA84A754B3B8A5F2A0A8ED56 (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	{
		// menu.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_menu_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void canvasButtons::CloseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_CloseMenu_m91F0A7FD1FFEE84BF8CA90C4A0E7890353D315D2 (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	{
		// menu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_menu_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void canvasButtons::SoundsControll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_SoundsControll_mD1BE8CE0C9F6EDFC3B5730AD2DC4E34672FA42C7 (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC43CFD1A6286919FECC561A448B806E93905331D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50653F83232F04B0B9CCBDA31F8099A44352C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (started == true) {
		bool L_0 = __this->get_started_8();
		if (!L_0)
		{
			goto IL_005b;
		}
	}
	{
		// Debug.Log("click");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetString("sounds") == "No")
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0042;
		}
	}
	{
		// PlayerPrefs.SetString("sounds", "Yes");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C, /*hidden argument*/NULL);
		// Debug.Log("Sounds Yes");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD50653F83232F04B0B9CCBDA31F8099A44352C1C, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0042:
	{
		// PlayerPrefs.SetString("sounds", "No");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		// Debug.Log("Sounds No");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC43CFD1A6286919FECC561A448B806E93905331D, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void canvasButtons::MusicsControll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons_MusicsControll_m6313293171419C951F87BD8CE6D0F80E76C201CA (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85231F4B1CF342888A6F05DF9C5CC653039D16C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92D5F67DF9B64B6B1F1417F0BB2DE08F66594BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (started == true)
		bool L_0 = __this->get_started_8();
		if (!L_0)
		{
			goto IL_0085;
		}
	}
	{
		// Debug.Log("click");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetString("musics") == "No")
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0057;
		}
	}
	{
		// PlayerPrefs.SetString("musics", "Yes");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A, _stringLiteralD61A403A62E3B406C2482F9CD3ABA7CF782E649C, /*hidden argument*/NULL);
		// music.GetComponent<AudioSource>().volume = 1f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_music_7();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4;
		L_4 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_3, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, (1.0f), /*hidden argument*/NULL);
		// Debug.Log("Musics Yes");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral85231F4B1CF342888A6F05DF9C5CC653039D16C8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0057:
	{
		// PlayerPrefs.SetString("musics", "No");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		// music.GetComponent<AudioSource>().volume = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_music_7();
		NullCheck(L_5);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6;
		L_6 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_5, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		NullCheck(L_6);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_6, (0.0f), /*hidden argument*/NULL);
		// Debug.Log("Musics No");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral92D5F67DF9B64B6B1F1417F0BB2DE08F66594BF8, /*hidden argument*/NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void canvasButtons::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void canvasButtons__ctor_m81DEAD5CA2CF70D969AFFDFC376C1724E92DED52 (canvasButtons_tC8D4D505F1276DC460A112D1D9B82875B0681F41 * __this, const RuntimeMethod* method)
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
// System.Void gameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_Start_m061A4C3C9B36B828820162862870ED7C3CEF909C (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85231F4B1CF342888A6F05DF9C5CC653039D16C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92D5F67DF9B64B6B1F1417F0BB2DE08F66594BF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC43CFD1A6286919FECC561A448B806E93905331D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50653F83232F04B0B9CCBDA31F8099A44352C1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// speedOfCamera = speedOfCamera * Time.deltaTime;
		float L_0 = __this->get_speedOfCamera_46();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_speedOfCamera_46(((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)));
		// RectTransform = canvas.GetComponent<RectTransform>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_canvas_27();
		NullCheck(L_2);
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30(L_2, /*hidden argument*/GameObject_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m88DECD5A0B4E3A263DD9D40D8B518F878681ED30_RuntimeMethod_var);
		__this->set_RectTransform_30(L_3);
		// screenWidth = RectTransform.rect.width;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_4 = __this->get_RectTransform_30();
		NullCheck(L_4);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_5;
		L_5 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		float L_6;
		L_6 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		__this->set_screenWidth_49(L_6);
		// screenHeight = RectTransform.rect.height;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_7 = __this->get_RectTransform_30();
		NullCheck(L_7);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_8;
		L_8 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9;
		L_9 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_0), /*hidden argument*/NULL);
		__this->set_screenHeight_50(L_9);
		// arrow.transform.GetChild(0).gameObject.GetComponent<SpriteRenderer>().color = colorStart;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_arrow_25();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_14;
		L_14 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_13, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15 = __this->get_colorStart_8();
		NullCheck(L_14);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_14, L_15, /*hidden argument*/NULL);
		// if (PlayerPrefs.GetString("sounds") == "No")
		String_t* L_16;
		L_16 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, /*hidden argument*/NULL);
		bool L_17;
		L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_16, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_009d;
		}
	}
	{
		// Debug.Log("Sounds No");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC43CFD1A6286919FECC561A448B806E93905331D, /*hidden argument*/NULL);
		// }
		goto IL_00a7;
	}

IL_009d:
	{
		// Debug.Log("Sounds Yes");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD50653F83232F04B0B9CCBDA31F8099A44352C1C, /*hidden argument*/NULL);
	}

IL_00a7:
	{
		// if (PlayerPrefs.GetString("musics") == "No")
		String_t* L_18;
		L_18 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral4DF85DD2D76586D6B0C25C09094E217A5120E62A, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		// Debug.Log("Musics No");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral92D5F67DF9B64B6B1F1417F0BB2DE08F66594BF8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00c8:
	{
		// Debug.Log("Musics Yes");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral85231F4B1CF342888A6F05DF9C5CC653039D16C8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_Update_m3FB7EEA65905B0BF003BF60F4405DD43DEC41928 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (autoWin)
		bool L_0 = __this->get_autoWin_45();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// level++;
		int32_t L_1 = __this->get_level_38();
		__this->set_level_38(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)));
		// autoWin = false;
		__this->set_autoWin_45((bool)0);
	}

IL_001d:
	{
		// updateIndicators();
		gameController_updateIndicators_m80D411E900331584ACD066A72EB65F9A5E7825EB(__this, /*hidden argument*/NULL);
		// if (level != lastLevel)
		int32_t L_2 = __this->get_level_38();
		int32_t L_3 = __this->get_lastLevel_37();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_00cd;
		}
	}
	{
		// attempts++;
		int32_t L_4 = __this->get_attempts_41();
		__this->set_attempts_41(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// playWin();
		gameController_playWin_m3411ACF719FA3ADF9399D12BEA2FAF057E83C964(__this, /*hidden argument*/NULL);
		// addPlatform();
		gameController_addPlatform_mCDAC50FD3240C5E5D3A48F71F2A8C712D2AA0D52(__this, /*hidden argument*/NULL);
		// addHole();
		gameController_addHole_m57963D84DBD2B33F1DE68F2AA11B785EEE46B32F(__this, /*hidden argument*/NULL);
		// camIsMoving = true;
		__this->set_camIsMoving_43((bool)1);
		// cameraNewPosition = new Vector3(cameraNewPosition.x, cameraNewPosition.y, cameraNewPosition.z + step);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_cameraNewPosition_36();
		float L_6 = L_5->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_cameraNewPosition_36();
		float L_8 = L_7->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_9 = __this->get_address_of_cameraNewPosition_36();
		float L_10 = L_9->get_z_4();
		float L_11 = __this->get_step_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_6, L_8, ((float)il2cpp_codegen_add((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		__this->set_cameraNewPosition_36(L_12);
		// ballPosition = new Vector3(ballPosition.x, ballPosition.y, ballPosition.z + step);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_ballPosition_35();
		float L_14 = L_13->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_15 = __this->get_address_of_ballPosition_35();
		float L_16 = L_15->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_17 = __this->get_address_of_ballPosition_35();
		float L_18 = L_17->get_z_4();
		float L_19 = __this->get_step_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), L_14, L_16, ((float)il2cpp_codegen_add((float)L_18, (float)L_19)), /*hidden argument*/NULL);
		__this->set_ballPosition_35(L_20);
		// lastLevel = level;
		int32_t L_21 = __this->get_level_38();
		__this->set_lastLevel_37(L_21);
	}

IL_00cd:
	{
		// if (cam.transform.position != cameraNewPosition)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_cam_26();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_cameraNewPosition_36();
		bool L_26;
		L_26 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_011c;
		}
	}
	{
		// cam.transform.position = Vector3.MoveTowards(cam.transform.position, cameraNewPosition, speedOfCamera);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_cam_26();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_cam_26();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = __this->get_cameraNewPosition_36();
		float L_33 = __this->get_speedOfCamera_46();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_31, L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_28, L_34, /*hidden argument*/NULL);
		// }
		return;
	}

IL_011c:
	{
		// else if(cam.transform.position == cameraNewPosition && camIsMoving == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_cam_26();
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = __this->get_cameraNewPosition_36();
		bool L_39;
		L_39 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0161;
		}
	}
	{
		bool L_40 = __this->get_camIsMoving_43();
		if (!L_40)
		{
			goto IL_0161;
		}
	}
	{
		// clearBall();
		gameController_clearBall_mBC1C9E800FB46540FB8046A7213B2920C8405117(__this, /*hidden argument*/NULL);
		// clearPlatform();
		gameController_clearPlatform_m23498076B07399749104643C1FF8D9AAFE669191(__this, /*hidden argument*/NULL);
		// clearHole();
		gameController_clearHole_mEAC221A787AD79B2242D5C90DEA9AFDFC97D90C0(__this, /*hidden argument*/NULL);
		// newBall();
		gameController_newBall_m702E3D604079C97E6D422B580B022E66B85E2B64(__this, /*hidden argument*/NULL);
		// camIsMoving = false;
		__this->set_camIsMoving_43((bool)0);
		// }
		return;
	}

IL_0161:
	{
		// if (ball != null && ball.transform.position != ballPosition)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_ball_51();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_41, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01bd;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = __this->get_ball_51();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = __this->get_ballPosition_35();
		bool L_47;
		L_47 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_01bd;
		}
	}
	{
		// ball.transform.position = Vector3.MoveTowards(ball.transform.position, ballPosition, 0.2f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = __this->get_ball_51();
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_ball_51();
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = __this->get_ballPosition_35();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_52, L_53, (0.200000003f), /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_49, L_54, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01bd:
	{
		// if (ball != null && attempts >= 0)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_ball_51();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_55, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_57 = __this->get_attempts_41();
		if ((((int32_t)L_57) < ((int32_t)0)))
		{
			goto IL_01da;
		}
	}
	{
		// controller();
		gameController_controller_m158C327FCA12A378FDDDFA186F3270A37A40275C(__this, /*hidden argument*/NULL);
	}

IL_01da:
	{
		// }
		return;
	}
}
// System.Void gameController::addPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_addPlatform_mCDAC50FD3240C5E5D3A48F71F2A8C712D2AA0D52 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platformPosition = new Vector3(platformPosition.x, platformPosition.y, platformPosition.z + step);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_platformPosition_33();
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_platformPosition_33();
		float L_3 = L_2->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_platformPosition_33();
		float L_5 = L_4->get_z_4();
		float L_6 = __this->get_step_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_1, L_3, ((float)il2cpp_codegen_add((float)L_5, (float)L_6)), /*hidden argument*/NULL);
		__this->set_platformPosition_33(L_7);
		// GameObject newPlatform = Instantiate(platformPrefab, platformPosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_platformPrefab_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_platformPosition_33();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newPlatform.transform.SetParent(platformContainer.transform);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_platformContainer_17();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_12, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameController::addHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_addHole_m57963D84DBD2B33F1DE68F2AA11B785EEE46B32F (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	{
		// if (level / 10 % 2 == 0)
		int32_t L_0 = __this->get_level_38();
		if (((int32_t)((int32_t)((int32_t)((int32_t)L_0/(int32_t)((int32_t)10)))%(int32_t)2)))
		{
			goto IL_00bb;
		}
	}
	{
		// hardLevel = 0;
		__this->set_hardLevel_42(0);
		// if (level % 10 < 5)
		int32_t L_1 = __this->get_level_38();
		if ((((int32_t)((int32_t)((int32_t)L_1%(int32_t)((int32_t)10)))) >= ((int32_t)5)))
		{
			goto IL_0059;
		}
	}
	{
		// holePosition = new Vector3(0f, holePosition.y, holePosition.z + step + newDistance());
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_holePosition_34();
		float L_3 = L_2->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = __this->get_address_of_holePosition_34();
		float L_5 = L_4->get_z_4();
		float L_6 = __this->get_step_47();
		float L_7;
		L_7 = gameController_newDistance_m755507EAC6600102BB28F662C821923E1BD73DDE(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.0f), L_3, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_5, (float)L_6)), (float)L_7)), /*hidden argument*/NULL);
		__this->set_holePosition_34(L_8);
		// }
		goto IL_008f;
	}

IL_0059:
	{
		// holePosition = new Vector3(random_X(), holePosition.y, holePosition.z + step + newDistance());
		int32_t L_9;
		L_9 = gameController_random_X_m50BD268F9FC5B31C1222A6C0150F1623F4EC305B(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_holePosition_34();
		float L_11 = L_10->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_12 = __this->get_address_of_holePosition_34();
		float L_13 = L_12->get_z_4();
		float L_14 = __this->get_step_47();
		float L_15;
		L_15 = gameController_newDistance_m755507EAC6600102BB28F662C821923E1BD73DDE(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), ((float)((float)L_9)), L_11, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_13, (float)L_14)), (float)L_15)), /*hidden argument*/NULL);
		__this->set_holePosition_34(L_16);
	}

IL_008f:
	{
		// GameObject newHole = Instantiate(holePrefab, holePosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_holePrefab_21();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = __this->get_holePosition_34();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_19;
		L_19 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_17, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newHole.transform.SetParent(holeContainer.transform);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_holeContainer_18();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_21, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00bb:
	{
		// Random rand = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_24 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_24, /*hidden argument*/NULL);
		V_0 = L_24;
		// if(hardLevel==0)
		int32_t L_25 = __this->get_hardLevel_42();
		if (L_25)
		{
			goto IL_00d7;
		}
	}
	{
		// hardLevel = rand.Next(1, 3);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_26, 1, 3);
		__this->set_hardLevel_42(L_27);
	}

IL_00d7:
	{
		// if (hardLevel == 1)
		int32_t L_28 = __this->get_hardLevel_42();
		if ((!(((uint32_t)L_28) == ((uint32_t)1))))
		{
			goto IL_0140;
		}
	}
	{
		// holePosition = new Vector3(0f, holePosition.y, holePosition.z + step + newDistance());
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_holePosition_34();
		float L_30 = L_29->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_31 = __this->get_address_of_holePosition_34();
		float L_32 = L_31->get_z_4();
		float L_33 = __this->get_step_47();
		float L_34;
		L_34 = gameController_newDistance_m755507EAC6600102BB28F662C821923E1BD73DDE(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), (0.0f), L_30, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_32, (float)L_33)), (float)L_34)), /*hidden argument*/NULL);
		__this->set_holePosition_34(L_35);
		// GameObject newHole = Instantiate(movingHolePrefabX, holePosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_movingHolePrefabX_22();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = __this->get_holePosition_34();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_38;
		L_38 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_36, L_37, L_38, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newHole.transform.SetParent(holeContainer.transform);
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_holeContainer_18();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_40, L_42, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0140:
	{
		// else if (hardLevel == 2)
		int32_t L_43 = __this->get_hardLevel_42();
		if ((!(((uint32_t)L_43) == ((uint32_t)2))))
		{
			goto IL_01ad;
		}
	}
	{
		// holePosition = new Vector3(rand.Next(-3, 4), holePosition.y, holePosition.z + step + newDistance());
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_44 = V_0;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_44, ((int32_t)-3), 4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_46 = __this->get_address_of_holePosition_34();
		float L_47 = L_46->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_48 = __this->get_address_of_holePosition_34();
		float L_49 = L_48->get_z_4();
		float L_50 = __this->get_step_47();
		float L_51;
		L_51 = gameController_newDistance_m755507EAC6600102BB28F662C821923E1BD73DDE(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_52), ((float)((float)L_45)), L_47, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_49, (float)L_50)), (float)L_51)), /*hidden argument*/NULL);
		__this->set_holePosition_34(L_52);
		// GameObject newHole = Instantiate(movingHolePrefabZ, holePosition, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = __this->get_movingHolePrefabZ_23();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = __this->get_holePosition_34();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_55;
		L_55 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_53, L_54, L_55, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// newHole.transform.SetParent(holeContainer.transform);
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = __this->get_holeContainer_18();
		NullCheck(L_58);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_59;
		L_59 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_57, L_59, /*hidden argument*/NULL);
	}

IL_01ad:
	{
		// }
		return;
	}
}
// System.Void gameController::clearPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_clearPlatform_m23498076B07399749104643C1FF8D9AAFE669191 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (platformContainer.transform.childCount > 1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_platformContainer_17();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		// Destroy(platformContainer.transform.GetChild(0).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_platformContainer_17();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void gameController::clearHole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_clearHole_mEAC221A787AD79B2242D5C90DEA9AFDFC97D90C0 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (holeContainer.transform.childCount > 1)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_holeContainer_18();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		// Destroy(holeContainer.transform.GetChild(0).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_holeContainer_18();
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void gameController::clearBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_clearBall_mBC1C9E800FB46540FB8046A7213B2920C8405117 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < ballContainer.transform.childCount; i++)
		V_0 = 0;
		goto IL_0023;
	}

IL_0004:
	{
		// Destroy(ballContainer.transform.GetChild(i).gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ballContainer_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// for (int i = 0; i < ballContainer.transform.childCount; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0023:
	{
		// for (int i = 0; i < ballContainer.transform.childCount; i++)
		int32_t L_6 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_ballContainer_19();
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_6) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void gameController::controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_controller_m158C327FCA12A378FDDDFA186F3270A37A40275C (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// if (Input.touchCount > 0 && ball.transform.position == ballPosition && !EventSystem.current.currentSelectedGameObject && Time.timeScale==1)
		int32_t L_0;
		L_0 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_01c4;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_ball_51();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_ballPosition_35();
		bool L_5;
		L_5 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_01c4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_il2cpp_TypeInfo_var);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_6;
		L_6 = EventSystem_get_current_m4B9C11F490297AE55428038DACD240596D6CE5F2(/*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_01c4;
		}
	}
	{
		float L_9;
		L_9 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		if ((!(((float)L_9) == ((float)(1.0f)))))
		{
			goto IL_01c4;
		}
	}
	{
		// hand.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_hand_28();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// Touch touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_11;
		L_11 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_11;
		// if (touchPositionEnd.x == 0 && touchPositionEnd.y == 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_touchPositionEnd_5();
		float L_13 = L_12->get_x_0();
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_touchPositionEnd_5();
		float L_15 = L_14->get_y_1();
		if ((!(((float)L_15) == ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// touchPositionStart = touch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16;
		L_16 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_touchPositionStart_4(L_16);
		// arrow.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_arrow_25();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
	}

IL_009e:
	{
		// touchPositionEnd = touch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_18;
		L_18 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_touchPositionEnd_5(L_18);
		// differenceOfPosition = new Vector2(touchPositionStart.x - touchPositionEnd.x, touchPositionStart.y - touchPositionEnd.y);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_touchPositionStart_4();
		float L_20 = L_19->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_touchPositionEnd_5();
		float L_22 = L_21->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_touchPositionStart_4();
		float L_24 = L_23->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_25 = __this->get_address_of_touchPositionEnd_5();
		float L_26 = L_25->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_subtract((float)L_20, (float)L_22)), ((float)il2cpp_codegen_subtract((float)L_24, (float)L_26)), /*hidden argument*/NULL);
		__this->set_differenceOfPosition_6(L_27);
		// if (differenceOfPosition.y> screenHeight / 2)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_differenceOfPosition_6();
		float L_29 = L_28->get_y_1();
		float L_30 = __this->get_screenHeight_50();
		if ((!(((float)L_29) > ((float)((float)((float)L_30/(float)(2.0f)))))))
		{
			goto IL_012d;
		}
	}
	{
		// difference = new Vector3(touchPositionStart.x - touchPositionEnd.x, maxForce, maxForce);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_touchPositionStart_4();
		float L_32 = L_31->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_touchPositionEnd_5();
		float L_34 = L_33->get_x_0();
		float L_35 = __this->get_maxForce_48();
		float L_36 = __this->get_maxForce_48();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), ((float)il2cpp_codegen_subtract((float)L_32, (float)L_34)), L_35, L_36, /*hidden argument*/NULL);
		__this->set_difference_7(L_37);
		// }
		goto IL_0171;
	}

IL_012d:
	{
		// float yz = differenceOfPosition.y/(screenHeight/2)*maxForce;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_38 = __this->get_address_of_differenceOfPosition_6();
		float L_39 = L_38->get_y_1();
		float L_40 = __this->get_screenHeight_50();
		float L_41 = __this->get_maxForce_48();
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)((float)L_39/(float)((float)((float)L_40/(float)(2.0f))))), (float)L_41));
		// difference = new Vector3(touchPositionStart.x - touchPositionEnd.x, yz, yz);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_touchPositionStart_4();
		float L_43 = L_42->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = __this->get_address_of_touchPositionEnd_5();
		float L_45 = L_44->get_x_0();
		float L_46 = V_1;
		float L_47 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_48), ((float)il2cpp_codegen_subtract((float)L_43, (float)L_45)), L_46, L_47, /*hidden argument*/NULL);
		__this->set_difference_7(L_48);
	}

IL_0171:
	{
		// rotateArrow();
		gameController_rotateArrow_mFBDCA35D997155913FF1098D0E21593650512FD9(__this, /*hidden argument*/NULL);
		// resizeArrow();
		gameController_resizeArrow_m3DA5CB4331A8DEFB959390112D16CC998FC9DCDF(__this, /*hidden argument*/NULL);
		// paintArrow();
		gameController_paintArrow_mE710F3F53D1A9FF6056EE0EEA21D016708D4228B(__this, /*hidden argument*/NULL);
		// ball.transform.eulerAngles = new Vector3(0, getAngleFromVector2(new Vector2(difference.x, difference.y)), 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = __this->get_ball_51();
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_51 = __this->get_address_of_difference_7();
		float L_52 = L_51->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_53 = __this->get_address_of_difference_7();
		float L_54 = L_53->get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_55), L_52, L_54, /*hidden argument*/NULL);
		float L_56;
		L_56 = gameController_getAngleFromVector2_m22A6E2B1910AA164F4A0ED9CB848891B98DA6FFA(__this, L_55, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_57), (0.0f), L_56, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_50, L_57, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01c4:
	{
		// else if (touchPositionEnd.x != 0 && touchPositionEnd.y != 0 && ball.transform.position == ballPosition)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_58 = __this->get_address_of_touchPositionEnd_5();
		float L_59 = L_58->get_x_0();
		if ((((float)L_59) == ((float)(0.0f))))
		{
			goto IL_02d2;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_60 = __this->get_address_of_touchPositionEnd_5();
		float L_61 = L_60->get_y_1();
		if ((((float)L_61) == ((float)(0.0f))))
		{
			goto IL_02d2;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_ball_51();
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64;
		L_64 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = __this->get_ballPosition_35();
		bool L_66;
		L_66 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_64, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_02d2;
		}
	}
	{
		// arrow.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = __this->get_arrow_25();
		NullCheck(L_67);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_67, (bool)0, /*hidden argument*/NULL);
		// if (difference.magnitude>20)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_68 = __this->get_address_of_difference_7();
		float L_69;
		L_69 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_68, /*hidden argument*/NULL);
		if ((!(((float)L_69) > ((float)(20.0f)))))
		{
			goto IL_02ba;
		}
	}
	{
		// ball.GetComponent<Collider>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_ball_51();
		NullCheck(L_70);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_71;
		L_71 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_70, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		NullCheck(L_71);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_71, (bool)0, /*hidden argument*/NULL);
		// ball.GetComponent<Collider>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_72 = __this->get_ball_51();
		NullCheck(L_72);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_73;
		L_73 = GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08(L_72, /*hidden argument*/GameObject_GetComponent_TisCollider_t5E81E43C2ECA0209A7C4528E84A632712D192B02_m7CB95AA45111B8F2FD8968CBDF0CE3359F6B2E08_RuntimeMethod_var);
		NullCheck(L_73);
		Collider_set_enabled_m047B4D830755CD36671F7A60BFAA9C0D61F6C4A1(L_73, (bool)1, /*hidden argument*/NULL);
		// ballRigidbody.isKinematic = false;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_74 = __this->get_ballRigidbody_10();
		NullCheck(L_74);
		Rigidbody_set_isKinematic_mCF74D680205544826F2DE2CAB929C9F25409A311(L_74, (bool)0, /*hidden argument*/NULL);
		// ballRigidbody.AddForce(difference);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_75 = __this->get_ballRigidbody_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_76 = __this->get_difference_7();
		NullCheck(L_75);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_75, L_76, /*hidden argument*/NULL);
		// ballRigidbody.AddRelativeTorque(difference.y, 0, 0);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_77 = __this->get_ballRigidbody_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_78 = __this->get_address_of_difference_7();
		float L_79 = L_78->get_y_3();
		NullCheck(L_77);
		Rigidbody_AddRelativeTorque_m088537EE9F7B75DC820FDFDE1CDCFCAAF7214CD9(L_77, L_79, (0.0f), (0.0f), /*hidden argument*/NULL);
		// attempts--;
		int32_t L_80 = __this->get_attempts_41();
		__this->set_attempts_41(((int32_t)il2cpp_codegen_subtract((int32_t)L_80, (int32_t)1)));
		// if (attempts != 0)
		int32_t L_81 = __this->get_attempts_41();
		if (!L_81)
		{
			goto IL_02ac;
		}
	}
	{
		// newBall();
		gameController_newBall_m702E3D604079C97E6D422B580B022E66B85E2B64(__this, /*hidden argument*/NULL);
		goto IL_02ba;
	}

IL_02ac:
	{
		// ball = null;
		__this->set_ball_51((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// ballRigidbody = null;
		__this->set_ballRigidbody_10((Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A *)NULL);
	}

IL_02ba:
	{
		// touchPositionStart = new Vector2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_82 = __this->get_address_of_touchPositionStart_4();
		il2cpp_codegen_initobj(L_82, sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
		// touchPositionEnd = new Vector2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_83 = __this->get_address_of_touchPositionEnd_5();
		il2cpp_codegen_initobj(L_83, sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
	}

IL_02d2:
	{
		// }
		return;
	}
}
// System.Int32 gameController::random_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t gameController_random_X_m50BD268F9FC5B31C1222A6C0150F1623F4EC305B (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * V_0 = NULL;
	{
		// Random rand = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// if(rand.Next(0, 2) == 0)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 0, 2);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// return rand.Next(-3, -1);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_3, ((int32_t)-3), (-1));
		return L_4;
	}

IL_001a:
	{
		// return rand.Next(1, 3);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_5, 1, 3);
		return L_6;
	}
}
// System.Void gameController::rotateArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_rotateArrow_mFBDCA35D997155913FF1098D0E21593650512FD9 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 vec = new Vector2(difference.x, difference.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_difference_7();
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = __this->get_address_of_difference_7();
		float L_3 = L_2->get_y_3();
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_0), L_1, L_3, /*hidden argument*/NULL);
		// arrow.transform.eulerAngles = new Vector3(0, getAngleFromVector2(vec), 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_arrow_25();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7;
		L_7 = gameController_getAngleFromVector2_m22A6E2B1910AA164F4A0ED9CB848891B98DA6FFA(__this, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), (0.0f), L_7, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_5, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameController::resizeArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_resizeArrow_m3DA5CB4331A8DEFB959390112D16CC998FC9DCDF (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float delta = difference.y / maxForce;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_difference_7();
		float L_1 = L_0->get_y_3();
		float L_2 = __this->get_maxForce_48();
		V_0 = ((float)((float)L_1/(float)L_2));
		// float currentSize = 1f + delta;
		float L_3 = V_0;
		V_1 = ((float)il2cpp_codegen_add((float)(1.0f), (float)L_3));
		// arrow.transform.localScale = new Vector3(1f, 1f, currentSize);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_arrow_25();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		float L_6 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (1.0f), (1.0f), L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameController::paintArrow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_paintArrow_mE710F3F53D1A9FF6056EE0EEA21D016708D4228B (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float delta = difference.y / maxForce;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_difference_7();
		float L_1 = L_0->get_y_3();
		float L_2 = __this->get_maxForce_48();
		V_0 = ((float)((float)L_1/(float)L_2));
		// float r = (colorEnd.r - colorStart.r) * delta;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_3 = __this->get_address_of_colorEnd_9();
		float L_4 = L_3->get_r_0();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_5 = __this->get_address_of_colorStart_8();
		float L_6 = L_5->get_r_0();
		float L_7 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_4, (float)L_6)), (float)L_7));
		// float g = (colorEnd.g - colorStart.g) * delta;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_8 = __this->get_address_of_colorEnd_9();
		float L_9 = L_8->get_g_1();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_10 = __this->get_address_of_colorStart_8();
		float L_11 = L_10->get_g_1();
		float L_12 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), (float)L_12));
		// float b = (colorEnd.b - colorStart.b) * delta;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_13 = __this->get_address_of_colorEnd_9();
		float L_14 = L_13->get_b_2();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_15 = __this->get_address_of_colorStart_8();
		float L_16 = L_15->get_b_2();
		float L_17 = V_0;
		V_3 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_16)), (float)L_17));
		// Color currentColor = new Color(colorStart.r + r, colorStart.g + g, colorStart.b + b, 1);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_18 = __this->get_address_of_colorStart_8();
		float L_19 = L_18->get_r_0();
		float L_20 = V_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_21 = __this->get_address_of_colorStart_8();
		float L_22 = L_21->get_g_1();
		float L_23 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_24 = __this->get_address_of_colorStart_8();
		float L_25 = L_24->get_b_2();
		float L_26 = V_3;
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_4), ((float)il2cpp_codegen_add((float)L_19, (float)L_20)), ((float)il2cpp_codegen_add((float)L_22, (float)L_23)), ((float)il2cpp_codegen_add((float)L_25, (float)L_26)), (1.0f), /*hidden argument*/NULL);
		// arrow.transform.GetChild(0).gameObject.GetComponent<SpriteRenderer>().color = currentColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_arrow_25();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_31;
		L_31 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_30, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_32 = V_4;
		NullCheck(L_31);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_31, L_32, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void gameController::playWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_playWin_m3411ACF719FA3ADF9399D12BEA2FAF057E83C964 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetString("sounds") != "No")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// win.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_win_31();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void gameController::playLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_playLose_mB71FD451E9B999F78C3EA3B86FC13EA28B9A0627 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetString("sounds") != "No")
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8E8A82D5F8DCE54022769067C17376DB5B7D7932, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, _stringLiteralEBE46DF54B01B606DB21F86C7C40D5E6231B0C66, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// lose.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_lose_32();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void gameController::checkLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_checkLose_m12496E426D2BAAD4AF095F5E4B4B36FC78523820 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	{
		// if (attempts <= 0 && retry.active == false)
		int32_t L_0 = __this->get_attempts_41();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_retry_16();
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_active_mAE45BB4A1D06BE2AF8C460593FC0346A5EF8014D(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		// openMenu.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_openMenu_29();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// retry.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_retry_16();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// loseTxt.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_loseTxt_15();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// playLose();
		gameController_playLose_mB71FD451E9B999F78C3EA3B86FC13EA28B9A0627(__this, /*hidden argument*/NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void gameController::updateIndicators()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_updateIndicators_m80D411E900331584ACD066A72EB65F9A5E7825EB (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (PlayerPrefs.GetInt("bestScore") < level)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_level_38();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0022;
		}
	}
	{
		// PlayerPrefs.SetInt("bestScore", level);
		int32_t L_2 = __this->get_level_38();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, L_2, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// attemptsCountTxt.text = /*"<size=90>Attempts:</size> " +*/ attempts.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_attemptsCountTxt_13();
		int32_t* L_4 = __this->get_address_of_attempts_41();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// bestScoreTxt.text = PlayerPrefs.GetInt("bestScore").ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_bestScoreTxt_11();
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral8E1719DAA867233559AC46D7A8219678C4A121F7, /*hidden argument*/NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// currentScoreTxt.text = level.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9 = __this->get_currentScoreTxt_12();
		int32_t* L_10 = __this->get_address_of_level_38();
		String_t* L_11;
		L_11 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
		// }
		return;
	}
}
// System.Single gameController::getAngleFromVector2(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float gameController_getAngleFromVector2_m22A6E2B1910AA164F4A0ED9CB848891B98DA6FFA (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___p_vector20, const RuntimeMethod* method)
{
	{
		// if (p_vector2.x < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___p_vector20;
		float L_1 = L_0.get_x_0();
		if ((!(((float)L_1) < ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// return 360 - (Mathf.Atan2(p_vector2.x, p_vector2.y) * Mathf.Rad2Deg * -1);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___p_vector20;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___p_vector20;
		float L_5 = L_4.get_y_1();
		float L_6;
		L_6 = atan2f(L_3, L_5);
		return ((float)il2cpp_codegen_subtract((float)(360.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(57.2957802f))), (float)(-1.0f)))));
	}

IL_0031:
	{
		// return Mathf.Atan2(p_vector2.x, p_vector2.y) * Mathf.Rad2Deg;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = ___p_vector20;
		float L_8 = L_7.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___p_vector20;
		float L_10 = L_9.get_y_1();
		float L_11;
		L_11 = atan2f(L_8, L_10);
		return ((float)il2cpp_codegen_multiply((float)L_11, (float)(57.2957802f)));
	}
}
// System.Void gameController::newBall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController_newBall_m702E3D604079C97E6D422B580B022E66B85E2B64 (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject newBall = Instantiate(ballPrefab,new Vector3(ballPosition.x, ballPosition.y, ballPosition.z - 3),Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ballPrefab_24();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_1 = __this->get_address_of_ballPosition_35();
		float L_2 = L_1->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_ballPosition_35();
		float L_4 = L_3->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_ballPosition_35();
		float L_6 = L_5->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), L_2, L_4, ((float)il2cpp_codegen_subtract((float)L_6, (float)(3.0f))), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_9;
		// newBall.transform.SetParent(ballContainer.transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_0;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_ballContainer_19();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_11, L_13, /*hidden argument*/NULL);
		// newBall.GetComponent<ball>().gameController=this;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		NullCheck(L_14);
		ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * L_15;
		L_15 = GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6(L_14, /*hidden argument*/GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->set_gameController_4(__this);
		// newBall.GetComponent<ball>().ballContainer = ballContainer;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_0;
		NullCheck(L_16);
		ball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114 * L_17;
		L_17 = GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6(L_16, /*hidden argument*/GameObject_GetComponent_Tisball_tEB57FC5009B3ADDC173093C8187A87EF28BD1114_mD8B7FBB88902377C48FFDE445C55404460CF09B6_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_ballContainer_19();
		NullCheck(L_17);
		L_17->set_ballContainer_5(L_18);
		// ball = newBall;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_0;
		__this->set_ball_51(L_19);
		// ballRigidbody = newBall.GetComponent<Rigidbody>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_0;
		NullCheck(L_20);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_21;
		L_21 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_20, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		__this->set_ballRigidbody_10(L_21);
		// arrow = newBall.transform.GetChild(0).gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = V_0;
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		__this->set_arrow_25(L_25);
		// }
		return;
	}
}
// System.Single gameController::newDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float gameController_newDistance_m755507EAC6600102BB28F662C821923E1BD73DDE (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	{
		// if (level*2>30)
		int32_t L_0 = __this->get_level_38();
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)2))) <= ((int32_t)((int32_t)30))))
		{
			goto IL_0012;
		}
	}
	{
		// return 0f;
		return (0.0f);
	}

IL_0012:
	{
		// return 2f;
		return (2.0f);
	}
}
// System.Void gameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void gameController__ctor_m07E1593225CEA592B312EDE7E0BE75E3182D97AA (gameController_t0499BE59636638C57E08E3F6A344E1704D661DF2 * __this, const RuntimeMethod* method)
{
	{
		// public Vector3 platformPosition = new Vector3(0, 0, 35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (35.0f), /*hidden argument*/NULL);
		__this->set_platformPosition_33(L_0);
		// public Vector3 holePosition = new Vector3(0, 0, 4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), (0.0f), (0.0f), (4.0f), /*hidden argument*/NULL);
		__this->set_holePosition_34(L_1);
		// public Vector3 ballPosition = new Vector3(0, 1, -4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_2), (0.0f), (1.0f), (-4.0f), /*hidden argument*/NULL);
		__this->set_ballPosition_35(L_2);
		// public Vector3 cameraNewPosition = new Vector3(0, 5, -10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), (0.0f), (5.0f), (-10.0f), /*hidden argument*/NULL);
		__this->set_cameraNewPosition_36(L_3);
		// public int attempts = 5;
		__this->set_attempts_41(5);
		// public float speedOfCamera = 50f;
		__this->set_speedOfCamera_46((50.0f));
		// public float step = 40f;
		__this->set_step_47((40.0f));
		// public float maxForce = 5000f;
		__this->set_maxForce_48((5000.0f));
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
// System.Void movingHoleX::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingHoleX_Start_m642E092B2F2195D86AD2591B896FE031B027DAF2 (movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void movingHoleX::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingHoleX_Update_m52DCE2FF87E39B6A148375C663C8F096C1096D62 (movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4 * __this, const RuntimeMethod* method)
{
	{
		// if (direction.x == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_direction_4();
		float L_1 = L_0->get_x_2();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		// if (rand.Next(0, 2) == 0)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = __this->get_rand_5();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, 2);
		if (L_3)
		{
			goto IL_0060;
		}
	}
	{
		// direction = new Vector3(-3, gameObject.transform.position.y, gameObject.transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), (-3.0f), L_7, L_11, /*hidden argument*/NULL);
		__this->set_direction_4(L_12);
		// }
		goto IL_009a;
	}

IL_0060:
	{
		// direction = new Vector3(3, gameObject.transform.position.y, gameObject.transform.position.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), (3.0f), L_16, L_20, /*hidden argument*/NULL);
		__this->set_direction_4(L_21);
	}

IL_009a:
	{
		// if (gameObject.transform.position == direction)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = __this->get_direction_4();
		bool L_26;
		L_26 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00fd;
		}
	}
	{
		// if (direction.x == 3)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_27 = __this->get_address_of_direction_4();
		float L_28 = L_27->get_x_2();
		if ((!(((float)L_28) == ((float)(3.0f)))))
		{
			goto IL_00db;
		}
	}
	{
		// direction.x = -3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_29 = __this->get_address_of_direction_4();
		L_29->set_x_2((-3.0f));
		// }
		goto IL_00fd;
	}

IL_00db:
	{
		// else if (direction.x == -3)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_direction_4();
		float L_31 = L_30->get_x_2();
		if ((!(((float)L_31) == ((float)(-3.0f)))))
		{
			goto IL_00fd;
		}
	}
	{
		// direction.x = 3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_32 = __this->get_address_of_direction_4();
		L_32->set_x_2((3.0f));
	}

IL_00fd:
	{
		// gameObject.transform.position = Vector3.MoveTowards(gameObject.transform.position, direction, speed * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_36, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = __this->get_direction_4();
		float L_39 = __this->get_speed_6();
		float L_40;
		L_40 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_37, L_38, ((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)), /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_34, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void movingHoleX::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingHoleX__ctor_m98BB6954022D7EA2B04B8429D99CA5823DDA33B2 (movingHoleX_tB7D729479F3FB8512B9A45E96DC538E8EF937AD4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 direction = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_4(L_0);
		// Random rand = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_1, /*hidden argument*/NULL);
		__this->set_rand_5(L_1);
		// public float speed = 10f;
		__this->set_speed_6((10.0f));
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
// System.Void movingHoleZ::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingHoleZ_Start_m4E56977AD887D9FB3EBF6D499A658DEB98CC8298 (movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void movingHoleZ::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingHoleZ_Update_mB406237240CCF1240F096C1DED7E59A81B63E80D (movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886 * __this, const RuntimeMethod* method)
{
	{
		// if (direction.z == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_direction_4();
		float L_1 = L_0->get_z_4();
		if ((!(((float)L_1) == ((float)(0.0f)))))
		{
			goto IL_00dc;
		}
	}
	{
		// if (rand.Next(0, 2) == 0)
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = __this->get_rand_5();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_2, 0, 2);
		if (L_3)
		{
			goto IL_0081;
		}
	}
	{
		// direction = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z - 3f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_16), L_7, L_11, ((float)il2cpp_codegen_subtract((float)L_15, (float)(3.0f))), /*hidden argument*/NULL);
		__this->set_direction_4(L_16);
		// dif = -3f;
		__this->set_dif_7((-3.0f));
		// }
		goto IL_00dc;
	}

IL_0081:
	{
		// direction = new Vector3(gameObject.transform.position.x, gameObject.transform.position.y, gameObject.transform.position.z + 3f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_y_3();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_29), L_20, L_24, ((float)il2cpp_codegen_add((float)L_28, (float)(3.0f))), /*hidden argument*/NULL);
		__this->set_direction_4(L_29);
		// dif = 3f;
		__this->set_dif_7((3.0f));
	}

IL_00dc:
	{
		// if (gameObject.transform.position == direction)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = __this->get_direction_4();
		bool L_34;
		L_34 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_32, L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0163;
		}
	}
	{
		// if (dif == 3f)
		float L_35 = __this->get_dif_7();
		if ((!(((float)L_35) == ((float)(3.0f)))))
		{
			goto IL_012f;
		}
	}
	{
		// direction.z = direction.z - 6f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_36 = __this->get_address_of_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_37 = __this->get_address_of_direction_4();
		float L_38 = L_37->get_z_4();
		L_36->set_z_4(((float)il2cpp_codegen_subtract((float)L_38, (float)(6.0f))));
		// dif = -3f;
		__this->set_dif_7((-3.0f));
		// }
		goto IL_0163;
	}

IL_012f:
	{
		// else if (dif == -3)
		float L_39 = __this->get_dif_7();
		if ((!(((float)L_39) == ((float)(-3.0f)))))
		{
			goto IL_0163;
		}
	}
	{
		// direction.z = direction.z + 6f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_40 = __this->get_address_of_direction_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_41 = __this->get_address_of_direction_4();
		float L_42 = L_41->get_z_4();
		L_40->set_z_4(((float)il2cpp_codegen_add((float)L_42, (float)(6.0f))));
		// dif = 3f;
		__this->set_dif_7((3.0f));
	}

IL_0163:
	{
		// gameObject.transform.position = Vector3.MoveTowards(gameObject.transform.position, direction, speed * Time.deltaTime);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45;
		L_45 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = __this->get_direction_4();
		float L_49 = __this->get_speed_6();
		float L_50;
		L_50 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796(L_47, L_48, ((float)il2cpp_codegen_multiply((float)L_49, (float)L_50)), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_44, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void movingHoleZ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movingHoleZ__ctor_mC935D982C8B75F61C9FDDE440BE50AF17E5AA792 (movingHoleZ_t0AF6ACE3DEB71EF3BAC9A9AD251C574FEC676886 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 direction = new Vector3(0, 0, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_direction_4(L_0);
		// Random rand = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_1, /*hidden argument*/NULL);
		__this->set_rand_5(L_1);
		// public float speed = 10f;
		__this->set_speed_6((10.0f));
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
// System.Void point::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void point_Start_mA1FAE5C5B60B30F76FD2E4B0993AC1C73A759EAB (point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void point::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void point_Update_m84B3A13B32388FDFC247C81744095145B0FF065F (point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void point::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void point_OnTriggerStay_m52AB4AAD335599DB260A8FBFB3AD06E62A03CB88 (point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// hit = true;
		__this->set_hit_4((bool)1);
		// }
		return;
	}
}
// System.Void point::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void point_OnTriggerEnter_m75ED60D8D8B6D91B4A81A7703C1A7859EB6D30EC (point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// hit = true;
		__this->set_hit_4((bool)1);
		// }
		return;
	}
}
// System.Void point::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void point_OnTriggerExit_mE2C96AE5675A9D735319615AE91515AD3378CB34 (point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	{
		// hit = true;
		__this->set_hit_4((bool)1);
		// }
		return;
	}
}
// System.Void point::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void point__ctor_mC76621A90DBFC83116E40ADEE75DD8FAA4F1DF3A (point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * __this, const RuntimeMethod* method)
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
// System.Void simulationCollisions::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void simulationCollisions_Start_m30726ECB3D5EB80C5F2C67875CA62173DD011947 (simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void simulationCollisions::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void simulationCollisions_Update_mFA9B5DFA58A973F16CE559AAC4150769A4D860A9 (simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void simulationCollisions::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void simulationCollisions_OnTriggerExit_m4E9CEDC467443CC27FC979FCBDF1CFA1C8687F06 (simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61B8D324687C24872968A15276C954F913457113);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "point")
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral61B8D324687C24872968A15276C954F913457113, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// collisionChecker = true;
		__this->set_collisionChecker_4((bool)1);
		return;
	}

IL_001a:
	{
		// collisionChecker = false;
		__this->set_collisionChecker_4((bool)0);
		// }
		return;
	}
}
// System.Void simulationCollisions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void simulationCollisions__ctor_m044D7B886B2885FB737BA60CF28FF15161F28320 (simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * __this, const RuntimeMethod* method)
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
// System.Void trajectory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trajectory_Start_m5ECF15A713E40A7F56934102CBED9D5B3C857490 (trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void trajectory::AddBody(UnityEngine.Rigidbody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trajectory_AddBody_mE233DD9A44114E91349DE1DB0DC73ABEE8A51411 (trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * __this, Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___rb0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// savedBodies.Add(rb, new BodyData());
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_0 = __this->get_savedBodies_7();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_1 = ___rb0;
		BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_2 = (BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 *)il2cpp_codegen_object_new(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5_il2cpp_TypeInfo_var);
		BodyData__ctor_mCA56704AB5CCC8FBE70FF6D491FB8AA74574C085(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void trajectory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trajectory_Update_mEA5E4904C8CFA4F51D280B2248194BB1FB6D916D (trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Boolean trajectory::showTrajectory(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool trajectory_showTrajectory_mC813C5057ED76B68BFA4135E16C842447519A176 (trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___force0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPosition1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_Tispoint_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A_m082EB7B668C6DDD332B7207D4AB867FB290BC9FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TissimulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D_mC151E3AD649B6AA0949509904A5449903F735E9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m53541808378F448A11942ACB183008F5C89D0120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* V_1 = NULL;
	int32_t V_2 = 0;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_3 = NULL;
	Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// savedBodies = new Dictionary<Rigidbody, BodyData>();
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_0 = (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F *)il2cpp_codegen_object_new(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4(L_0, /*hidden argument*/Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4_RuntimeMethod_var);
		__this->set_savedBodies_7(L_0);
		// foreach (var rb in FindObjectsOfType<Rigidbody>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_1;
		L_1 = Object_FindObjectsOfType_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m53541808378F448A11942ACB183008F5C89D0120(/*hidden argument*/Object_FindObjectsOfType_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m53541808378F448A11942ACB183008F5C89D0120_RuntimeMethod_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_002e;
	}

IL_0015:
	{
		// foreach (var rb in FindObjectsOfType<Rigidbody>())
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// savedBodies.Add(rb, new BodyData());
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_6 = __this->get_savedBodies_7();
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7 = V_3;
		BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_8 = (BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 *)il2cpp_codegen_object_new(BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5_il2cpp_TypeInfo_var);
		BodyData__ctor_mCA56704AB5CCC8FBE70FF6D491FB8AA74574C085(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75(L_6, L_7, L_8, /*hidden argument*/Dictionary_2_Add_m49CFB899500AA0B5E764C0780565FBBD5C4E7F75_RuntimeMethod_var);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002e:
	{
		// foreach (var rb in FindObjectsOfType<Rigidbody>())
		int32_t L_10 = V_2;
		RigidbodyU5BU5D_t9749C1DC39BC78A57D2239B2EF18DA9E31C2844B* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0015;
		}
	}
	{
		// foreach (var body in savedBodies)
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_12 = __this->get_savedBodies_7();
		NullCheck(L_12);
		Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA  L_13;
		L_13 = Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42(L_12, /*hidden argument*/Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42_RuntimeMethod_var);
		V_4 = L_13;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b6;
		}

IL_0043:
		{
			// foreach (var body in savedBodies)
			KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  L_14;
			L_14 = Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_inline((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_RuntimeMethod_var);
			V_5 = L_14;
			// body.Value.position = body.Key.transform.position;
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_15;
			L_15 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_16;
			L_16 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_16);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
			L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
			L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
			NullCheck(L_15);
			L_15->set_position_0(L_18);
			// body.Value.rotation = body.Key.transform.rotation;
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_19;
			L_19 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_20;
			L_20 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_20);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
			L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
			L_22 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_21, /*hidden argument*/NULL);
			NullCheck(L_19);
			L_19->set_rotation_1(L_22);
			// body.Value.velocity = body.Key.velocity;
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_23;
			L_23 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_24;
			L_24 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_24);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
			L_25 = Rigidbody_get_velocity_mCFB033F3BD14C2BA68E797DFA4950F9307EC8E2C(L_24, /*hidden argument*/NULL);
			NullCheck(L_23);
			L_23->set_velocity_2(L_25);
			// body.Value.angularVelocity = body.Key.angularVelocity;
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_26;
			L_26 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_27;
			L_27 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_27);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
			L_28 = Rigidbody_get_angularVelocity_m6737340DF546452900D199246279231D80A21DCF(L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			L_26->set_angularVelocity_3(L_28);
		}

IL_00b6:
		{
			// foreach (var body in savedBodies)
			bool L_29;
			L_29 = Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_0043;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xCF, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(193)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCF, IL_00cf)
	}

IL_00cf:
	{
		// GameObject pref = Instantiate(simulatingPrefab,startPosition,Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_simulatingPrefab_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = ___startPosition1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_30, L_31, L_32, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_33;
		// pref.transform.position = startPosition;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = V_0;
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = ___startPosition1;
		NullCheck(L_35);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_35, L_36, /*hidden argument*/NULL);
		// pref.GetComponent<Rigidbody>().AddForce(force);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_0;
		NullCheck(L_37);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_38;
		L_38 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_37, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = ___force0;
		NullCheck(L_38);
		Rigidbody_AddForce_mDFB0D57C25682B826999B0074F5C0FD399C6401D(L_38, L_39, /*hidden argument*/NULL);
		// Physics.autoSimulation = false;
		Physics_set_autoSimulation_mB36DD41F15B4BDC92CD9F6A59F2C8FD052E294DF((bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < maxIterations; i++)
		V_6 = 0;
		goto IL_01d0;
	}

IL_0107:
	{
		// if (pref.GetComponent<simulationCollisions>().collisionChecker == true)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_0;
		NullCheck(L_40);
		simulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D * L_41;
		L_41 = GameObject_GetComponent_TissimulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D_mC151E3AD649B6AA0949509904A5449903F735E9E(L_40, /*hidden argument*/GameObject_GetComponent_TissimulationCollisions_t3651281B845E62748F9956B6AF8EAFF34EC7203D_mC151E3AD649B6AA0949509904A5449903F735E9E_RuntimeMethod_var);
		NullCheck(L_41);
		bool L_42 = L_41->get_collisionChecker_4();
		if (!L_42)
		{
			goto IL_01c0;
		}
	}
	{
		// Destroy(pref);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_43, /*hidden argument*/NULL);
		// Physics.autoSimulation = true;
		Physics_set_autoSimulation_mB36DD41F15B4BDC92CD9F6A59F2C8FD052E294DF((bool)1, /*hidden argument*/NULL);
		// foreach (var body in savedBodies)
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_44 = __this->get_savedBodies_7();
		NullCheck(L_44);
		Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA  L_45;
		L_45 = Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42(L_44, /*hidden argument*/Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42_RuntimeMethod_var);
		V_4 = L_45;
	}

IL_0130:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01a5;
		}

IL_0132:
		{
			// foreach (var body in savedBodies)
			KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  L_46;
			L_46 = Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_inline((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_RuntimeMethod_var);
			V_7 = L_46;
			// body.Key.transform.position = body.Value.position;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_47;
			L_47 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_47);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
			L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_47, /*hidden argument*/NULL);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_49;
			L_49 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_49);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50 = L_49->get_position_0();
			NullCheck(L_48);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_48, L_50, /*hidden argument*/NULL);
			// body.Key.transform.rotation = body.Value.rotation;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_51;
			L_51 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_51);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
			L_52 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_51, /*hidden argument*/NULL);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_53;
			L_53 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_53);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_54 = L_53->get_rotation_1();
			NullCheck(L_52);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_52, L_54, /*hidden argument*/NULL);
			// body.Key.velocity = body.Value.velocity;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_55;
			L_55 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_56;
			L_56 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_56);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = L_56->get_velocity_2();
			NullCheck(L_55);
			Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_55, L_57, /*hidden argument*/NULL);
			// body.Key.angularVelocity = body.Value.angularVelocity;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_58;
			L_58 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_59;
			L_59 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_7), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_59);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60 = L_59->get_angularVelocity_3();
			NullCheck(L_58);
			Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_58, L_60, /*hidden argument*/NULL);
		}

IL_01a5:
		{
			// foreach (var body in savedBodies)
			bool L_61;
			L_61 = Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D_RuntimeMethod_var);
			if (L_61)
			{
				goto IL_0132;
			}
		}

IL_01ae:
		{
			IL2CPP_LEAVE(0x1BE, FINALLY_01b0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01b0;
	}

FINALLY_01b0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(432)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(432)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1BE, IL_01be)
	}

IL_01be:
	{
		// return true;
		return (bool)1;
	}

IL_01c0:
	{
		// Physics.Simulate(Time.fixedDeltaTime);
		float L_62;
		L_62 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Physics_Simulate_m31460BDCDC045AB4EBFF6A93220CE651466B44E7(L_62, /*hidden argument*/NULL);
		// for (int i = 0; i < maxIterations; i++)
		int32_t L_63 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_01d0:
	{
		// for (int i = 0; i < maxIterations; i++)
		int32_t L_64 = V_6;
		int32_t L_65 = __this->get_maxIterations_8();
		if ((((int32_t)L_64) < ((int32_t)L_65)))
		{
			goto IL_0107;
		}
	}
	{
		// Destroy(pref);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_66, /*hidden argument*/NULL);
		// Physics.autoSimulation = true;
		Physics_set_autoSimulation_mB36DD41F15B4BDC92CD9F6A59F2C8FD052E294DF((bool)1, /*hidden argument*/NULL);
		// foreach (var body in savedBodies)
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_67 = __this->get_savedBodies_7();
		NullCheck(L_67);
		Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA  L_68;
		L_68 = Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42(L_67, /*hidden argument*/Dictionary_2_GetEnumerator_m1880630DF18EE7C4D965D32DDAE3E4BDDEB65A42_RuntimeMethod_var);
		V_4 = L_68;
	}

IL_01f6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_026b;
		}

IL_01f8:
		{
			// foreach (var body in savedBodies)
			KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660  L_69;
			L_69 = Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_inline((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_get_Current_m896C49B8A952A9DB321C20D4A671E722F9B2B642_RuntimeMethod_var);
			V_8 = L_69;
			// body.Key.transform.position = body.Value.position;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_70;
			L_70 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_70);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
			L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_70, /*hidden argument*/NULL);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_72;
			L_72 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_72);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_73 = L_72->get_position_0();
			NullCheck(L_71);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_71, L_73, /*hidden argument*/NULL);
			// body.Key.transform.rotation = body.Value.rotation;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_74;
			L_74 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			NullCheck(L_74);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
			L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_76;
			L_76 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_76);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_77 = L_76->get_rotation_1();
			NullCheck(L_75);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_75, L_77, /*hidden argument*/NULL);
			// body.Key.velocity = body.Value.velocity;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_78;
			L_78 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_79;
			L_79 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_79);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = L_79->get_velocity_2();
			NullCheck(L_78);
			Rigidbody_set_velocity_m8DC0988916EB38DFD7D4584830B41D79140BF18D(L_78, L_80, /*hidden argument*/NULL);
			// body.Key.angularVelocity = body.Value.angularVelocity;
			Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_81;
			L_81 = KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mB3667E25A7686086BF630C6074A6CF5671D5B93A_RuntimeMethod_var);
			BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * L_82;
			L_82 = KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_inline((KeyValuePair_2_tE80146C59E88C15247BF4934524CE4BF4A3BA660 *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_mB4892290FE8EAB5413A2D57129B7CCE28948D933_RuntimeMethod_var);
			NullCheck(L_82);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = L_82->get_angularVelocity_3();
			NullCheck(L_81);
			Rigidbody_set_angularVelocity_m3A40B7F195E9E217AE29A0964D7E7540E2E23080(L_81, L_83, /*hidden argument*/NULL);
		}

IL_026b:
		{
			// foreach (var body in savedBodies)
			bool L_84;
			L_84 = Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m82880984B48135EE8C3A9E269124E2A8C974D26D_RuntimeMethod_var);
			if (L_84)
			{
				goto IL_01f8;
			}
		}

IL_0274:
		{
			IL2CPP_LEAVE(0x284, FINALLY_0276);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0276;
	}

FINALLY_0276:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9((Enumerator_t0B8E1705BE451422BCBFE0B648009BE3F1CD72CA *)(&V_4), /*hidden argument*/Enumerator_Dispose_m0CB44FFE41512333E7A8FC344F504F22B32C13C9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(630)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(630)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x284, IL_0284)
	}

IL_0284:
	{
		// return holeContainer.transform.GetChild(0).transform.GetChild(1).GetComponent<point>().hit;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = __this->get_holeContainer_6();
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_86, 0, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
		L_88 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_87, /*hidden argument*/NULL);
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_88, 1, /*hidden argument*/NULL);
		NullCheck(L_89);
		point_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A * L_90;
		L_90 = Component_GetComponent_Tispoint_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A_m082EB7B668C6DDD332B7207D4AB867FB290BC9FF(L_89, /*hidden argument*/Component_GetComponent_Tispoint_t278A2B90FBCAED56F9ED75FFAA003F7D135A6E5A_m082EB7B668C6DDD332B7207D4AB867FB290BC9FF_RuntimeMethod_var);
		NullCheck(L_90);
		bool L_91 = L_90->get_hit_4();
		return L_91;
	}
}
// System.Void trajectory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void trajectory__ctor_m339541AF1A2D3C444BB724F04F1BE32985A6D210 (trajectory_t669171B35B509B888C1ED2736822D8DBD66BA509 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<Rigidbody, BodyData> savedBodies = new Dictionary<Rigidbody, BodyData>();
		Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F * L_0 = (Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F *)il2cpp_codegen_object_new(Dictionary_2_tD32DCBC23F2E9474CCB3F0EFB9212EDFB3F8FD0F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4(L_0, /*hidden argument*/Dictionary_2__ctor_m528F3BD869FC304BB782B81D779A0AD340C0D7C4_RuntimeMethod_var);
		__this->set_savedBodies_7(L_0);
		// int maxIterations = 500;
		__this->set_maxIterations_8(((int32_t)500));
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
// System.Void trajectory/BodyData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyData__ctor_mCA56704AB5CCC8FBE70FF6D491FB8AA74574C085 (BodyData_tAD36E6EF4C3E8746F70E81DF12DF58C115A86FF5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * EventSystem_get_currentSelectedGameObject_m999F9BFD4C20E2F00C56D4FED89602B6077EF70D_inline (EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_CurrentSelected; }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_CurrentSelected_10();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}

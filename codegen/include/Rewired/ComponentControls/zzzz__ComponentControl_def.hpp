#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/ComponentControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentControl)
namespace Rewired::ComponentControls {
class ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH;
}
namespace Rewired::ComponentControls {
class IComponentControl;
}
namespace Rewired::ComponentControls {
class IComponentController;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Rewired::ComponentControls {
class ComponentControl;
}
namespace Rewired::ComponentControls {
class ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::ComponentControl*);
MARK_REF_T(::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::ComponentControl*, "Rewired.ComponentControls", "ComponentControl");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH*, "Rewired.ComponentControls", "ComponentControl/umHvIGCtHNbeREGlnhfLiMwoDTXH");
// Dependencies System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.ComponentControl/umHvIGCtHNbeREGlnhfLiMwoDTXH
class CORDL_TYPE ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH : public ::System::Object {
public:
// Declarations
/// @brief Field NwgwlmwtDdLqVLJWvZrOrMLDeZeX, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NwgwlmwtDdLqVLJWvZrOrMLDeZeX, put=__cordl_internal_set_NwgwlmwtDdLqVLJWvZrOrMLDeZeX)) ::System::Object*  NwgwlmwtDdLqVLJWvZrOrMLDeZeX;

/// @brief Field QeTFcsmsBdTSDbImhdrYvrvXGTVn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_QeTFcsmsBdTSDbImhdrYvrvXGTVn, put=__cordl_internal_set_QeTFcsmsBdTSDbImhdrYvrvXGTVn)) ::UnityW<::Rewired::ComponentControls::ComponentControl>  QeTFcsmsBdTSDbImhdrYvrvXGTVn;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field iRZrlXjPfNAxkHwWrIDZdGsCipZuA, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_iRZrlXjPfNAxkHwWrIDZdGsCipZuA, put=__cordl_internal_set_iRZrlXjPfNAxkHwWrIDZdGsCipZuA)) int32_t  iRZrlXjPfNAxkHwWrIDZdGsCipZuA;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1818ef000, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Object* const& __cordl_internal_get_NwgwlmwtDdLqVLJWvZrOrMLDeZeX() const;

constexpr ::System::Object*& __cordl_internal_get_NwgwlmwtDdLqVLJWvZrOrMLDeZeX() ;

constexpr ::UnityW<::Rewired::ComponentControls::ComponentControl> const& __cordl_internal_get_QeTFcsmsBdTSDbImhdrYvrvXGTVn() const;

constexpr ::UnityW<::Rewired::ComponentControls::ComponentControl>& __cordl_internal_get_QeTFcsmsBdTSDbImhdrYvrvXGTVn() ;

constexpr int32_t const& __cordl_internal_get_iRZrlXjPfNAxkHwWrIDZdGsCipZuA() const;

constexpr int32_t& __cordl_internal_get_iRZrlXjPfNAxkHwWrIDZdGsCipZuA() ;

constexpr void __cordl_internal_set_NwgwlmwtDdLqVLJWvZrOrMLDeZeX(::System::Object*  value) ;

constexpr void __cordl_internal_set_QeTFcsmsBdTSDbImhdrYvrvXGTVn(::UnityW<::Rewired::ComponentControls::ComponentControl>  value) ;

constexpr void __cordl_internal_set_iRZrlXjPfNAxkHwWrIDZdGsCipZuA(int32_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH(ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH(ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2734};

/// @brief Field iRZrlXjPfNAxkHwWrIDZdGsCipZuA, offset: 0x10, size: 0x4, def value: None
 int32_t  ___iRZrlXjPfNAxkHwWrIDZdGsCipZuA;

/// @brief Field NwgwlmwtDdLqVLJWvZrOrMLDeZeX, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___NwgwlmwtDdLqVLJWvZrOrMLDeZeX;

/// @brief Field QeTFcsmsBdTSDbImhdrYvrvXGTVn, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::ComponentControl>  ___QeTFcsmsBdTSDbImhdrYvrvXGTVn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH, ___iRZrlXjPfNAxkHwWrIDZdGsCipZuA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH, ___NwgwlmwtDdLqVLJWvZrOrMLDeZeX) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH, ___QeTFcsmsBdTSDbImhdrYvrvXGTVn) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH) == 0x28, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.ComponentControl
class CORDL_TYPE ComponentControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using umHvIGCtHNbeREGlnhfLiMwoDTXH = ::Rewired::ComponentControls::ComponentControl_umHvIGCtHNbeREGlnhfLiMwoDTXH;

/// @brief Field JvdKVOrszVUyIdzPcgzZZEoWqiUc, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_JvdKVOrszVUyIdzPcgzZZEoWqiUc, put=__cordl_internal_set_JvdKVOrszVUyIdzPcgzZZEoWqiUc)) bool  JvdKVOrszVUyIdzPcgzZZEoWqiUc;

/// @brief Field _controller, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::Rewired::ComponentControls::IComponentController*  _controller;

/// @brief Field _lastUpdateFrame, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateFrame, put=__cordl_internal_set__lastUpdateFrame)) int32_t  _lastUpdateFrame;

 __declspec(property(get=VGNBIvDnVMTTlVbiwEVGrQlUDvHQ)) bool  jHlJjYGsjvLRJcifXdJpmcbxDfQO;

/// @brief Field obEzXIjfZWxZGHsclDCAsTaRZqnh, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_obEzXIjfZWxZGHsclDCAsTaRZqnh, put=__cordl_internal_set_obEzXIjfZWxZGHsclDCAsTaRZqnh)) bool  obEzXIjfZWxZGHsclDCAsTaRZqnh;

 __declspec(property(get=xmLjIfypZAaxWbrhybdfGruNoQDp)) bool  uXWYjUcLyzUrPpkIoLDHGyOWnkqh;

/// @brief Convert operator to "::Rewired::ComponentControls::IComponentControl"
constexpr operator  ::Rewired::ComponentControls::IComponentControl*() noexcept;

/// @brief Method Awake, addr 0x1818d6610, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BpDuPctkcwQqdqgYHysJrUKirsfe, addr 0x1818d6620, size 0x10, virtual false, abstract: false, final false
inline bool BpDuPctkcwQqdqgYHysJrUKirsfe() ;

/// @brief Method ClearValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearValue() ;

/// @brief Method FindController, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Rewired::ComponentControls::IComponentController* FindController() ;

/// @brief Method GetRequiredControllerType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Type* GetRequiredControllerType() ;

/// @brief Method GrCGlByTQjWDJLPNAJbHSgMNMnpG, addr 0x1818d6630, size 0x10, virtual false, abstract: false, final false
inline void GrCGlByTQjWDJLPNAJbHSgMNMnpG() ;

/// @brief Method HOrbLoYMGzIaYFTlkjpLuLzGGMEk, addr 0x1818d6640, size 0x40, virtual true, abstract: false, final false
inline void HOrbLoYMGzIaYFTlkjpLuLzGGMEk() ;

/// @brief Method HbBuHwEteLCdZdclBhOUhSjJgikN, addr 0x1818d6680, size 0x60, virtual false, abstract: false, final false
inline void HbBuHwEteLCdZdclBhOUhSjJgikN() ;

/// @brief Method JsaGATJLGvEkaIZzLZUnpgPpTLCUA, addr 0x1818d66e0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* JsaGATJLGvEkaIZzLZUnpgPpTLCUA() ;

static inline ::Rewired::ComponentControls::ComponentControl* New_ctor() ;

/// @brief Method OnCanvasGroupChanged, addr 0x1818d6730, size 0x20, virtual true, abstract: false, final false
inline void OnCanvasGroupChanged() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0x1818d6750, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818d6790, size 0x80, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTransformParentChanged, addr 0x1818d6730, size 0x20, virtual true, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method OnValidate, addr 0x1818d6810, size 0x20, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method OtZMiaHQBipNrMkoaUIMqbogNpIU, addr 0x1818d6830, size 0x50, virtual false, abstract: false, final false
inline void OtZMiaHQBipNrMkoaUIMqbogNpIU() ;

/// @brief Method Reset, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Rewired.ComponentControls.IComponentControl.Update, addr 0x1818d6880, size 0x40, virtual true, abstract: false, final true
inline void Rewired_ComponentControls_IComponentControl_Update() ;

/// @brief Method Start, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TljQlSdlssgkYEleEdkUEJCeMfvaA, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void TljQlSdlssgkYEleEdkUEJCeMfvaA() ;

/// @brief Method UEPIwyVAOhDjgUXoYzRqjIDRyHvQ, addr 0x1818d6810, size 0x20, virtual true, abstract: false, final false
inline void UEPIwyVAOhDjgUXoYzRqjIDRyHvQ() ;

/// @brief Method VGNBIvDnVMTTlVbiwEVGrQlUDvHQ, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool VGNBIvDnVMTTlVbiwEVGrQlUDvHQ() ;

constexpr bool const& __cordl_internal_get_JvdKVOrszVUyIdzPcgzZZEoWqiUc() const;

constexpr bool& __cordl_internal_get_JvdKVOrszVUyIdzPcgzZZEoWqiUc() ;

constexpr ::Rewired::ComponentControls::IComponentController* const& __cordl_internal_get__controller() const;

constexpr ::Rewired::ComponentControls::IComponentController*& __cordl_internal_get__controller() ;

constexpr int32_t const& __cordl_internal_get__lastUpdateFrame() const;

constexpr int32_t& __cordl_internal_get__lastUpdateFrame() ;

constexpr bool const& __cordl_internal_get_obEzXIjfZWxZGHsclDCAsTaRZqnh() const;

constexpr bool& __cordl_internal_get_obEzXIjfZWxZGHsclDCAsTaRZqnh() ;

constexpr void __cordl_internal_set_JvdKVOrszVUyIdzPcgzZZEoWqiUc(bool  value) ;

constexpr void __cordl_internal_set__controller(::Rewired::ComponentControls::IComponentController*  value) ;

constexpr void __cordl_internal_set__lastUpdateFrame(int32_t  value) ;

constexpr void __cordl_internal_set_obEzXIjfZWxZGHsclDCAsTaRZqnh(bool  value) ;

/// @brief Method .ctor, addr 0x1818d68c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method iFhqiDKDoeEGaJxYNihMRwzNmpHu, addr 0x1818d68d0, size 0x10, virtual false, abstract: false, final false
inline bool iFhqiDKDoeEGaJxYNihMRwzNmpHu() ;

/// @brief Convert to "::Rewired::ComponentControls::IComponentControl"
constexpr ::Rewired::ComponentControls::IComponentControl* i___Rewired__ComponentControls__IComponentControl() noexcept;

/// @brief Method kIUqvJITllRltgJbQUVaaQdfhspBA, addr 0x1818d68e0, size 0x170, virtual false, abstract: false, final false
inline bool kIUqvJITllRltgJbQUVaaQdfhspBA(bool  _cordl_fixed_empty_name_whitespace, bool  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method kyntnGaGgpGDRFGnSlrJDgMCvCYWb, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::ComponentControls::IComponentController* kyntnGaGgpGDRFGnSlrJDgMCvCYWb() ;

/// @brief Method nIWcGLrXoiCMXLFIGAtSEDVfkAzfA, addr 0x1818d6a50, size 0x10, virtual true, abstract: false, final false
inline void nIWcGLrXoiCMXLFIGAtSEDVfkAzfA() ;

/// @brief Method ploAHuxJETGzLXyyNFqpLTzgHmSO, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void ploAHuxJETGzLXyyNFqpLTzgHmSO() ;

/// @brief Method qXQAOxntrnzVHWDSUCaAVaAhceTaA, addr 0x1818d6a60, size 0x50, virtual true, abstract: false, final false
inline bool qXQAOxntrnzVHWDSUCaAVaAhceTaA() ;

/// @brief Method rQYJvJRmUFggEMLUhuaxqQHfipB, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void rQYJvJRmUFggEMLUhuaxqQHfipB() ;

/// @brief Method sFCydAGzAXoVpGNixbbgHmZkbrnab, addr 0x1818d6ab0, size 0x70, virtual true, abstract: false, final false
inline void sFCydAGzAXoVpGNixbbgHmZkbrnab() ;

/// @brief Method xmLjIfypZAaxWbrhybdfGruNoQDp, addr 0x1802f1be0, size 0x10, virtual false, abstract: false, final false
inline bool xmLjIfypZAaxWbrhybdfGruNoQDp() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentControl(ComponentControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentControl(ComponentControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2735};

/// @brief Field _controller, offset: 0x20, size: 0x8, def value: None
 ::Rewired::ComponentControls::IComponentController*  ____controller;

/// @brief Field JvdKVOrszVUyIdzPcgzZZEoWqiUc, offset: 0x28, size: 0x1, def value: None
 bool  ___JvdKVOrszVUyIdzPcgzZZEoWqiUc;

/// @brief Field obEzXIjfZWxZGHsclDCAsTaRZqnh, offset: 0x29, size: 0x1, def value: None
 bool  ___obEzXIjfZWxZGHsclDCAsTaRZqnh;

/// @brief Field _lastUpdateFrame, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____lastUpdateFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::ComponentControl, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentControl, ___JvdKVOrszVUyIdzPcgzZZEoWqiUc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentControl, ___obEzXIjfZWxZGHsclDCAsTaRZqnh) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentControl, ____lastUpdateFrame) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::ComponentControl) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls

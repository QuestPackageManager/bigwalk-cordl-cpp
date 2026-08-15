#pragma once
// IWYU pragma private; include "Rewired/ComponentControls/ComponentController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComponentController)
namespace Rewired::ComponentControls {
class ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP;
}
namespace Rewired::ComponentControls {
class IComponentControl;
}
namespace Rewired::ComponentControls {
class IComponentController;
}
namespace Rewired::Utils::Interfaces {
template<typename T>
class IRegistrar_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
// Forward declare root types
namespace Rewired::ComponentControls {
class ComponentController;
}
namespace Rewired::ComponentControls {
class ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP;
}
// Write type traits
MARK_REF_T(::Rewired::ComponentControls::ComponentController*);
MARK_REF_T(::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP*);
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::ComponentController*, "Rewired.ComponentControls", "ComponentController");
DEFINE_IL2CPP_CLASS(::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP*, "Rewired.ComponentControls", "ComponentController/yTxkMjgSRKUJbKDMfAveKDDklPeP");
// Dependencies System.Object
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.ComponentController/yTxkMjgSRKUJbKDMfAveKDDklPeP
class CORDL_TYPE ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP : public ::System::Object {
public:
// Declarations
/// @brief Field HhciexYJqZRfdzGBHbyHcNeZMrBH, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_HhciexYJqZRfdzGBHbyHcNeZMrBH, put=__cordl_internal_set_HhciexYJqZRfdzGBHbyHcNeZMrBH)) int32_t  HhciexYJqZRfdzGBHbyHcNeZMrBH;

/// @brief Field LFEwJnsumRkhBXPEmCMUibvdpLsHA, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LFEwJnsumRkhBXPEmCMUibvdpLsHA, put=__cordl_internal_set_LFEwJnsumRkhBXPEmCMUibvdpLsHA)) ::UnityW<::Rewired::ComponentControls::ComponentController>  LFEwJnsumRkhBXPEmCMUibvdpLsHA;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field TqeEYnPUjSkptqEQgeCMjoEyaZjBb, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_TqeEYnPUjSkptqEQgeCMjoEyaZjBb, put=__cordl_internal_set_TqeEYnPUjSkptqEQgeCMjoEyaZjBb)) ::System::Object*  TqeEYnPUjSkptqEQgeCMjoEyaZjBb;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1818ef090, size 0xa0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x181049e50, size 0x6fe0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get_HhciexYJqZRfdzGBHbyHcNeZMrBH() const;

constexpr int32_t& __cordl_internal_get_HhciexYJqZRfdzGBHbyHcNeZMrBH() ;

constexpr ::UnityW<::Rewired::ComponentControls::ComponentController> const& __cordl_internal_get_LFEwJnsumRkhBXPEmCMUibvdpLsHA() const;

constexpr ::UnityW<::Rewired::ComponentControls::ComponentController>& __cordl_internal_get_LFEwJnsumRkhBXPEmCMUibvdpLsHA() ;

constexpr ::System::Object* const& __cordl_internal_get_TqeEYnPUjSkptqEQgeCMjoEyaZjBb() const;

constexpr ::System::Object*& __cordl_internal_get_TqeEYnPUjSkptqEQgeCMjoEyaZjBb() ;

constexpr void __cordl_internal_set_HhciexYJqZRfdzGBHbyHcNeZMrBH(int32_t  value) ;

constexpr void __cordl_internal_set_LFEwJnsumRkhBXPEmCMUibvdpLsHA(::UnityW<::Rewired::ComponentControls::ComponentController>  value) ;

constexpr void __cordl_internal_set_TqeEYnPUjSkptqEQgeCMjoEyaZjBb(::System::Object*  value) ;

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
constexpr ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP(ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP(ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2736};

/// @brief Field HhciexYJqZRfdzGBHbyHcNeZMrBH, offset: 0x10, size: 0x4, def value: None
 int32_t  ___HhciexYJqZRfdzGBHbyHcNeZMrBH;

/// @brief Field TqeEYnPUjSkptqEQgeCMjoEyaZjBb, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  ___TqeEYnPUjSkptqEQgeCMjoEyaZjBb;

/// @brief Field LFEwJnsumRkhBXPEmCMUibvdpLsHA, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Rewired::ComponentControls::ComponentController>  ___LFEwJnsumRkhBXPEmCMUibvdpLsHA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP, ___HhciexYJqZRfdzGBHbyHcNeZMrBH) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP, ___TqeEYnPUjSkptqEQgeCMjoEyaZjBb) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP, ___LFEwJnsumRkhBXPEmCMUibvdpLsHA) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP) == 0x28, "Size mismatch!");

} // namespace end def Rewired::ComponentControls
// Dependencies UnityEngine.MonoBehaviour
namespace Rewired::ComponentControls {
// Is value type: false
// CS Name: Rewired.ComponentControls.ComponentController
class CORDL_TYPE ComponentController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using yTxkMjgSRKUJbKDMfAveKDDklPeP = ::Rewired::ComponentControls::ComponentController_yTxkMjgSRKUJbKDMfAveKDDklPeP;

/// @brief Field TUxDVYVgarNSwglEySWYYfYJPMrC, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_TUxDVYVgarNSwglEySWYYfYJPMrC, put=__cordl_internal_set_TUxDVYVgarNSwglEySWYYfYJPMrC)) bool  TUxDVYVgarNSwglEySWYYfYJPMrC;

/// @brief Field _controls, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__controls, put=__cordl_internal_set__controls)) ::System::Collections::Generic::List_1<::Rewired::ComponentControls::IComponentControl*>*  _controls;

/// @brief Field tokAZQfCZLosJUvKFPpdLAAWuwWp, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_tokAZQfCZLosJUvKFPpdLAAWuwWp, put=__cordl_internal_set_tokAZQfCZLosJUvKFPpdLAAWuwWp)) bool  tokAZQfCZLosJUvKFPpdLAAWuwWp;

 __declspec(property(get=NyPXvAdHSGrIPkvPucDbEoKvUUJU)) bool  vbKisgYvbfdHGtRQsUMFJBxFgKtu;

/// @brief Convert operator to "::Rewired::ComponentControls::IComponentController"
constexpr operator  ::Rewired::ComponentControls::IComponentController*() noexcept;

/// @brief Convert operator to "::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>"
constexpr operator  ::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>*() noexcept;

/// @brief Method Awake, addr 0x1818d6b20, size 0x10, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearControlValues, addr 0x1818d6b30, size 0xb0, virtual true, abstract: false, final false
inline void ClearControlValues() ;

/// @brief Method LbBCGrUTIBMjgQNqvhyOHMxKGHVP, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void LbBCGrUTIBMjgQNqvhyOHMxKGHVP() ;

static inline ::Rewired::ComponentControls::ComponentController* New_ctor() ;

/// @brief Method NyPXvAdHSGrIPkvPucDbEoKvUUJU, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool NyPXvAdHSGrIPkvPucDbEoKvUUJU() ;

/// @brief Method OnDestroy, addr 0x1818d6be0, size 0x40, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1818d6c20, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1818d6c40, size 0x90, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x180631430, size 0xa670, virtual true, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Rewired.Utils.Interfaces.IRegistrar<Rewired.ComponentControls.IComponentControl>.Deregister, addr 0x1818d6cd0, size 0x50, virtual true, abstract: false, final true
inline void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_IComponentControl__Deregister(::Rewired::ComponentControls::IComponentControl*  control) ;

/// @brief Method Rewired.Utils.Interfaces.IRegistrar<Rewired.ComponentControls.IComponentControl>.Register, addr 0x1818d6d20, size 0x40, virtual true, abstract: false, final true
inline void Rewired_Utils_Interfaces_IRegistrar_Rewired_ComponentControls_IComponentControl__Register(::Rewired::ComponentControls::IComponentControl*  control) ;

/// @brief Method Update, addr 0x1818d6d60, size 0xb0, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method ZUerUucHEiPKkzuxDQvGQUaqmHzk, addr 0x180cd17e0, size 0x170, virtual true, abstract: false, final false
inline void ZUerUucHEiPKkzuxDQvGQUaqmHzk() ;

constexpr bool const& __cordl_internal_get_TUxDVYVgarNSwglEySWYYfYJPMrC() const;

constexpr bool& __cordl_internal_get_TUxDVYVgarNSwglEySWYYfYJPMrC() ;

constexpr ::System::Collections::Generic::List_1<::Rewired::ComponentControls::IComponentControl*>* const& __cordl_internal_get__controls() const;

constexpr ::System::Collections::Generic::List_1<::Rewired::ComponentControls::IComponentControl*>*& __cordl_internal_get__controls() ;

constexpr bool const& __cordl_internal_get_tokAZQfCZLosJUvKFPpdLAAWuwWp() const;

constexpr bool& __cordl_internal_get_tokAZQfCZLosJUvKFPpdLAAWuwWp() ;

constexpr void __cordl_internal_set_TUxDVYVgarNSwglEySWYYfYJPMrC(bool  value) ;

constexpr void __cordl_internal_set__controls(::System::Collections::Generic::List_1<::Rewired::ComponentControls::IComponentControl*>*  value) ;

constexpr void __cordl_internal_set_tokAZQfCZLosJUvKFPpdLAAWuwWp(bool  value) ;

/// @brief Method .ctor, addr 0x1818d6e10, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method hldxEaAKslsVexPoMxxHPlwHuFyr, addr 0x1818d6e70, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* hldxEaAKslsVexPoMxxHPlwHuFyr() ;

/// @brief Convert to "::Rewired::ComponentControls::IComponentController"
constexpr ::Rewired::ComponentControls::IComponentController* i___Rewired__ComponentControls__IComponentController() noexcept;

/// @brief Convert to "::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>"
constexpr ::Rewired::Utils::Interfaces::IRegistrar_1<::Rewired::ComponentControls::IComponentControl*>* i___Rewired__Utils__Interfaces__IRegistrar_1___Rewired__ComponentControls__IComponentControl__() noexcept;

/// @brief Method qIlYxGjcwreVPfEDUPjgrdnhDWRh, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool qIlYxGjcwreVPfEDUPjgrdnhDWRh() ;

/// @brief Method tCqlNNMexTEjBgiLJdPMAgQJaUxib, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void tCqlNNMexTEjBgiLJdPMAgQJaUxib() ;

/// @brief Method xbKbEyoBJCJVRsCYivsYvwFBJSfl, addr 0x1818d6ec0, size 0x50, virtual false, abstract: false, final false
inline void xbKbEyoBJCJVRsCYivsYvwFBJSfl() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComponentController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComponentController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComponentController(ComponentController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComponentController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComponentController(ComponentController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2737};

/// @brief Field TUxDVYVgarNSwglEySWYYfYJPMrC, offset: 0x20, size: 0x1, def value: None
 bool  ___TUxDVYVgarNSwglEySWYYfYJPMrC;

/// @brief Field tokAZQfCZLosJUvKFPpdLAAWuwWp, offset: 0x21, size: 0x1, def value: None
 bool  ___tokAZQfCZLosJUvKFPpdLAAWuwWp;

/// @brief Field _controls, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Rewired::ComponentControls::IComponentControl*>*  ____controls;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ComponentControls::ComponentController, ___TUxDVYVgarNSwglEySWYYfYJPMrC) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentController, ___tokAZQfCZLosJUvKFPpdLAAWuwWp) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Rewired::ComponentControls::ComponentController, ____controls) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Rewired::ComponentControls::ComponentController) == 0x30, "Size mismatch!");

} // namespace end def Rewired::ComponentControls

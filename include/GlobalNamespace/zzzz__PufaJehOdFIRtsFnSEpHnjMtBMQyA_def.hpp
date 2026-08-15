#pragma once
// IWYU pragma private; include "GlobalNamespace/PufaJehOdFIRtsFnSEpHnjMtBMQyA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(PufaJehOdFIRtsFnSEpHnjMtBMQyA)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename >
class PufaJehOdFIRtsFnSEpHnjMtBMQyA;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::PufaJehOdFIRtsFnSEpHnjMtBMQyA);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::PufaJehOdFIRtsFnSEpHnjMtBMQyA, "", "PufaJehOdFIRtsFnSEpHnjMtBMQyA");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename >
// Is value type: false
// CS Name: PufaJehOdFIRtsFnSEpHnjMtBMQyA<>
class CORDL_TYPE PufaJehOdFIRtsFnSEpHnjMtBMQyA : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  obj, ::by_ref<>  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<>  value, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::System::Object*  obj, ::by_ref<>  value) ;

static inline ::GlobalNamespace::PufaJehOdFIRtsFnSEpHnjMtBMQyA<>* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PufaJehOdFIRtsFnSEpHnjMtBMQyA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PufaJehOdFIRtsFnSEpHnjMtBMQyA", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PufaJehOdFIRtsFnSEpHnjMtBMQyA(PufaJehOdFIRtsFnSEpHnjMtBMQyA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PufaJehOdFIRtsFnSEpHnjMtBMQyA", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PufaJehOdFIRtsFnSEpHnjMtBMQyA(PufaJehOdFIRtsFnSEpHnjMtBMQyA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6105};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace

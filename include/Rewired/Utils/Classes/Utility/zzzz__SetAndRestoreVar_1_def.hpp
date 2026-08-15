#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/SetAndRestoreVar_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SetAndRestoreVar_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
template<typename T>
struct SetAndRestoreVar_1;
}
// Write type traits
MARK_GEN_VAL_T(::Rewired::Utils::Classes::Utility::SetAndRestoreVar_1);
DEFINE_IL2CPP_GEN_CLASS(::Rewired::Utils::Classes::Utility::SetAndRestoreVar_1, "Rewired.Utils.Classes.Utility", "SetAndRestoreVar`1");
// Dependencies 
namespace Rewired::Utils::Classes::Utility {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Rewired.Utils.Classes.Utility.SetAndRestoreVar`1<T>
struct CORDL_TYPE SetAndRestoreVar_1 {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  _cordl_fixed_empty_name_whitespace, T  _cordl_fixed_empty_name_whitespace_param_1, ::System::Action_1<T>*  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SetAndRestoreVar_1() ;

// Ctor Parameters [CppParam { name: "pNzeMXAmLBjrzFwkmYdHuNfukWTFA", ty: "::System::Action_1<T>*", modifiers: "", def_value: None }, CppParam { name: "QVcBpbWqZvSABkOIVCCxoKtsowYn", ty: "T", modifiers: "", def_value: None }]
constexpr SetAndRestoreVar_1(::System::Action_1<T>*  pNzeMXAmLBjrzFwkmYdHuNfukWTFA, T  QVcBpbWqZvSABkOIVCCxoKtsowYn) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2989};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pNzeMXAmLBjrzFwkmYdHuNfukWTFA, offset: 0x0, size: 0x8, def value: None
 ::System::Action_1<T>*  pNzeMXAmLBjrzFwkmYdHuNfukWTFA;

/// @brief Field QVcBpbWqZvSABkOIVCCxoKtsowYn, offset: 0x8, size: 0x8, def value: None
 T  QVcBpbWqZvSABkOIVCCxoKtsowYn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Rewired::Utils::Classes::Utility

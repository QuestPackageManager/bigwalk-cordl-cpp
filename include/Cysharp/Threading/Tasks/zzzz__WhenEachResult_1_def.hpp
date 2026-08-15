#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/WhenEachResult_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(WhenEachResult_1)
namespace System {
class Exception;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
struct WhenEachResult_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::WhenEachResult_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::WhenEachResult_1, "Cysharp.Threading.Tasks", "WhenEachResult`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.WhenEachResult`1<T>
struct CORDL_TYPE WhenEachResult_1 {
public:
// Declarations
 __declspec(property(get=get_Exception)) ::System::Exception*  Exception;

 __declspec(property(get=get_IsCompletedSuccessfully)) bool  IsCompletedSuccessfully;

 __declspec(property(get=get_IsFaulted)) bool  IsFaulted;

 __declspec(property(get=get_Result)) T  Result;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T GetResult() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void TryThrow() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  result) ;

/// @brief Method get_Exception, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

/// @brief Method get_IsCompletedSuccessfully, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompletedSuccessfully() ;

/// @brief Method get_IsFaulted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsFaulted() ;

/// @brief Method get_Result, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Result() ;

// Ctor Parameters []
// @brief default ctor
constexpr WhenEachResult_1() ;

// Ctor Parameters [CppParam { name: "_Result_k__BackingField", ty: "T", modifiers: "", def_value: None }, CppParam { name: "_Exception_k__BackingField", ty: "::System::Exception*", modifiers: "", def_value: None }]
constexpr WhenEachResult_1(T  _Result_k__BackingField, ::System::Exception*  _Exception_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14424};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <Result>k__BackingField, offset: 0x0, size: 0x8, def value: None
 T  _Result_k__BackingField;

/// @brief Field <Exception>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::System::Exception*  _Exception_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks

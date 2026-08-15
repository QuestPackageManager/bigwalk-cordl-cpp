#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/ExceptionHolder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionHolder)
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class ExceptionHolder;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::ExceptionHolder*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ExceptionHolder*, "Cysharp.Threading.Tasks", "ExceptionHolder");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.ExceptionHolder
class CORDL_TYPE ExceptionHolder : public ::System::Object {
public:
// Declarations
/// @brief Field calledGet, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_calledGet, put=__cordl_internal_set_calledGet)) bool  calledGet;

/// @brief Field exception, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Method Finalize, addr 0x181e60480, size 0x30, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetException, addr 0x181e604b0, size 0x30, virtual false, abstract: false, final false
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* GetException() ;

static inline ::Cysharp::Threading::Tasks::ExceptionHolder* New_ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception) ;

constexpr bool const& __cordl_internal_get_calledGet() const;

constexpr bool& __cordl_internal_get_calledGet() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr void __cordl_internal_set_calledGet(bool  value) ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExceptionHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExceptionHolder(ExceptionHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExceptionHolder(ExceptionHolder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14441};

/// @brief Field exception, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

/// @brief Field calledGet, offset: 0x18, size: 0x1, def value: None
 bool  ___calledGet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::ExceptionHolder, ___exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::ExceptionHolder, ___calledGet) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::ExceptionHolder) == 0x20, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks

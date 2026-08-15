#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/SingleAssignmentDisposable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SingleAssignmentDisposable)
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class SingleAssignmentDisposable;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable*, "Cysharp.Threading.Tasks.Internal", "SingleAssignmentDisposable");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable
class CORDL_TYPE SingleAssignmentDisposable : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Disposable, put=set_Disposable)) ::System::IDisposable*  Disposable;

 __declspec(property(get=get_IsDisposed)) bool  IsDisposed;

/// @brief Field current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) ::System::IDisposable*  current;

/// @brief Field disposed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_disposed, put=__cordl_internal_set_disposed)) bool  disposed;

/// @brief Field gate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_gate, put=__cordl_internal_set_gate)) ::System::Object*  gate;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x181e801a0, size 0xd0, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable* New_ctor() ;

constexpr ::System::IDisposable* const& __cordl_internal_get_current() const;

constexpr ::System::IDisposable*& __cordl_internal_get_current() ;

constexpr bool const& __cordl_internal_get_disposed() const;

constexpr bool& __cordl_internal_get_disposed() ;

constexpr ::System::Object* const& __cordl_internal_get_gate() const;

constexpr ::System::Object*& __cordl_internal_get_gate() ;

constexpr void __cordl_internal_set_current(::System::IDisposable*  value) ;

constexpr void __cordl_internal_set_disposed(bool  value) ;

constexpr void __cordl_internal_set_gate(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x1805d7ee0, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Disposable, addr 0x1802ecc10, size 0x10, virtual false, abstract: false, final false
inline ::System::IDisposable* get_Disposable() ;

/// @brief Method get_IsDisposed, addr 0x181e80270, size 0xa0, virtual false, abstract: false, final false
inline bool get_IsDisposed() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Disposable, addr 0x181e80310, size 0x130, virtual false, abstract: false, final false
inline void set_Disposable(::System::IDisposable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SingleAssignmentDisposable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SingleAssignmentDisposable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SingleAssignmentDisposable(SingleAssignmentDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SingleAssignmentDisposable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SingleAssignmentDisposable(SingleAssignmentDisposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14751};

/// @brief Field gate, offset: 0x10, size: 0x8, def value: None
 ::System::Object*  ___gate;

/// @brief Field current, offset: 0x18, size: 0x8, def value: None
 ::System::IDisposable*  ___current;

/// @brief Field disposed, offset: 0x20, size: 0x1, def value: None
 bool  ___disposed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable, ___gate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable, ___current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable, ___disposed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::SingleAssignmentDisposable) == 0x28, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal

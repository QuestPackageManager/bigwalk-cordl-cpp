#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Internal/EmptyDisposable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyDisposable)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks::Internal {
class EmptyDisposable;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::Internal::EmptyDisposable*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::Internal::EmptyDisposable*, "Cysharp.Threading.Tasks.Internal", "EmptyDisposable");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks::Internal {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.Internal.EmptyDisposable
class CORDL_TYPE EmptyDisposable : public ::System::Object {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Cysharp::Threading::Tasks::Internal::EmptyDisposable*  Instance;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::Cysharp::Threading::Tasks::Internal::EmptyDisposable* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::Internal::EmptyDisposable* getStaticF_Instance() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_Instance(::Cysharp::Threading::Tasks::Internal::EmptyDisposable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmptyDisposable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmptyDisposable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmptyDisposable(EmptyDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmptyDisposable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmptyDisposable(EmptyDisposable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14750};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::Internal::EmptyDisposable) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks::Internal

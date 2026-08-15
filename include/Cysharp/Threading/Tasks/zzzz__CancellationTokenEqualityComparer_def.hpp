#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenEqualityComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CancellationTokenEqualityComparer)
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class CancellationTokenEqualityComparer;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer*, "Cysharp.Threading.Tasks", "CancellationTokenEqualityComparer");
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.CancellationTokenEqualityComparer
class CORDL_TYPE CancellationTokenEqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*  Default;

/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*() noexcept;

/// @brief Method Equals, addr 0x18098c7b0, size 0x4b0, virtual true, abstract: false, final true
inline bool Equals(::System::Threading::CancellationToken  x, ::System::Threading::CancellationToken  y) ;

/// @brief Method GetHashCode, addr 0x181e5d720, size 0x20, virtual true, abstract: false, final true
inline int32_t GetHashCode(::System::Threading::CancellationToken  obj) ;

static inline ::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>* getStaticF_Default() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>* i___System__Collections__Generic__IEqualityComparer_1___System__Threading__CancellationToken_() noexcept;

static inline void setStaticF_Default(::System::Collections::Generic::IEqualityComparer_1<::System::Threading::CancellationToken>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CancellationTokenEqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenEqualityComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CancellationTokenEqualityComparer(CancellationTokenEqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CancellationTokenEqualityComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CancellationTokenEqualityComparer(CancellationTokenEqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::CancellationTokenEqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks

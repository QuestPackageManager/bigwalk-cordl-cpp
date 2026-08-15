#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AsyncUnit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncUnit)
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::AsyncUnit);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncUnit, "Cysharp.Threading.Tasks", "AsyncUnit");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.AsyncUnit
#pragma pack(push, 0)
struct CORDL_TYPE AsyncUnit {
public:
// Declarations
/// @brief Field Default, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_Default, put=setStaticF_Default)) ::Cysharp::Threading::Tasks::AsyncUnit  Default;

/// @brief Convert operator to "::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>*() ;

/// @brief Method Equals, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Cysharp::Threading::Tasks::AsyncUnit  other) ;

/// @brief Method GetHashCode, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x18172d460, size 0x20, virtual true, abstract: false, final false
inline ::StringW ToString() ;

static inline ::Cysharp::Threading::Tasks::AsyncUnit getStaticF_Default() ;

/// @brief Convert to "::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::System::IEquatable_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___System__IEquatable_1___Cysharp__Threading__Tasks__AsyncUnit_() ;

static inline void setStaticF_Default(::Cysharp::Threading::Tasks::AsyncUnit  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncUnit() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14176};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncUnit) == 0x1, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks

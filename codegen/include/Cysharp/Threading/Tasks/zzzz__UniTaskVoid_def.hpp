#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskVoid.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(UniTaskVoid)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::UniTaskVoid);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskVoid, "Cysharp.Threading.Tasks", "UniTaskVoid");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTaskVoid
#pragma pack(push, 0)
struct CORDL_TYPE UniTaskVoid {
public:
// Declarations
/// @brief Method Forget, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void Forget() ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTaskVoid() ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
 uint8_t  _cordl_size_padding[0x1];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskVoid) == 0x1, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks

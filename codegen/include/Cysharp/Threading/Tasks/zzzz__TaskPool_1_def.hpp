#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/TaskPool_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TaskPool_1)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
template<typename T>
struct TaskPool_1;
}
// Write type traits
MARK_GEN_VAL_T(::Cysharp::Threading::Tasks::TaskPool_1);
DEFINE_IL2CPP_GEN_CLASS(::Cysharp::Threading::Tasks::TaskPool_1, "Cysharp.Threading.Tasks", "TaskPool`1");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.TaskPool`1<T>
struct CORDL_TYPE TaskPool_1 {
public:
// Declarations
 __declspec(property(get=get_Size)) int32_t  Size;

/// @brief Method TryPop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryPop(::by_ref<T>  result) ;

/// @brief Method TryPush, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryPush(T  item) ;

/// @brief Method get_Size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Size() ;

// Ctor Parameters []
// @brief default ctor
constexpr TaskPool_1() ;

// Ctor Parameters [CppParam { name: "gate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "root", ty: "T", modifiers: "", def_value: None }]
constexpr TaskPool_1(int32_t  gate, int32_t  size, T  root) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14267};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field gate, offset: 0x0, size: 0x4, def value: None
 int32_t  gate;

/// @brief Field size, offset: 0x4, size: 0x4, def value: None
 int32_t  size;

/// @brief Field root, offset: 0x8, size: 0x8, def value: None
 T  root;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks

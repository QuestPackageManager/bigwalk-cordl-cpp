#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/DelayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DelayType)
// Forward declare root types
namespace Cysharp::Threading::Tasks {
struct DelayType;
}
// Write type traits
MARK_VAL_T(::Cysharp::Threading::Tasks::DelayType);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::DelayType, "Cysharp.Threading.Tasks", "DelayType");
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.DelayType
struct CORDL_TYPE DelayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DelayType_Unwrapped
enum struct __DelayType_Unwrapped : int32_t {
__E_DeltaTime = static_cast<int32_t>(0x0),
__E_UnscaledDeltaTime = static_cast<int32_t>(0x1),
__E_Realtime = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DelayType_Unwrapped () const noexcept {
return static_cast<__DelayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DelayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DelayType(int32_t  value__) noexcept;

/// @brief Field DeltaTime value: I32(0)
static ::Cysharp::Threading::Tasks::DelayType const DeltaTime;

/// @brief Field Realtime value: I32(2)
static ::Cysharp::Threading::Tasks::DelayType const Realtime;

/// @brief Field UnscaledDeltaTime value: I32(1)
static ::Cysharp::Threading::Tasks::DelayType const UnscaledDeltaTime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::DelayType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::DelayType) == 0x4, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks

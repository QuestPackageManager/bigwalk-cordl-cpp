#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ExecuteDuringEditMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExecuteDuringEditMode)
namespace WaveHarmonic::Crest {
struct ExecuteDuringEditMode_Include;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct ExecuteDuringEditMode_Include;
}
namespace WaveHarmonic::Crest {
class ExecuteDuringEditMode;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include);
MARK_REF_T(::WaveHarmonic::Crest::ExecuteDuringEditMode*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include, "WaveHarmonic.Crest", "ExecuteDuringEditMode/Include");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ExecuteDuringEditMode*, "WaveHarmonic.Crest", "ExecuteDuringEditMode");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.ExecuteDuringEditMode/Include
struct CORDL_TYPE ExecuteDuringEditMode_Include {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExecuteDuringEditMode_Include_Unwrapped
enum struct __ExecuteDuringEditMode_Include_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PrefabStage = static_cast<int32_t>(0x1),
__E_BuildPipeline = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExecuteDuringEditMode_Include_Unwrapped () const noexcept {
return static_cast<__ExecuteDuringEditMode_Include_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExecuteDuringEditMode_Include() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ExecuteDuringEditMode_Include(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include const All;

/// @brief Field BuildPipeline value: I32(2)
static ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include const BuildPipeline;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include const None;

/// @brief Field PrefabStage value: I32(1)
static ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include const PrefabStage;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20076};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Attribute, WaveHarmonic.Crest.ExecuteDuringEditMode::Include
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ExecuteDuringEditMode
class CORDL_TYPE ExecuteDuringEditMode : public ::System::Attribute {
public:
// Declarations
using Include = ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include;

/// @brief Field _Including, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Including, put=__cordl_internal_set__Including)) ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  _Including;

static inline ::WaveHarmonic::Crest::ExecuteDuringEditMode* New_ctor(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  including) ;

constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include const& __cordl_internal_get__Including() const;

constexpr ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include& __cordl_internal_get__Including() ;

constexpr void __cordl_internal_set__Including(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  including) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExecuteDuringEditMode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExecuteDuringEditMode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExecuteDuringEditMode(ExecuteDuringEditMode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteDuringEditMode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExecuteDuringEditMode(ExecuteDuringEditMode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20077};

/// @brief Field _Including, offset: 0x10, size: 0x4, def value: None
 ::WaveHarmonic::Crest::ExecuteDuringEditMode_Include  ____Including;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ExecuteDuringEditMode, ____Including) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ExecuteDuringEditMode) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest

#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Ambience/AmbienceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AmbienceData)
namespace Rowlan::Genesis::Ambience {
struct AmbienceData_Module;
}
// Forward declare root types
namespace Rowlan::Genesis::Ambience {
struct AmbienceData_Module;
}
namespace Rowlan::Genesis::Ambience {
class AmbienceData;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::Ambience::AmbienceData_Module);
MARK_REF_T(::Rowlan::Genesis::Ambience::AmbienceData*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Ambience::AmbienceData_Module, "Rowlan.Genesis.Ambience", "AmbienceData/Module");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Ambience::AmbienceData*, "Rowlan.Genesis.Ambience", "AmbienceData");
// Dependencies 
namespace Rowlan::Genesis::Ambience {
// Is value type: true
// CS Name: Rowlan.Genesis.Ambience.AmbienceData/Module
struct CORDL_TYPE AmbienceData_Module {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AmbienceData_Module_Unwrapped
enum struct __AmbienceData_Module_Unwrapped : int32_t {
__E_PostProcessing = static_cast<int32_t>(0x0),
__E_TimeOfDay = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AmbienceData_Module_Unwrapped () const noexcept {
return static_cast<__AmbienceData_Module_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AmbienceData_Module() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AmbienceData_Module(int32_t  value__) noexcept;

/// @brief Field PostProcessing value: I32(0)
static ::Rowlan::Genesis::Ambience::AmbienceData_Module const PostProcessing;

/// @brief Field TimeOfDay value: I32(1)
static ::Rowlan::Genesis::Ambience::AmbienceData_Module const TimeOfDay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20434};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Ambience::AmbienceData_Module, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Ambience::AmbienceData_Module) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Ambience
// Dependencies Rowlan.Genesis.Ambience.AmbienceData::Module, UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Ambience {
// Is value type: false
// CS Name: Rowlan.Genesis.Ambience.AmbienceData
class CORDL_TYPE AmbienceData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Module = ::Rowlan::Genesis::Ambience::AmbienceData_Module;

/// @brief Field module, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_module, put=__cordl_internal_set__cordl_module)) ::Rowlan::Genesis::Ambience::AmbienceData_Module  _cordl_module;

/// @brief Field helpBoxVisible, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

static inline ::Rowlan::Genesis::Ambience::AmbienceData* New_ctor() ;

constexpr ::Rowlan::Genesis::Ambience::AmbienceData_Module const& __cordl_internal_get__cordl_module() const;

constexpr ::Rowlan::Genesis::Ambience::AmbienceData_Module& __cordl_internal_get__cordl_module() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr void __cordl_internal_set__cordl_module(::Rowlan::Genesis::Ambience::AmbienceData_Module  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AmbienceData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AmbienceData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AmbienceData(AmbienceData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AmbienceData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AmbienceData(AmbienceData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20435};

/// @brief Field helpBoxVisible, offset: 0x18, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field module, offset: 0x1c, size: 0x4, def value: None
 ::Rowlan::Genesis::Ambience::AmbienceData_Module  ____cordl_module;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Ambience::AmbienceData, ___helpBoxVisible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Ambience::AmbienceData, ____cordl_module) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Ambience::AmbienceData) == 0x20, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Ambience

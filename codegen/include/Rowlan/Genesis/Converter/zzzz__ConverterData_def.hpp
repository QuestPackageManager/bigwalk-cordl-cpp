#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Converter/ConverterData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConverterData)
namespace Rowlan::Genesis::Converter {
class ConverterData_HeightmapSettings;
}
namespace Rowlan::Genesis::Converter {
struct ConverterData_Module;
}
// Forward declare root types
namespace Rowlan::Genesis::Converter {
struct ConverterData_Module;
}
namespace Rowlan::Genesis::Converter {
class ConverterData;
}
namespace Rowlan::Genesis::Converter {
class ConverterData_HeightmapSettings;
}
// Write type traits
MARK_VAL_T(::Rowlan::Genesis::Converter::ConverterData_Module);
MARK_REF_T(::Rowlan::Genesis::Converter::ConverterData*);
MARK_REF_T(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*);
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Converter::ConverterData_Module, "Rowlan.Genesis.Converter", "ConverterData/Module");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Converter::ConverterData*, "Rowlan.Genesis.Converter", "ConverterData");
DEFINE_IL2CPP_CLASS(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*, "Rowlan.Genesis.Converter", "ConverterData/HeightmapSettings");
// Dependencies 
namespace Rowlan::Genesis::Converter {
// Is value type: true
// CS Name: Rowlan.Genesis.Converter.ConverterData/Module
struct CORDL_TYPE ConverterData_Module {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ConverterData_Module_Unwrapped
enum struct __ConverterData_Module_Unwrapped : int32_t {
__E_Terrain = static_cast<int32_t>(0x0),
__E_Heightmap = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConverterData_Module_Unwrapped () const noexcept {
return static_cast<__ConverterData_Module_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ConverterData_Module() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConverterData_Module(int32_t  value__) noexcept;

/// @brief Field Heightmap value: I32(1)
static ::Rowlan::Genesis::Converter::ConverterData_Module const Heightmap;

/// @brief Field Terrain value: I32(0)
static ::Rowlan::Genesis::Converter::ConverterData_Module const Terrain;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20427};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData_Module, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Converter::ConverterData_Module) == 0x4, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Converter
// Dependencies System.Object
namespace Rowlan::Genesis::Converter {
// Is value type: false
// CS Name: Rowlan.Genesis.Converter.ConverterData/HeightmapSettings
class CORDL_TYPE ConverterData_HeightmapSettings : public ::System::Object {
public:
// Declarations
/// @brief Field collectionName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectionName, put=__cordl_internal_set_collectionName)) ::StringW  collectionName;

/// @brief Field inputPath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_inputPath, put=__cordl_internal_set_inputPath)) ::StringW  inputPath;

/// @brief Field outputPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputPath, put=__cordl_internal_set_outputPath)) ::StringW  outputPath;

static inline ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_collectionName() const;

constexpr ::StringW& __cordl_internal_get_collectionName() ;

constexpr ::StringW const& __cordl_internal_get_inputPath() const;

constexpr ::StringW& __cordl_internal_get_inputPath() ;

constexpr ::StringW const& __cordl_internal_get_outputPath() const;

constexpr ::StringW& __cordl_internal_get_outputPath() ;

constexpr void __cordl_internal_set_collectionName(::StringW  value) ;

constexpr void __cordl_internal_set_inputPath(::StringW  value) ;

constexpr void __cordl_internal_set_outputPath(::StringW  value) ;

/// @brief Method .ctor, addr 0x181abeab0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterData_HeightmapSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterData_HeightmapSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterData_HeightmapSettings(ConverterData_HeightmapSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterData_HeightmapSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterData_HeightmapSettings(ConverterData_HeightmapSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20428};

/// @brief Field inputPath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___inputPath;

/// @brief Field outputPath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___outputPath;

/// @brief Field collectionName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___collectionName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings, ___inputPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings, ___outputPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings, ___collectionName) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Converter
// Dependencies Rowlan.Genesis.Converter.ConverterData::Module, UnityEngine.ScriptableObject
namespace Rowlan::Genesis::Converter {
// Is value type: false
// CS Name: Rowlan.Genesis.Converter.ConverterData
class CORDL_TYPE ConverterData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using HeightmapSettings = ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings;

using Module = ::Rowlan::Genesis::Converter::ConverterData_Module;

/// @brief Field module, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__cordl_module, put=__cordl_internal_set__cordl_module)) ::Rowlan::Genesis::Converter::ConverterData_Module  _cordl_module;

/// @brief Field heightmapSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_heightmapSettings, put=__cordl_internal_set_heightmapSettings)) ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*  heightmapSettings;

/// @brief Field helpBoxVisible, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_helpBoxVisible, put=__cordl_internal_set_helpBoxVisible)) bool  helpBoxVisible;

static inline ::Rowlan::Genesis::Converter::ConverterData* New_ctor() ;

/// @brief Method Reset, addr 0x181abd2f0, size 0x60, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Rowlan::Genesis::Converter::ConverterData_Module const& __cordl_internal_get__cordl_module() const;

constexpr ::Rowlan::Genesis::Converter::ConverterData_Module& __cordl_internal_get__cordl_module() ;

constexpr ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings* const& __cordl_internal_get_heightmapSettings() const;

constexpr ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*& __cordl_internal_get_heightmapSettings() ;

constexpr bool const& __cordl_internal_get_helpBoxVisible() const;

constexpr bool& __cordl_internal_get_helpBoxVisible() ;

constexpr void __cordl_internal_set__cordl_module(::Rowlan::Genesis::Converter::ConverterData_Module  value) ;

constexpr void __cordl_internal_set_heightmapSettings(::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*  value) ;

constexpr void __cordl_internal_set_helpBoxVisible(bool  value) ;

/// @brief Method .ctor, addr 0x181abd350, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConverterData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConverterData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConverterData(ConverterData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConverterData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConverterData(ConverterData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20429};

/// @brief Field helpBoxVisible, offset: 0x18, size: 0x1, def value: None
 bool  ___helpBoxVisible;

/// @brief Field module, offset: 0x1c, size: 0x4, def value: None
 ::Rowlan::Genesis::Converter::ConverterData_Module  ____cordl_module;

/// @brief Field heightmapSettings, offset: 0x20, size: 0x8, def value: None
 ::Rowlan::Genesis::Converter::ConverterData_HeightmapSettings*  ___heightmapSettings;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData, ___helpBoxVisible) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData, ____cordl_module) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Rowlan::Genesis::Converter::ConverterData, ___heightmapSettings) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Rowlan::Genesis::Converter::ConverterData) == 0x28, "Size mismatch!");

} // namespace end def Rowlan::Genesis::Converter

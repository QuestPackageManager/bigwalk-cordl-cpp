#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/RoadSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoadSystem)
namespace JBooth::MicroVerseCore {
class RoadSystemConfig;
}
namespace JBooth::MicroVerseCore {
struct RoadSystem_RoadGenerationOption;
}
namespace JBooth::MicroVerseCore {
class SplinePath;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct RoadSystem_RoadGenerationOption;
}
namespace JBooth::MicroVerseCore {
class RoadSystem;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption);
MARK_REF_T(::JBooth::MicroVerseCore::RoadSystem*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption, "JBooth.MicroVerseCore", "RoadSystem/RoadGenerationOption");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::RoadSystem*, "JBooth.MicroVerseCore", "RoadSystem");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.RoadSystem/RoadGenerationOption
struct CORDL_TYPE RoadSystem_RoadGenerationOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RoadSystem_RoadGenerationOption_Unwrapped
enum struct __RoadSystem_RoadGenerationOption_Unwrapped : int32_t {
__E_GeneratePlaymode = static_cast<int32_t>(0x0),
__E_GenerateRuntime = static_cast<int32_t>(0x1),
__E_GenerateAutomatic = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoadSystem_RoadGenerationOption_Unwrapped () const noexcept {
return static_cast<__RoadSystem_RoadGenerationOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RoadSystem_RoadGenerationOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoadSystem_RoadGenerationOption(int32_t  value__) noexcept;

/// @brief Field GenerateAutomatic value: I32(2)
static ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption const GenerateAutomatic;

/// @brief Field GeneratePlaymode value: I32(0)
static ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption const GeneratePlaymode;

/// @brief Field GenerateRuntime value: I32(1)
static ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption const GenerateRuntime;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17959};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.RoadSystem::RoadGenerationOption, UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.RoadSystem
class CORDL_TYPE RoadSystem : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RoadGenerationOption = ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption;

/// @brief Field contentID, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentID, put=__cordl_internal_set_contentID)) ::StringW  contentID;

/// @brief Field generateAtLoad, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_generateAtLoad, put=__cordl_internal_set_generateAtLoad)) bool  generateAtLoad;

/// @brief Field generationOption, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_generationOption, put=__cordl_internal_set_generationOption)) ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  generationOption;

/// @brief Field hideGameObjects, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_hideGameObjects, put=__cordl_internal_set_hideGameObjects)) bool  hideGameObjects;

/// @brief Field materialInstances, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialInstances, put=__cordl_internal_set_materialInstances)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>*  materialInstances;

/// @brief Field splinePath, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_splinePath, put=__cordl_internal_set_splinePath)) ::UnityW<::JBooth::MicroVerseCore::SplinePath>  splinePath;

/// @brief Field systemConfig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_systemConfig, put=__cordl_internal_set_systemConfig)) ::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig>  systemConfig;

/// @brief Field templateMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_templateMaterial, put=__cordl_internal_set_templateMaterial)) ::UnityW<::UnityEngine::Material>  templateMaterial;

/// @brief Field version, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) int32_t  version;

static inline ::JBooth::MicroVerseCore::RoadSystem* New_ctor() ;

/// @brief Method OnDestroy, addr 0x18141ebf0, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x18141ec00, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x18141ec50, size 0x160, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReGenerateRoads, addr 0x18141edb0, size 0xd0, virtual false, abstract: false, final false
inline void ReGenerateRoads() ;

/// @brief Method UpdateAll, addr 0x18141ee80, size 0x90, virtual false, abstract: false, final false
inline void UpdateAll() ;

/// @brief Method UpdateMaterialOverrides, addr 0x18141ee80, size 0x90, virtual false, abstract: false, final false
inline void UpdateMaterialOverrides() ;

/// @brief Method UpdateSystem, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void UpdateSystem(::System::Nullable_1<::UnityEngine::Bounds>  bounds) ;

constexpr ::StringW const& __cordl_internal_get_contentID() const;

constexpr ::StringW& __cordl_internal_get_contentID() ;

constexpr bool const& __cordl_internal_get_generateAtLoad() const;

constexpr bool& __cordl_internal_get_generateAtLoad() ;

constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption const& __cordl_internal_get_generationOption() const;

constexpr ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption& __cordl_internal_get_generationOption() ;

constexpr bool const& __cordl_internal_get_hideGameObjects() const;

constexpr bool& __cordl_internal_get_hideGameObjects() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>* const& __cordl_internal_get_materialInstances() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>*& __cordl_internal_get_materialInstances() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath> const& __cordl_internal_get_splinePath() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::SplinePath>& __cordl_internal_get_splinePath() ;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig> const& __cordl_internal_get_systemConfig() const;

constexpr ::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig>& __cordl_internal_get_systemConfig() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_templateMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_templateMaterial() ;

constexpr int32_t const& __cordl_internal_get_version() const;

constexpr int32_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_contentID(::StringW  value) ;

constexpr void __cordl_internal_set_generateAtLoad(bool  value) ;

constexpr void __cordl_internal_set_generationOption(::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  value) ;

constexpr void __cordl_internal_set_hideGameObjects(bool  value) ;

constexpr void __cordl_internal_set_materialInstances(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>*  value) ;

constexpr void __cordl_internal_set_splinePath(::UnityW<::JBooth::MicroVerseCore::SplinePath>  value) ;

constexpr void __cordl_internal_set_systemConfig(::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig>  value) ;

constexpr void __cordl_internal_set_templateMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_version(int32_t  value) ;

/// @brief Method .ctor, addr 0x18141ef10, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RoadSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RoadSystem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RoadSystem(RoadSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RoadSystem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RoadSystem(RoadSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17960};

/// @brief Field hideGameObjects, offset: 0x20, size: 0x1, def value: None
 bool  ___hideGameObjects;

/// @brief Field generateAtLoad, offset: 0x21, size: 0x1, def value: None
 bool  ___generateAtLoad;

/// @brief Field generationOption, offset: 0x24, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::RoadSystem_RoadGenerationOption  ___generationOption;

/// @brief Field version, offset: 0x28, size: 0x4, def value: None
 int32_t  ___version;

/// @brief Field contentID, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___contentID;

/// @brief Field systemConfig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::RoadSystemConfig>  ___systemConfig;

/// @brief Field splinePath, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroVerseCore::SplinePath>  ___splinePath;

/// @brief Field templateMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___templateMaterial;

/// @brief Field materialInstances, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Texture2D>,::UnityW<::UnityEngine::Material>>*  ___materialInstances;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___hideGameObjects) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___generateAtLoad) == 0x21, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___generationOption) == 0x24, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___contentID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___systemConfig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___splinePath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___templateMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::RoadSystem, ___materialInstances) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::RoadSystem) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore

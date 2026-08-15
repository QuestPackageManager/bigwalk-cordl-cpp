#pragma once
// IWYU pragma private; include "MA/Flora/FloraTerrainProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(FloraTerrainProvider)
namespace MA::Flora {
class FloraSystem;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct TerrainChangedFlags;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace MA::Flora {
class FloraTerrainProvider;
}
// Write type traits
MARK_REF_T(::MA::Flora::FloraTerrainProvider*);
DEFINE_IL2CPP_CLASS(::MA::Flora::FloraTerrainProvider*, "MA.Flora", "FloraTerrainProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.FloraTerrainProvider
class CORDL_TYPE FloraTerrainProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Terrain)) ::UnityW<::UnityEngine::Terrain>  Terrain;

 __declspec(property(get=get_TerrainData)) ::UnityW<::UnityEngine::TerrainData>  TerrainData;

/// @brief Field TerrainDataChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TerrainDataChanged, put=setStaticF_TerrainDataChanged)) ::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  TerrainDataChanged;

/// @brief Field m_Terrain, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Terrain, put=__cordl_internal_set_m_Terrain)) ::UnityW<::UnityEngine::Terrain>  m_Terrain;

static inline ::MA::Flora::FloraTerrainProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0x1814f3290, size 0xb0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x1814f3340, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSystemWasCreated, addr 0x1814f3400, size 0x30, virtual false, abstract: false, final false
inline void OnSystemWasCreated(::MA::Flora::FloraSystem*  system) ;

/// @brief Method OnTerrainChanged, addr 0x1814f3430, size 0xc0, virtual false, abstract: false, final false
inline void OnTerrainChanged(::UnityEngine::TerrainChangedFlags  changedFlags) ;

/// @brief Method RefreshAllTerrainDetails, addr 0x1814f34f0, size 0x110, virtual false, abstract: false, final false
static inline void RefreshAllTerrainDetails() ;

constexpr ::UnityW<::UnityEngine::Terrain> const& __cordl_internal_get_m_Terrain() const;

constexpr ::UnityW<::UnityEngine::Terrain>& __cordl_internal_get_m_Terrain() ;

constexpr void __cordl_internal_set_m_Terrain(::UnityW<::UnityEngine::Terrain>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_TerrainDataChanged, addr 0x1814f3600, size 0xb0, virtual false, abstract: false, final false
static inline void add_TerrainDataChanged(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  value) ;

static inline ::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>* getStaticF_TerrainDataChanged() ;

/// @brief Method get_Terrain, addr 0x1814f3720, size 0x40, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Terrain> get_Terrain() ;

/// @brief Method get_TerrainData, addr 0x1814f36b0, size 0x70, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TerrainData> get_TerrainData() ;

/// @brief Method remove_TerrainDataChanged, addr 0x1814f3760, size 0xb0, virtual false, abstract: false, final false
static inline void remove_TerrainDataChanged(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  value) ;

static inline void setStaticF_TerrainDataChanged(::System::Action_2<::UnityW<::UnityEngine::Terrain>,::UnityEngine::TerrainChangedFlags>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloraTerrainProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloraTerrainProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloraTerrainProvider(FloraTerrainProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloraTerrainProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloraTerrainProvider(FloraTerrainProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13306};

/// @brief Field m_Terrain, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Terrain>  ___m_Terrain;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::FloraTerrainProvider, ___m_Terrain) == 0x20, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::FloraTerrainProvider) == 0x28, "Size mismatch!");

} // namespace end def MA::Flora

#pragma once
// IWYU pragma private; include "HouseHouse/Lighting/LightingAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightingAgent)
namespace HouseHouse::Lighting {
class LightingZone;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace HouseHouse::Lighting {
class LightingAgent;
}
// Write type traits
MARK_REF_T(::HouseHouse::Lighting::LightingAgent*);
DEFINE_IL2CPP_CLASS(::HouseHouse::Lighting::LightingAgent*, "HouseHouse.Lighting", "LightingAgent");
// Dependencies UnityEngine.MonoBehaviour
namespace HouseHouse::Lighting {
// Is value type: false
// CS Name: HouseHouse.Lighting.LightingAgent
class CORDL_TYPE LightingAgent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::HouseHouse::Lighting::LightingAgent>  Instance;

/// @brief Field acitveLightingZones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_acitveLightingZones, put=__cordl_internal_set_acitveLightingZones)) ::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>*  acitveLightingZones;

/// @brief Method Awake, addr 0x1803cc730, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HardRefreshLighting, addr 0x1803cc760, size 0x260, virtual false, abstract: false, final false
static inline void HardRefreshLighting() ;

/// @brief Method Initialize, addr 0x1803cc9c0, size 0x50, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::HouseHouse::Lighting::LightingAgent* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x1803cca10, size 0x1e0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  col) ;

/// @brief Method OnTriggerExit, addr 0x1803ccbf0, size 0x250, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  col) ;

/// @brief Method Update, addr 0x1803cce40, size 0x180, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>* const& __cordl_internal_get_acitveLightingZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>*& __cordl_internal_get_acitveLightingZones() ;

constexpr void __cordl_internal_set_acitveLightingZones(::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::HouseHouse::Lighting::LightingAgent> getStaticF_Instance() ;

static inline void setStaticF_Instance(::UnityW<::HouseHouse::Lighting::LightingAgent>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightingAgent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightingAgent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightingAgent(LightingAgent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightingAgent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightingAgent(LightingAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5781};

/// @brief Field acitveLightingZones, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::HouseHouse::Lighting::LightingZone>>*  ___acitveLightingZones;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HouseHouse::Lighting::LightingAgent, ___acitveLightingZones) == 0x20, "Offset mismatch!");

static_assert(sizeof(::HouseHouse::Lighting::LightingAgent) == 0x28, "Size mismatch!");

} // namespace end def HouseHouse::Lighting

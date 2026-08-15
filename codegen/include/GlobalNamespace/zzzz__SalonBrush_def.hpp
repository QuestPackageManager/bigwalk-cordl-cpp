#pragma once
// IWYU pragma private; include "GlobalNamespace/SalonBrush.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SalonBrush)
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace GlobalNamespace {
class Prop;
}
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SalonBrush;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SalonBrush*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SalonBrush*, "", "SalonBrush");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SalonBrush
class CORDL_TYPE SalonBrush : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkcurrentColorId, put=set_NetworkcurrentColorId)) int32_t  NetworkcurrentColorId;

/// @brief Field _materialInstance, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__materialInstance, put=__cordl_internal_set__materialInstance)) ::UnityW<::UnityEngine::Material>  _materialInstance;

/// @brief Field currentColorId, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentColorId, put=__cordl_internal_set_currentColorId)) int32_t  currentColorId;

/// @brief Field emptyColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_emptyColor, put=__cordl_internal_set_emptyColor)) ::UnityEngine::Color  emptyColor;

/// @brief Field logVerbose, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field lookSet, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookSet, put=__cordl_internal_set_lookSet)) ::UnityW<::GlobalNamespace::PlayerLookSet>  lookSet;

/// @brief Field onChangeParticle, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChangeParticle, put=__cordl_internal_set_onChangeParticle)) ::UnityW<::UnityEngine::ParticleSystem>  onChangeParticle;

/// @brief Field prop, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_prop, put=__cordl_internal_set_prop)) ::UnityW<::GlobalNamespace::Prop>  prop;

/// @brief Field targetRenderer, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetRenderer, put=__cordl_internal_set_targetRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  targetRenderer;

/// @brief Method Awake, addr 0x180414570, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearColor, addr 0x1804145c0, size 0xb0, virtual false, abstract: false, final false
inline void ClearColor() ;

/// @brief Method DeserializeSyncVars, addr 0x180414670, size 0xd0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method InvokeUserCode_RpcRepeatPuff, addr 0x180414740, size 0xb0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcRepeatPuff(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::SalonBrush* New_ctor() ;

/// @brief Method OnChangeColor, addr 0x1804147f0, size 0x190, virtual false, abstract: false, final false
inline void OnChangeColor(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnDestroy, addr 0x180414980, size 0x40, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RpcRepeatPuff, addr 0x1804149c0, size 0x120, virtual false, abstract: false, final false
inline void RpcRepeatPuff() ;

/// @brief Method SerializeSyncVars, addr 0x180414ae0, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetColor, addr 0x180414b30, size 0x1e0, virtual false, abstract: false, final false
inline void SetColor(int32_t  colorId) ;

/// @brief Method SetWithColorPropGroup, addr 0x180414d10, size 0x110, virtual false, abstract: false, final false
inline void SetWithColorPropGroup(bool  active) ;

/// @brief Method UserCode_RpcRepeatPuff, addr 0x180414e20, size 0x10, virtual false, abstract: false, final false
inline void UserCode_RpcRepeatPuff() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__materialInstance() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__materialInstance() ;

constexpr int32_t const& __cordl_internal_get_currentColorId() const;

constexpr int32_t& __cordl_internal_get_currentColorId() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_emptyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_emptyColor() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& __cordl_internal_get_lookSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& __cordl_internal_get_lookSet() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_onChangeParticle() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_onChangeParticle() ;

constexpr ::UnityW<::GlobalNamespace::Prop> const& __cordl_internal_get_prop() const;

constexpr ::UnityW<::GlobalNamespace::Prop>& __cordl_internal_get_prop() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_targetRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_targetRenderer() ;

constexpr void __cordl_internal_set__materialInstance(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_currentColorId(int32_t  value) ;

constexpr void __cordl_internal_set_emptyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value) ;

constexpr void __cordl_internal_set_onChangeParticle(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_prop(::UnityW<::GlobalNamespace::Prop>  value) ;

constexpr void __cordl_internal_set_targetRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkcurrentColorId, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkcurrentColorId() ;

/// @brief Method set_NetworkcurrentColorId, addr 0x180414ea0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkcurrentColorId(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SalonBrush() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SalonBrush", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SalonBrush(SalonBrush && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SalonBrush", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SalonBrush(SalonBrush const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5119};

/// @brief Field currentColorId, offset: 0x68, size: 0x4, def value: None
 int32_t  ___currentColorId;

/// @brief Field lookSet, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerLookSet>  ___lookSet;

/// @brief Field emptyColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___emptyColor;

/// @brief Field targetRenderer, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___targetRenderer;

/// @brief Field prop, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::Prop>  ___prop;

/// @brief Field onChangeParticle, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___onChangeParticle;

/// @brief Field logVerbose, offset: 0xa0, size: 0x1, def value: None
 bool  ___logVerbose;

/// @brief Field _materialInstance, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____materialInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SalonBrush, ___currentColorId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ___lookSet) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ___emptyColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ___targetRenderer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ___prop) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ___onChangeParticle) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ___logVerbose) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SalonBrush, ____materialInstance) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SalonBrush) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace

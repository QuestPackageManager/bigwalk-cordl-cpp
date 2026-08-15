#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckEffectParticleNetworked.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PeckSystemReference_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PeckEffectParticleNetworked)
namespace GlobalNamespace {
struct PeckContext;
}
namespace GlobalNamespace {
struct PeckEffectParticleNetworked_ParticleSetting;
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
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct PeckEffectParticleNetworked_ParticleSetting;
}
namespace GlobalNamespace {
class PeckEffectParticleNetworked;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting);
MARK_REF_T(::GlobalNamespace::PeckEffectParticleNetworked*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting, "", "PeckEffectParticleNetworked/ParticleSetting");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PeckEffectParticleNetworked*, "", "PeckEffectParticleNetworked");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PeckEffectParticleNetworked/ParticleSetting
struct CORDL_TYPE PeckEffectParticleNetworked_ParticleSetting {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PeckEffectParticleNetworked_ParticleSetting_Unwrapped
enum struct __PeckEffectParticleNetworked_ParticleSetting_Unwrapped : int32_t {
__E_Ignore = static_cast<int32_t>(0x0),
__E_Play = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PeckEffectParticleNetworked_ParticleSetting_Unwrapped () const noexcept {
return static_cast<__PeckEffectParticleNetworked_ParticleSetting_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectParticleNetworked_ParticleSetting() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PeckEffectParticleNetworked_ParticleSetting(int32_t  value__) noexcept;

/// @brief Field Ignore value: I32(0)
static ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting const Ignore;

/// @brief Field Play value: I32(1)
static ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting const Play;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Mirror.NetworkBehaviour, PeckEffectParticleNetworked::ParticleSetting, PeckSystemReference
namespace GlobalNamespace {
// Is value type: false
// CS Name: PeckEffectParticleNetworked
class CORDL_TYPE PeckEffectParticleNetworked : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using ParticleSetting = ::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting;

/// @brief Field emitOneBeforePlaying, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_emitOneBeforePlaying, put=__cordl_internal_set_emitOneBeforePlaying)) bool  emitOneBeforePlaying;

/// @brief Field guideTransform, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_guideTransform, put=__cordl_internal_set_guideTransform)) ::UnityW<::UnityEngine::Transform>  guideTransform;

/// @brief Field logVerbose, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get_logVerbose, put=__cordl_internal_set_logVerbose)) bool  logVerbose;

/// @brief Field settings, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_settings, put=__cordl_internal_set_settings)) ::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting>  settings;

/// @brief Field systemReference, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_systemReference, put=__cordl_internal_set_systemReference)) ::GlobalNamespace::PeckSystemReference  systemReference;

/// @brief Field targetParticleSystem, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetParticleSystem, put=__cordl_internal_set_targetParticleSystem)) ::UnityW<::UnityEngine::ParticleSystem>  targetParticleSystem;

/// @brief Method Awake, addr 0x18044a8b0, size 0xd0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InvokeUserCode_RpcFire__Vector3__Quaternion, addr 0x18044a980, size 0x190, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcFire__Vector3__Quaternion(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PeckEffectParticleNetworked* New_ctor() ;

/// @brief Method Peck, addr 0x18044ab10, size 0x230, virtual false, abstract: false, final false
inline void Peck(::GlobalNamespace::PeckContext  context) ;

/// @brief Method RpcFire, addr 0x18044ad40, size 0x100, virtual false, abstract: false, final false
inline void RpcFire(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method UserCode_RpcFire__Vector3__Quaternion, addr 0x18044ae40, size 0xe0, virtual false, abstract: false, final false
inline void UserCode_RpcFire__Vector3__Quaternion(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

constexpr bool const& __cordl_internal_get_emitOneBeforePlaying() const;

constexpr bool& __cordl_internal_get_emitOneBeforePlaying() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_guideTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_guideTransform() ;

constexpr bool const& __cordl_internal_get_logVerbose() const;

constexpr bool& __cordl_internal_get_logVerbose() ;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting> const& __cordl_internal_get_settings() const;

constexpr ::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting>& __cordl_internal_get_settings() ;

constexpr ::GlobalNamespace::PeckSystemReference const& __cordl_internal_get_systemReference() const;

constexpr ::GlobalNamespace::PeckSystemReference& __cordl_internal_get_systemReference() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_targetParticleSystem() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_targetParticleSystem() ;

constexpr void __cordl_internal_set_emitOneBeforePlaying(bool  value) ;

constexpr void __cordl_internal_set_guideTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_logVerbose(bool  value) ;

constexpr void __cordl_internal_set_settings(::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting>  value) ;

constexpr void __cordl_internal_set_systemReference(::GlobalNamespace::PeckSystemReference  value) ;

constexpr void __cordl_internal_set_targetParticleSystem(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PeckEffectParticleNetworked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectParticleNetworked", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PeckEffectParticleNetworked(PeckEffectParticleNetworked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PeckEffectParticleNetworked", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PeckEffectParticleNetworked(PeckEffectParticleNetworked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5399};

/// @brief Field systemReference, offset: 0x68, size: 0x28, def value: None
 ::GlobalNamespace::PeckSystemReference  ___systemReference;

/// @brief Field targetParticleSystem, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___targetParticleSystem;

/// @brief Field guideTransform, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___guideTransform;

/// @brief Field settings, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::PeckEffectParticleNetworked_ParticleSetting>  ___settings;

/// @brief Field emitOneBeforePlaying, offset: 0xa8, size: 0x1, def value: None
 bool  ___emitOneBeforePlaying;

/// @brief Field logVerbose, offset: 0xa9, size: 0x1, def value: None
 bool  ___logVerbose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked, ___systemReference) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked, ___targetParticleSystem) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked, ___guideTransform) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked, ___settings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked, ___emitOneBeforePlaying) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PeckEffectParticleNetworked, ___logVerbose) == 0xa9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PeckEffectParticleNetworked) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace

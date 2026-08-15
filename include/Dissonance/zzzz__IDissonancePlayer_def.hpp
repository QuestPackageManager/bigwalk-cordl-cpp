#pragma once
// IWYU pragma private; include "Dissonance/IDissonancePlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IDissonancePlayer)
namespace Dissonance {
struct NetworkPlayerType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Dissonance {
class IDissonancePlayer;
}
// Write type traits
MARK_REF_T(::Dissonance::IDissonancePlayer*);
DEFINE_IL2CPP_CLASS(::Dissonance::IDissonancePlayer*, "Dissonance", "IDissonancePlayer");
// Dependencies 
namespace Dissonance {
// Is value type: false
// CS Name: Dissonance.IDissonancePlayer
class CORDL_TYPE IDissonancePlayer {
public:
// Declarations
 __declspec(property(get=get_IsTracking)) bool  IsTracking;

 __declspec(property(get=get_PlayerId)) ::StringW  PlayerId;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Rotation)) ::UnityEngine::Quaternion  Rotation;

 __declspec(property(get=get_Type)) ::Dissonance::NetworkPlayerType  Type;

/// @brief Method get_IsTracking, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsTracking() ;

/// @brief Method get_PlayerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_PlayerId() ;

/// @brief Method get_Position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Rotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Quaternion get_Rotation() ;

/// @brief Method get_Type, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::Dissonance::NetworkPlayerType get_Type() ;

// Ctor Parameters [CppParam { name: "", ty: "IDissonancePlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDissonancePlayer(IDissonancePlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16804};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance

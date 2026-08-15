#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStartBlind.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GameStartBlind)
namespace GlobalNamespace {
class PlayerCharacter;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class GameStartBlind;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameStartBlind*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStartBlind*, "", "GameStartBlind");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameStartBlind
class CORDL_TYPE GameStartBlind : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _transitionStartTime, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__transitionStartTime, put=__cordl_internal_set__transitionStartTime)) float_t  _transitionStartTime;

/// @brief Field duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field image, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_image, put=__cordl_internal_set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

/// @brief Method Awake, addr 0x180432c30, size 0x120, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GameStartBlind* New_ctor() ;

/// @brief Method OnPlayerReady, addr 0x180432d50, size 0x20, virtual false, abstract: false, final false
inline void OnPlayerReady(::GlobalNamespace::PlayerCharacter*  character) ;

/// @brief Method Update, addr 0x180432d70, size 0x100, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__transitionStartTime() const;

constexpr float_t& __cordl_internal_get__transitionStartTime() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_image() ;

constexpr void __cordl_internal_set__transitionStartTime(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_image(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x180432e70, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameStartBlind() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameStartBlind", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameStartBlind(GameStartBlind && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameStartBlind", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameStartBlind(GameStartBlind const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5250};

/// @brief Field image, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___image;

/// @brief Field duration, offset: 0x28, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field _transitionStartTime, offset: 0x2c, size: 0x4, def value: None
 float_t  ____transitionStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStartBlind, ___image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStartBlind, ___duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStartBlind, ____transitionStartTime) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStartBlind) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEyeSet.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerEyeMood_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEyeSet)
namespace GlobalNamespace {
struct PlayerEyeMood;
}
namespace GlobalNamespace {
struct PlayerEyeSet_EyeMoodTexturePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerEyeSet;
}
namespace GlobalNamespace {
struct PlayerEyeSet_EyeMoodTexturePair;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayerEyeSet*);
MARK_VAL_T(::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerEyeSet*, "", "PlayerEyeSet");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair, "", "PlayerEyeSet/EyeMoodTexturePair");
// Dependencies PlayerEyeMood
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerEyeSet/EyeMoodTexturePair
struct CORDL_TYPE PlayerEyeSet_EyeMoodTexturePair {
public:
// Declarations
/// @brief Method GetPos, addr 0x18035c9a0, size 0xe30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetPos(int32_t  xCount, int32_t  yCount) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerEyeSet_EyeMoodTexturePair() ;

// Ctor Parameters [CppParam { name: "mood", ty: "::GlobalNamespace::PlayerEyeMood", modifiers: "", def_value: None }, CppParam { name: "xIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayerEyeSet_EyeMoodTexturePair(::GlobalNamespace::PlayerEyeMood  mood, int32_t  xIndex, int32_t  yIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5497};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field mood, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::PlayerEyeMood  mood;

/// @brief Field xIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  xIndex;

/// @brief Field yIndex, offset: 0x8, size: 0x4, def value: None
 int32_t  yIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair, mood) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair, xIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair, yIndex) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerEyeSet
class CORDL_TYPE PlayerEyeSet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using EyeMoodTexturePair = ::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair;

/// @brief Field gridSizeX, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridSizeX, put=__cordl_internal_set_gridSizeX)) int32_t  gridSizeX;

/// @brief Field gridSizeY, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gridSizeY, put=__cordl_internal_set_gridSizeY)) int32_t  gridSizeY;

/// @brief Field texturePairs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_texturePairs, put=__cordl_internal_set_texturePairs)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>*  texturePairs;

/// @brief Method GetMoodData, addr 0x1803605b0, size 0xf0, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair GetMoodData(::GlobalNamespace::PlayerEyeMood  mood) ;

/// @brief Method GetMoodOffset, addr 0x1803606a0, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetMoodOffset(::GlobalNamespace::PlayerEyeMood  mood) ;

static inline ::GlobalNamespace::PlayerEyeSet* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_gridSizeX() const;

constexpr int32_t& __cordl_internal_get_gridSizeX() ;

constexpr int32_t const& __cordl_internal_get_gridSizeY() const;

constexpr int32_t& __cordl_internal_get_gridSizeY() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>* const& __cordl_internal_get_texturePairs() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>*& __cordl_internal_get_texturePairs() ;

constexpr void __cordl_internal_set_gridSizeX(int32_t  value) ;

constexpr void __cordl_internal_set_gridSizeY(int32_t  value) ;

constexpr void __cordl_internal_set_texturePairs(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>*  value) ;

/// @brief Method .ctor, addr 0x180303cd0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerEyeSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerEyeSet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerEyeSet(PlayerEyeSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerEyeSet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerEyeSet(PlayerEyeSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5498};

/// @brief Field texturePairs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerEyeSet_EyeMoodTexturePair>*  ___texturePairs;

/// @brief Field gridSizeX, offset: 0x20, size: 0x4, def value: None
 int32_t  ___gridSizeX;

/// @brief Field gridSizeY, offset: 0x24, size: 0x4, def value: None
 int32_t  ___gridSizeY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerEyeSet, ___texturePairs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyeSet, ___gridSizeX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerEyeSet, ___gridSizeY) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerEyeSet) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

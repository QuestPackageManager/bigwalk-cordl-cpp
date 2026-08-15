#pragma once
// IWYU pragma private; include "Unity/Multiplayer/PlayMode/CurrentPlayer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CurrentPlayer)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace Unity::Multiplayer::PlayMode {
class CurrentPlayerApi;
}
// Forward declare root types
namespace Unity::Multiplayer::PlayMode {
class CurrentPlayer;
}
// Write type traits
MARK_REF_T(::Unity::Multiplayer::PlayMode::CurrentPlayer*);
DEFINE_IL2CPP_CLASS(::Unity::Multiplayer::PlayMode::CurrentPlayer*, "Unity.Multiplayer.PlayMode", "CurrentPlayer");
// Dependencies System.Object
namespace Unity::Multiplayer::PlayMode {
// Is value type: false
// CS Name: Unity.Multiplayer.PlayMode.CurrentPlayer
class CORDL_TYPE CurrentPlayer : public ::System::Object {
public:
// Declarations
/// @brief Field s_CurrentPlayerApi, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CurrentPlayerApi, put=setStaticF_s_CurrentPlayerApi)) ::Unity::Multiplayer::PlayMode::CurrentPlayerApi*  s_CurrentPlayerApi;

/// @brief Method EnsureInitialized, addr 0x1822ed990, size 0xa0, virtual false, abstract: false, final false
static inline void EnsureInitialized() ;

/// @brief Method ReadOnlyTags, addr 0x1822eda30, size 0x220, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> ReadOnlyTags() ;

/// @brief Method ReloadLatestTagsOnEnterPlaymode, addr 0x1822edc50, size 0x30, virtual false, abstract: false, final false
static inline void ReloadLatestTagsOnEnterPlaymode() ;

static inline ::Unity::Multiplayer::PlayMode::CurrentPlayerApi* getStaticF_s_CurrentPlayerApi() ;

/// @brief Method get_Tags, addr 0x1822edc80, size 0x220, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* get_Tags() ;

static inline void setStaticF_s_CurrentPlayerApi(::Unity::Multiplayer::PlayMode::CurrentPlayerApi*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurrentPlayer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurrentPlayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurrentPlayer(CurrentPlayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurrentPlayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurrentPlayer(CurrentPlayer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21607};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Multiplayer::PlayMode::CurrentPlayer) == 0x10, "Size mismatch!");

} // namespace end def Unity::Multiplayer::PlayMode

#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/PriorityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PriorityManager)
namespace Dissonance::Audio::Playback {
class IPriorityManager;
}
namespace Dissonance {
struct ChannelPriority;
}
namespace Dissonance {
class Log;
}
namespace Dissonance {
class PlayerCollection;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
class PriorityManager;
}
// Write type traits
MARK_REF_T(::Dissonance::Audio::Playback::PriorityManager*);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::PriorityManager*, "Dissonance.Audio.Playback", "PriorityManager");
// Dependencies Dissonance.ChannelPriority, System.Object
namespace Dissonance::Audio::Playback {
// Is value type: false
// CS Name: Dissonance.Audio.Playback.PriorityManager
class CORDL_TYPE PriorityManager : public ::System::Object {
public:
// Declarations
/// @brief Field Log, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Log, put=setStaticF_Log)) ::Dissonance::Log*  Log;

 __declspec(property(get=get_TopPriority, put=set_TopPriority)) ::Dissonance::ChannelPriority  TopPriority;

/// @brief Field <TopPriority>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__TopPriority_k__BackingField, put=__cordl_internal_set__TopPriority_k__BackingField)) ::Dissonance::ChannelPriority  _TopPriority_k__BackingField;

/// @brief Field _players, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__players, put=__cordl_internal_set__players)) ::Dissonance::PlayerCollection*  _players;

/// @brief Convert operator to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr operator  ::Dissonance::Audio::Playback::IPriorityManager*() noexcept;

static inline ::Dissonance::Audio::Playback::PriorityManager* New_ctor(::Dissonance::PlayerCollection*  players) ;

/// @brief Method Update, addr 0x1805e71a0, size 0xe0, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Dissonance::ChannelPriority const& __cordl_internal_get__TopPriority_k__BackingField() const;

constexpr ::Dissonance::ChannelPriority& __cordl_internal_get__TopPriority_k__BackingField() ;

constexpr ::Dissonance::PlayerCollection* const& __cordl_internal_get__players() const;

constexpr ::Dissonance::PlayerCollection*& __cordl_internal_get__players() ;

constexpr void __cordl_internal_set__TopPriority_k__BackingField(::Dissonance::ChannelPriority  value) ;

constexpr void __cordl_internal_set__players(::Dissonance::PlayerCollection*  value) ;

/// @brief Method .ctor, addr 0x1805e72d0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Dissonance::PlayerCollection*  players) ;

static inline ::Dissonance::Log* getStaticF_Log() ;

/// @brief Method get_TopPriority, addr 0x1802f41a0, size 0x10, virtual true, abstract: false, final true
inline ::Dissonance::ChannelPriority get_TopPriority() ;

/// @brief Convert to "::Dissonance::Audio::Playback::IPriorityManager"
constexpr ::Dissonance::Audio::Playback::IPriorityManager* i___Dissonance__Audio__Playback__IPriorityManager() noexcept;

static inline void setStaticF_Log(::Dissonance::Log*  value) ;

/// @brief Method set_TopPriority, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_TopPriority(::Dissonance::ChannelPriority  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PriorityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PriorityManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PriorityManager(PriorityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PriorityManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PriorityManager(PriorityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16976};

/// @brief Field _players, offset: 0x10, size: 0x8, def value: None
 ::Dissonance::PlayerCollection*  ____players;

/// @brief Field <TopPriority>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::Dissonance::ChannelPriority  ____TopPriority_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::PriorityManager, ____players) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::PriorityManager, ____TopPriority_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::PriorityManager) == 0x20, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback

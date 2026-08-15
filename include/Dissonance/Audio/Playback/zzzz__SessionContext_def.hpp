#pragma once
// IWYU pragma private; include "Dissonance/Audio/Playback/SessionContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionContext)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Dissonance::Audio::Playback {
struct SessionContext;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::Playback::SessionContext);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::Playback::SessionContext, "Dissonance.Audio.Playback", "SessionContext");
// Dependencies 
namespace Dissonance::Audio::Playback {
// Is value type: true
// CS Name: Dissonance.Audio.Playback.SessionContext
struct CORDL_TYPE SessionContext {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>"
constexpr operator  ::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>*() ;

/// @brief Method Equals, addr 0x1805e9110, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805e91a0, size 0x70, virtual true, abstract: false, final true
inline bool Equals(::Dissonance::Audio::Playback::SessionContext  other) ;

/// @brief Method GetHashCode, addr 0x1805e9210, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method .ctor, addr 0x1805e92a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::StringW  playerName, uint32_t  id) ;

/// @brief Convert to "::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>"
constexpr ::System::IEquatable_1<::Dissonance::Audio::Playback::SessionContext>* i___System__IEquatable_1___Dissonance__Audio__Playback__SessionContext_() ;

// Ctor Parameters []
// @brief default ctor
constexpr SessionContext() ;

// Ctor Parameters [CppParam { name: "PlayerName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Id", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr SessionContext(::StringW  PlayerName, uint32_t  Id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16985};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field PlayerName, offset: 0x0, size: 0x8, def value: None
 ::StringW  PlayerName;

/// @brief Field Id, offset: 0x8, size: 0x4, def value: None
 uint32_t  Id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::Playback::SessionContext, PlayerName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Dissonance::Audio::Playback::SessionContext, Id) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::Playback::SessionContext) == 0x10, "Size mismatch!");

} // namespace end def Dissonance::Audio::Playback

#pragma once
// IWYU pragma private; include "Shipmate/Porting/Mocked/MockedPlatformAchievements.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Shipmate/Porting/zzzz__AbstractPlatformAchievements_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlatformAchievements)
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Shipmate::Porting {
class EPlatformAchievement;
}
// Forward declare root types
namespace Shipmate::Porting::Mocked {
class MockedPlatformAchievements;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::Mocked::MockedPlatformAchievements*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::Mocked::MockedPlatformAchievements*, "Shipmate.Porting.Mocked", "MockedPlatformAchievements");
// Dependencies Shipmate.Porting.AbstractPlatformAchievements
namespace Shipmate::Porting::Mocked {
// Is value type: false
// CS Name: Shipmate.Porting.Mocked.MockedPlatformAchievements
class CORDL_TYPE MockedPlatformAchievements : public ::Shipmate::Porting::AbstractPlatformAchievements {
public:
// Declarations
static inline ::Shipmate::Porting::Mocked::MockedPlatformAchievements* New_ctor() ;

/// @brief Method SetAchievementProgress, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask SetAchievementProgress(::Shipmate::Porting::EPlatformAchievement*  aAchievement, int32_t  aProgress) ;

/// @brief Method UnlockAchievement, addr 0x181ac6190, size 0x40, virtual true, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask UnlockAchievement(::Shipmate::Porting::EPlatformAchievement*  aAchievement) ;

/// @brief Method .ctor, addr 0x181ac9820, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MockedPlatformAchievements() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformAchievements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MockedPlatformAchievements(MockedPlatformAchievements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MockedPlatformAchievements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MockedPlatformAchievements(MockedPlatformAchievements const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21517};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Shipmate::Porting::Mocked::MockedPlatformAchievements) == 0x30, "Size mismatch!");

} // namespace end def Shipmate::Porting::Mocked

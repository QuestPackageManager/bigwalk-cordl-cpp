#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackV2InternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAchievementsUnlockedCallbackV2InternalImplementation)
namespace Epic::OnlineServices::Achievements {
struct OnAchievementsUnlockedCallbackV2InfoInternal;
}
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackV2Internal;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackV2InternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation*, "Epic.OnlineServices.Achievements", "OnAchievementsUnlockedCallbackV2InternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Achievements {
// Is value type: false
// CS Name: Epic.OnlineServices.Achievements.OnAchievementsUnlockedCallbackV2InternalImplementation
class CORDL_TYPE OnAchievementsUnlockedCallbackV2InternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052ef00, size 0x70, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InfoInternal>  data) ;

static inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052ef70, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2Internal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAchievementsUnlockedCallbackV2InternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAchievementsUnlockedCallbackV2InternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAchievementsUnlockedCallbackV2InternalImplementation(OnAchievementsUnlockedCallbackV2InternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAchievementsUnlockedCallbackV2InternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAchievementsUnlockedCallbackV2InternalImplementation(OnAchievementsUnlockedCallbackV2InternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackV2InternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements

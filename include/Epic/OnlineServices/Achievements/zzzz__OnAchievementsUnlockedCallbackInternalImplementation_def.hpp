#pragma once
// IWYU pragma private; include "Epic/OnlineServices/Achievements/OnAchievementsUnlockedCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnAchievementsUnlockedCallbackInternalImplementation)
namespace Epic::OnlineServices::Achievements {
struct OnAchievementsUnlockedCallbackInfoInternal;
}
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::Achievements {
class OnAchievementsUnlockedCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation*, "Epic.OnlineServices.Achievements", "OnAchievementsUnlockedCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::Achievements {
// Is value type: false
// CS Name: Epic.OnlineServices.Achievements.OnAchievementsUnlockedCallbackInternalImplementation
class CORDL_TYPE OnAchievementsUnlockedCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x18052ec00, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x18052ec60, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnAchievementsUnlockedCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnAchievementsUnlockedCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnAchievementsUnlockedCallbackInternalImplementation(OnAchievementsUnlockedCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnAchievementsUnlockedCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnAchievementsUnlockedCallbackInternalImplementation(OnAchievementsUnlockedCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::Achievements::OnAchievementsUnlockedCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::Achievements

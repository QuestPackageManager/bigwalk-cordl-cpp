#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnQueryFileCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryFileCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::PlayerDataStorage {
class OnQueryFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct QueryFileCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class OnQueryFileCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation*, "Epic.OnlineServices.PlayerDataStorage", "OnQueryFileCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnQueryFileCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryFileCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fa0d0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::QueryFileCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fa130, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryFileCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryFileCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryFileCompleteCallbackInternalImplementation(OnQueryFileCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryFileCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryFileCompleteCallbackInternalImplementation(OnQueryFileCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8301};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnQueryFileCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnDeleteFileCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnDeleteFileCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::PlayerDataStorage {
struct DeleteFileCallbackInfoInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDeleteFileCompleteCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class OnDeleteFileCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation*, "Epic.OnlineServices.PlayerDataStorage", "OnDeleteFileCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnDeleteFileCompleteCallbackInternalImplementation
class CORDL_TYPE OnDeleteFileCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f87e0, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::DeleteFileCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f8840, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDeleteFileCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDeleteFileCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeleteFileCompleteCallbackInternalImplementation(OnDeleteFileCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeleteFileCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeleteFileCompleteCallbackInternalImplementation(OnDeleteFileCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnDeleteFileCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnWriteFileCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternalImplementation*, "Epic.OnlineServices.PlayerDataStorage", "OnWriteFileCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnWriteFileCompleteCallbackInternalImplementation
class CORDL_TYPE OnWriteFileCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fb770, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fb7d0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnWriteFileCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnWriteFileCompleteCallbackInternalImplementation(OnWriteFileCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnWriteFileCompleteCallbackInternalImplementation(OnWriteFileCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8313};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

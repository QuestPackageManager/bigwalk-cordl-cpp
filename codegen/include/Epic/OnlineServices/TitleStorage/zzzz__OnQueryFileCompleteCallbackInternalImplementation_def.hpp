#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnQueryFileCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryFileCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation*, "Epic.OnlineServices.TitleStorage", "OnQueryFileCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::TitleStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.TitleStorage.OnQueryFileCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryFileCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804dd640, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804dd6a0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternal*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7613};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::TitleStorage::OnQueryFileCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage

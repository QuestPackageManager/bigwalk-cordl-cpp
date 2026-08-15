#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnQueryFileListCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnQueryFileListCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileListCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct QueryFileListCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
class OnQueryFileListCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation*, "Epic.OnlineServices.TitleStorage", "OnQueryFileListCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::TitleStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.TitleStorage.OnQueryFileListCompleteCallbackInternalImplementation
class CORDL_TYPE OnQueryFileListCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804dd880, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::QueryFileListCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804dd8e0, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnQueryFileListCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnQueryFileListCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnQueryFileListCompleteCallbackInternalImplementation(OnQueryFileListCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnQueryFileListCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnQueryFileListCompleteCallbackInternalImplementation(OnQueryFileListCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::TitleStorage::OnQueryFileListCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage

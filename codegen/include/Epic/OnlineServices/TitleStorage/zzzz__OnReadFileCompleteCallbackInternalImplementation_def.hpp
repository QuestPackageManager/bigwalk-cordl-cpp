#pragma once
// IWYU pragma private; include "Epic/OnlineServices/TitleStorage/OnReadFileCompleteCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnReadFileCompleteCallbackInternalImplementation)
namespace Epic::OnlineServices::TitleStorage {
class OnReadFileCompleteCallbackInternal;
}
namespace Epic::OnlineServices::TitleStorage {
struct ReadFileCallbackInfoInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::TitleStorage {
class OnReadFileCompleteCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation*, "Epic.OnlineServices.TitleStorage", "OnReadFileCompleteCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::TitleStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.TitleStorage.OnReadFileCompleteCallbackInternalImplementation
class CORDL_TYPE OnReadFileCompleteCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804de410, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::TitleStorage::ReadFileCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804de470, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnReadFileCompleteCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileCompleteCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnReadFileCompleteCallbackInternalImplementation(OnReadFileCompleteCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileCompleteCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnReadFileCompleteCallbackInternalImplementation(OnReadFileCompleteCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7619};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::TitleStorage::OnReadFileCompleteCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::TitleStorage

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnReadFileDataCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnReadFileDataCallbackInternalImplementation)
namespace Epic::OnlineServices::PlayerDataStorage {
class OnReadFileDataCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadFileDataCallbackInfoInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct ReadResult;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class OnReadFileDataCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation*, "Epic.OnlineServices.PlayerDataStorage", "OnReadFileDataCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnReadFileDataCallbackInternalImplementation
class CORDL_TYPE OnReadFileDataCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fac20, size 0x70, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::ReadResult EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::ReadFileDataCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fac90, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnReadFileDataCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileDataCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnReadFileDataCallbackInternalImplementation(OnReadFileDataCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnReadFileDataCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnReadFileDataCallbackInternalImplementation(OnReadFileDataCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnReadFileDataCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

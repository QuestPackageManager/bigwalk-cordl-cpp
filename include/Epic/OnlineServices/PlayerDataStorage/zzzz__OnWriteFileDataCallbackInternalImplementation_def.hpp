#pragma once
// IWYU pragma private; include "Epic/OnlineServices/PlayerDataStorage/OnWriteFileDataCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnWriteFileDataCallbackInternalImplementation)
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileDataCallbackInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteFileDataCallbackInfoInternal;
}
namespace Epic::OnlineServices::PlayerDataStorage {
struct WriteResult;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Epic::OnlineServices::PlayerDataStorage {
class OnWriteFileDataCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation*, "Epic.OnlineServices.PlayerDataStorage", "OnWriteFileDataCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::PlayerDataStorage {
// Is value type: false
// CS Name: Epic.OnlineServices.PlayerDataStorage.OnWriteFileDataCallbackInternalImplementation
class CORDL_TYPE OnWriteFileDataCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804fb9b0, size 0xe0, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::WriteResult EntryPoint(::by_ref<::Epic::OnlineServices::PlayerDataStorage::WriteFileDataCallbackInfoInternal>  data, ::System::IntPtr  outDataBuffer, ::by_ref<uint32_t>  outDataWritten) ;

static inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804fba90, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnWriteFileDataCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileDataCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnWriteFileDataCallbackInternalImplementation(OnWriteFileDataCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnWriteFileDataCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnWriteFileDataCallbackInternalImplementation(OnWriteFileDataCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8316};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::PlayerDataStorage::OnWriteFileDataCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::PlayerDataStorage

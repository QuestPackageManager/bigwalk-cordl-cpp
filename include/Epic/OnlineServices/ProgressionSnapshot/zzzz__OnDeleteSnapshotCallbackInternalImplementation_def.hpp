#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/OnDeleteSnapshotCallbackInternalImplementation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OnDeleteSnapshotCallbackInternalImplementation)
namespace Epic::OnlineServices::ProgressionSnapshot {
struct DeleteSnapshotCallbackInfoInternal;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
class OnDeleteSnapshotCallbackInternal;
}
// Forward declare root types
namespace Epic::OnlineServices::ProgressionSnapshot {
class OnDeleteSnapshotCallbackInternalImplementation;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation*, "Epic.OnlineServices.ProgressionSnapshot", "OnDeleteSnapshotCallbackInternalImplementation");
// Dependencies System.Object
namespace Epic::OnlineServices::ProgressionSnapshot {
// Is value type: false
// CS Name: Epic.OnlineServices.ProgressionSnapshot.OnDeleteSnapshotCallbackInternalImplementation
class CORDL_TYPE OnDeleteSnapshotCallbackInternalImplementation : public ::System::Object {
public:
// Declarations
/// @brief Field s_Delegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Delegate, put=setStaticF_s_Delegate)) ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*  s_Delegate;

/// @brief Method EntryPoint, addr 0x1804f8a20, size 0x60, virtual false, abstract: false, final false
static inline void EntryPoint(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotCallbackInfoInternal>  data) ;

static inline ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal* getStaticF_s_Delegate() ;

/// @brief Method get_Delegate, addr 0x1804f8a80, size 0x120, virtual false, abstract: false, final false
static inline ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal* get_Delegate() ;

static inline void setStaticF_s_Delegate(::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternal*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnDeleteSnapshotCallbackInternalImplementation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnDeleteSnapshotCallbackInternalImplementation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnDeleteSnapshotCallbackInternalImplementation(OnDeleteSnapshotCallbackInternalImplementation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnDeleteSnapshotCallbackInternalImplementation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnDeleteSnapshotCallbackInternalImplementation(OnDeleteSnapshotCallbackInternalImplementation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallbackInternalImplementation) == 0x10, "Size mismatch!");

} // namespace end def Epic::OnlineServices::ProgressionSnapshot

#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/ProgressionSnapshotInterface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/zzzz__Handle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionSnapshotInterface)
namespace Epic::OnlineServices::ProgressionSnapshot {
struct AddProgressionOptions;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct BeginSnapshotOptions;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct DeleteSnapshotOptions;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct EndSnapshotOptions;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
class OnDeleteSnapshotCallback;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
class OnSubmitSnapshotCallback;
}
namespace Epic::OnlineServices::ProgressionSnapshot {
struct SubmitSnapshotOptions;
}
namespace Epic::OnlineServices {
struct Result;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Epic::OnlineServices::ProgressionSnapshot {
class ProgressionSnapshotInterface;
}
// Write type traits
MARK_REF_T(::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*);
DEFINE_IL2CPP_CLASS(::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*, "Epic.OnlineServices.ProgressionSnapshot", "ProgressionSnapshotInterface");
// Dependencies Epic.OnlineServices.Handle
namespace Epic::OnlineServices::ProgressionSnapshot {
// Is value type: false
// CS Name: Epic.OnlineServices.ProgressionSnapshot.ProgressionSnapshotInterface
class CORDL_TYPE ProgressionSnapshotInterface : public ::Epic::OnlineServices::Handle {
public:
// Declarations
/// @brief Method AddProgression, addr 0x1804ff960, size 0xa0, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result AddProgression(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>  options) ;

/// @brief Method BeginSnapshot, addr 0x1804ffa00, size 0x80, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result BeginSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions>  options, ::by_ref<uint32_t>  outSnapshotId) ;

/// @brief Method DeleteSnapshot, addr 0x1804ffa80, size 0x200, virtual false, abstract: false, final false
inline void DeleteSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*  completionDelegate) ;

/// @brief Method EndSnapshot, addr 0x1804ffc80, size 0x40, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Result EndSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>  options) ;

static inline ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* New_ctor() ;

static inline ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* New_ctor(::System::IntPtr  innerHandle) ;

/// @brief Method SubmitSnapshot, addr 0x1804ffcc0, size 0x210, virtual false, abstract: false, final false
inline void SubmitSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*  completionDelegate) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1804f0510, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  innerHandle) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressionSnapshotInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressionSnapshotInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressionSnapshotInterface(ProgressionSnapshotInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressionSnapshotInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressionSnapshotInterface(ProgressionSnapshotInterface const& ) = delete;

/// @brief Field ADDPROGRESSION_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ADDPROGRESSION_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field BEGINSNAPSHOT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  BEGINSNAPSHOT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field DELETESNAPSHOT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  DELETESNAPSHOT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field ENDSNAPSHOT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  ENDSNAPSHOT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief Field INVALID_PROGRESSIONSNAPSHOTID offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_PROGRESSIONSNAPSHOTID{static_cast<int32_t>(0x0)};

/// @brief Field SUBMITSNAPSHOT_API_LATEST offset 0xffffffff size 0x4
static constexpr int32_t  SUBMITSNAPSHOT_API_LATEST{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8198};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface) == 0x18, "Size mismatch!");

} // namespace end def Epic::OnlineServices::ProgressionSnapshot

#pragma once
// IWYU pragma private; include "GlobalNamespace/StatusSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StatusSetter)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
// Forward declare root types
namespace GlobalNamespace {
class StatusSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StatusSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StatusSetter*, "", "StatusSetter");
// Dependencies Mirror.NetworkBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: StatusSetter
class CORDL_TYPE StatusSetter : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkpreviousSessionTime, put=set_NetworkpreviousSessionTime)) int32_t  NetworkpreviousSessionTime;

 __declspec(property(get=get_NetworksessionIsClosed, put=set_NetworksessionIsClosed)) bool  NetworksessionIsClosed;

 __declspec(property(get=get_NetworkworldName, put=set_NetworkworldName)) ::StringW  NetworkworldName;

/// @brief Field previousSessionTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousSessionTime, put=__cordl_internal_set_previousSessionTime)) int32_t  previousSessionTime;

/// @brief Field sessionIsClosed, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_sessionIsClosed, put=__cordl_internal_set_sessionIsClosed)) bool  sessionIsClosed;

/// @brief Field worldName, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldName, put=__cordl_internal_set_worldName)) ::StringW  worldName;

/// @brief Method DeserializeSyncVars, addr 0x1803f0c80, size 0x2c0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::StatusSetter* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1803f0f40, size 0x10, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnSessionClosedChange, addr 0x1803f0f50, size 0x120, virtual false, abstract: false, final false
inline void OnSessionClosedChange(bool  newValue) ;

/// @brief Method OnSetPreviousTime, addr 0x1803f1070, size 0x30, virtual false, abstract: false, final false
inline void OnSetPreviousTime(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetSessionIsClosed, addr 0x1803f10a0, size 0x40, virtual false, abstract: false, final false
inline void OnSetSessionIsClosed(bool  oldValue, bool  newValue) ;

/// @brief Method OnSetWorldName, addr 0x1803f10e0, size 0x60, virtual false, abstract: false, final false
inline void OnSetWorldName(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method RefreshStatus, addr 0x1803f10a0, size 0x40, virtual false, abstract: false, final false
inline void RefreshStatus() ;

/// @brief Method SerializeSyncVars, addr 0x1803f1140, size 0x90, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method Start, addr 0x1803f11d0, size 0x220, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get_previousSessionTime() const;

constexpr int32_t& __cordl_internal_get_previousSessionTime() ;

constexpr bool const& __cordl_internal_get_sessionIsClosed() const;

constexpr bool& __cordl_internal_get_sessionIsClosed() ;

constexpr ::StringW const& __cordl_internal_get_worldName() const;

constexpr ::StringW& __cordl_internal_get_worldName() ;

constexpr void __cordl_internal_set_previousSessionTime(int32_t  value) ;

constexpr void __cordl_internal_set_sessionIsClosed(bool  value) ;

constexpr void __cordl_internal_set_worldName(::StringW  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkpreviousSessionTime, addr 0x1803becf0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkpreviousSessionTime() ;

/// @brief Method get_NetworksessionIsClosed, addr 0x180347a60, size 0xe0, virtual false, abstract: false, final false
inline bool get_NetworksessionIsClosed() ;

/// @brief Method get_NetworkworldName, addr 0x18039fe40, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworkworldName() ;

/// @brief Method set_NetworkpreviousSessionTime, addr 0x1803f13f0, size 0x110, virtual false, abstract: false, final false
inline void set_NetworkpreviousSessionTime(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworksessionIsClosed, addr 0x1803f1500, size 0x110, virtual false, abstract: false, final false
inline void set_NetworksessionIsClosed(::ByRefConst<bool>  value) ;

/// @brief Method set_NetworkworldName, addr 0x1803f1610, size 0x110, virtual false, abstract: false, final false
inline void set_NetworkworldName(::ByRefConst<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StatusSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StatusSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StatusSetter(StatusSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StatusSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StatusSetter(StatusSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4970};

/// @brief Field sessionIsClosed, offset: 0x68, size: 0x1, def value: None
 bool  ___sessionIsClosed;

/// @brief Field worldName, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___worldName;

/// @brief Field previousSessionTime, offset: 0x78, size: 0x4, def value: None
 int32_t  ___previousSessionTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StatusSetter, ___sessionIsClosed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StatusSetter, ___worldName) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StatusSetter, ___previousSessionTime) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StatusSetter) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

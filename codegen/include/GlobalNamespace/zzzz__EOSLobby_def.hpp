#pragma once
// IWYU pragma private; include "GlobalNamespace/EOSLobby.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Epic/OnlineServices/Lobby/zzzz__AttributeData_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EOSLobby)
namespace Epic::OnlineServices::Lobby {
struct AttributeData;
}
namespace Epic::OnlineServices::Lobby {
struct Attribute;
}
namespace Epic::OnlineServices::Lobby {
struct CreateLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct DestroyLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct JoinLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct KickMemberCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct LeaveLobbyCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
class LobbyDetails;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyMemberStatusReceivedCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyPermissionLevel;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchFindCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct LobbySearchSetParameterOptions;
}
namespace Epic::OnlineServices::Lobby {
class LobbySearch;
}
namespace Epic::OnlineServices::Lobby {
struct LobbyUpdateReceivedCallbackInfo;
}
namespace Epic::OnlineServices::Lobby {
struct UpdateLobbyCallbackInfo;
}
namespace Epic::OnlineServices {
class ProductUserId;
}
namespace Epic::OnlineServices {
class Utf8String;
}
namespace GlobalNamespace {
class EOSLobby_CreateLobbyFailure;
}
namespace GlobalNamespace {
class EOSLobby_CreateLobbySuccess;
}
namespace GlobalNamespace {
class EOSLobby_FindLobbiesFailure;
}
namespace GlobalNamespace {
class EOSLobby_FindLobbiesSuccess;
}
namespace GlobalNamespace {
class EOSLobby_JoinLobbyFailure;
}
namespace GlobalNamespace {
class EOSLobby_JoinLobbySuccess;
}
namespace GlobalNamespace {
class EOSLobby_LeaveLobbyFailure;
}
namespace GlobalNamespace {
class EOSLobby_LeaveLobbySuccess;
}
namespace GlobalNamespace {
class EOSLobby_LobbyAttributeUpdate;
}
namespace GlobalNamespace {
class EOSLobby_LobbyMemberStatusUpdate;
}
namespace GlobalNamespace {
class EOSLobby_UpdateAttributeFailure;
}
namespace GlobalNamespace {
class EOSLobby_UpdateAttributeSuccess;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass66_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass66_1;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass67_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass68_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass69_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass71_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass72_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass78_0;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class EOSLobby;
}
namespace GlobalNamespace {
class EOSLobby_CreateLobbyFailure;
}
namespace GlobalNamespace {
class EOSLobby_CreateLobbySuccess;
}
namespace GlobalNamespace {
class EOSLobby_FindLobbiesFailure;
}
namespace GlobalNamespace {
class EOSLobby_FindLobbiesSuccess;
}
namespace GlobalNamespace {
class EOSLobby_JoinLobbyFailure;
}
namespace GlobalNamespace {
class EOSLobby_JoinLobbySuccess;
}
namespace GlobalNamespace {
class EOSLobby_LeaveLobbyFailure;
}
namespace GlobalNamespace {
class EOSLobby_LeaveLobbySuccess;
}
namespace GlobalNamespace {
class EOSLobby_LobbyAttributeUpdate;
}
namespace GlobalNamespace {
class EOSLobby_LobbyMemberStatusUpdate;
}
namespace GlobalNamespace {
class EOSLobby_UpdateAttributeFailure;
}
namespace GlobalNamespace {
class EOSLobby_UpdateAttributeSuccess;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass66_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass66_1;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass67_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass68_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass69_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass71_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass72_0;
}
namespace GlobalNamespace {
class EOSLobby___c__DisplayClass78_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EOSLobby*);
MARK_REF_T(::GlobalNamespace::EOSLobby_CreateLobbyFailure*);
MARK_REF_T(::GlobalNamespace::EOSLobby_CreateLobbySuccess*);
MARK_REF_T(::GlobalNamespace::EOSLobby_FindLobbiesFailure*);
MARK_REF_T(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*);
MARK_REF_T(::GlobalNamespace::EOSLobby_JoinLobbyFailure*);
MARK_REF_T(::GlobalNamespace::EOSLobby_JoinLobbySuccess*);
MARK_REF_T(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*);
MARK_REF_T(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*);
MARK_REF_T(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*);
MARK_REF_T(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*);
MARK_REF_T(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*);
MARK_REF_T(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass66_0*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass66_1*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass67_0*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass68_0*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass69_0*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass71_0*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass72_0*);
MARK_REF_T(::GlobalNamespace::EOSLobby___c__DisplayClass78_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby*, "", "EOSLobby");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_CreateLobbyFailure*, "", "EOSLobby/CreateLobbyFailure");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_CreateLobbySuccess*, "", "EOSLobby/CreateLobbySuccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_FindLobbiesFailure*, "", "EOSLobby/FindLobbiesFailure");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*, "", "EOSLobby/FindLobbiesSuccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_JoinLobbyFailure*, "", "EOSLobby/JoinLobbyFailure");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_JoinLobbySuccess*, "", "EOSLobby/JoinLobbySuccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*, "", "EOSLobby/LeaveLobbyFailure");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*, "", "EOSLobby/LeaveLobbySuccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*, "", "EOSLobby/LobbyAttributeUpdate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*, "", "EOSLobby/LobbyMemberStatusUpdate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*, "", "EOSLobby/UpdateAttributeFailure");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*, "", "EOSLobby/UpdateAttributeSuccess");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass66_0*, "", "EOSLobby/<>c__DisplayClass66_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass66_1*, "", "EOSLobby/<>c__DisplayClass66_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass67_0*, "", "EOSLobby/<>c__DisplayClass67_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass68_0*, "", "EOSLobby/<>c__DisplayClass68_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass69_0*, "", "EOSLobby/<>c__DisplayClass69_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass71_0*, "", "EOSLobby/<>c__DisplayClass71_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass72_0*, "", "EOSLobby/<>c__DisplayClass72_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EOSLobby___c__DisplayClass78_0*, "", "EOSLobby/<>c__DisplayClass78_0");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/CreateLobbySuccess
class CORDL_TYPE EOSLobby_CreateLobbySuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes) ;

static inline ::GlobalNamespace::EOSLobby_CreateLobbySuccess* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1803e3c00, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_CreateLobbySuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_CreateLobbySuccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_CreateLobbySuccess(EOSLobby_CreateLobbySuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_CreateLobbySuccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_CreateLobbySuccess(EOSLobby_CreateLobbySuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19000};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_CreateLobbySuccess) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/CreateLobbyFailure
class CORDL_TYPE EOSLobby_CreateLobbyFailure : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  errorMessage) ;

static inline ::GlobalNamespace::EOSLobby_CreateLobbyFailure* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_CreateLobbyFailure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_CreateLobbyFailure", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_CreateLobbyFailure(EOSLobby_CreateLobbyFailure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_CreateLobbyFailure", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_CreateLobbyFailure(EOSLobby_CreateLobbyFailure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19001};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_CreateLobbyFailure) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/JoinLobbySuccess
class CORDL_TYPE EOSLobby_JoinLobbySuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  attributes) ;

static inline ::GlobalNamespace::EOSLobby_JoinLobbySuccess* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1803e3c00, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_JoinLobbySuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_JoinLobbySuccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_JoinLobbySuccess(EOSLobby_JoinLobbySuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_JoinLobbySuccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_JoinLobbySuccess(EOSLobby_JoinLobbySuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_JoinLobbySuccess) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/JoinLobbyFailure
class CORDL_TYPE EOSLobby_JoinLobbyFailure : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  errorMessage) ;

static inline ::GlobalNamespace::EOSLobby_JoinLobbyFailure* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_JoinLobbyFailure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_JoinLobbyFailure", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_JoinLobbyFailure(EOSLobby_JoinLobbyFailure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_JoinLobbyFailure", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_JoinLobbyFailure(EOSLobby_JoinLobbyFailure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_JoinLobbyFailure) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/FindLobbiesSuccess
class CORDL_TYPE EOSLobby_FindLobbiesSuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  foundLobbies, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  foundLobbies) ;

static inline ::GlobalNamespace::EOSLobby_FindLobbiesSuccess* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1803e3c00, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_FindLobbiesSuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_FindLobbiesSuccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_FindLobbiesSuccess(EOSLobby_FindLobbiesSuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_FindLobbiesSuccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_FindLobbiesSuccess(EOSLobby_FindLobbiesSuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19004};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_FindLobbiesSuccess) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/FindLobbiesFailure
class CORDL_TYPE EOSLobby_FindLobbiesFailure : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  errorMessage) ;

static inline ::GlobalNamespace::EOSLobby_FindLobbiesFailure* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_FindLobbiesFailure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_FindLobbiesFailure", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_FindLobbiesFailure(EOSLobby_FindLobbiesFailure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_FindLobbiesFailure", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_FindLobbiesFailure(EOSLobby_FindLobbiesFailure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_FindLobbiesFailure) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/LeaveLobbySuccess
class CORDL_TYPE EOSLobby_LeaveLobbySuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18057e6e0, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1802dc3f0, size 0x10, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::GlobalNamespace::EOSLobby_LeaveLobbySuccess* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x18057e770, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_LeaveLobbySuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LeaveLobbySuccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_LeaveLobbySuccess(EOSLobby_LeaveLobbySuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LeaveLobbySuccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_LeaveLobbySuccess(EOSLobby_LeaveLobbySuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19006};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_LeaveLobbySuccess) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/LeaveLobbyFailure
class CORDL_TYPE EOSLobby_LeaveLobbyFailure : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  errorMessage) ;

static inline ::GlobalNamespace::EOSLobby_LeaveLobbyFailure* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_LeaveLobbyFailure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LeaveLobbyFailure", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_LeaveLobbyFailure(EOSLobby_LeaveLobbyFailure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LeaveLobbyFailure", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_LeaveLobbyFailure(EOSLobby_LeaveLobbyFailure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19007};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_LeaveLobbyFailure) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/UpdateAttributeSuccess
class CORDL_TYPE EOSLobby_UpdateAttributeSuccess : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x1803e3a20, size 0x30, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  key, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1803e3a50, size 0x1b0, virtual true, abstract: false, final false
inline void Invoke(::StringW  key) ;

static inline ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805450a0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_UpdateAttributeSuccess() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_UpdateAttributeSuccess", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_UpdateAttributeSuccess(EOSLobby_UpdateAttributeSuccess && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_UpdateAttributeSuccess", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_UpdateAttributeSuccess(EOSLobby_UpdateAttributeSuccess const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/UpdateAttributeFailure
class CORDL_TYPE EOSLobby_UpdateAttributeFailure : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180582750, size 0x70, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  key, ::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x1804f6ae0, size 0xc0, virtual true, abstract: false, final false
inline void Invoke(::StringW  key, ::StringW  errorMessage) ;

static inline ::GlobalNamespace::EOSLobby_UpdateAttributeFailure* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x1805827c0, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_UpdateAttributeFailure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_UpdateAttributeFailure", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_UpdateAttributeFailure(EOSLobby_UpdateAttributeFailure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_UpdateAttributeFailure", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_UpdateAttributeFailure(EOSLobby_UpdateAttributeFailure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19009};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_UpdateAttributeFailure) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/LobbyMemberStatusUpdate
class CORDL_TYPE EOSLobby_LobbyMemberStatusUpdate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18050f650, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo  callback, ::System::AsyncCallback*  __callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180542180, size 0xe0, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo  callback) ;

static inline ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180542260, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_LobbyMemberStatusUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LobbyMemberStatusUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_LobbyMemberStatusUpdate(EOSLobby_LobbyMemberStatusUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LobbyMemberStatusUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_LobbyMemberStatusUpdate(EOSLobby_LobbyMemberStatusUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19010};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/LobbyAttributeUpdate
class CORDL_TYPE EOSLobby_LobbyAttributeUpdate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x18050fad0, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo  callback, ::System::AsyncCallback*  __callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x1803828a0, size 0x10, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180ccb9e0, size 0x300, virtual true, abstract: false, final false
inline void Invoke(::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo  callback) ;

static inline ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180eb2b50, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby_LobbyAttributeUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LobbyAttributeUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby_LobbyAttributeUpdate(EOSLobby_LobbyAttributeUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby_LobbyAttributeUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby_LobbyAttributeUpdate(EOSLobby_LobbyAttributeUpdate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19011};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Epic.OnlineServices.Lobby.AttributeData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass66_0
class CORDL_TYPE EOSLobby___c__DisplayClass66_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field lobbyData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyData, put=__cordl_internal_set_lobbyData)) ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>  lobbyData;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass66_0* New_ctor() ;

/// @brief Method <CreateLobby>b__0, addr 0x18157eb10, size 0x9a0, virtual false, abstract: false, final false
inline void _CreateLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::CreateLobbyCallbackInfo>  callback) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData> const& __cordl_internal_get_lobbyData() const;

constexpr ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>& __cordl_internal_get_lobbyData() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_lobbyData(::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass66_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass66_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass66_0(EOSLobby___c__DisplayClass66_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass66_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass66_0(EOSLobby___c__DisplayClass66_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19012};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

/// @brief Field lobbyData, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>  ___lobbyData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass66_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass66_0, ___lobbyData) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass66_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass66_1
class CORDL_TYPE EOSLobby___c__DisplayClass66_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::EOSLobby___c__DisplayClass66_0*  CS$__8__locals1;

/// @brief Field lobbyId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyId, put=__cordl_internal_set_lobbyId)) ::Epic::OnlineServices::Utf8String*  lobbyId;

/// @brief Field lobbyReturnData, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyReturnData, put=__cordl_internal_set_lobbyReturnData)) ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  lobbyReturnData;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass66_1* New_ctor() ;

/// @brief Method <CreateLobby>b__1, addr 0x18157f4b0, size 0x220, virtual false, abstract: false, final false
inline void _CreateLobby_b__1(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  updateCallback) ;

constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass66_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::EOSLobby___c__DisplayClass66_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr ::Epic::OnlineServices::Utf8String* const& __cordl_internal_get_lobbyId() const;

constexpr ::Epic::OnlineServices::Utf8String*& __cordl_internal_get_lobbyId() ;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>* const& __cordl_internal_get_lobbyReturnData() const;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*& __cordl_internal_get_lobbyReturnData() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::EOSLobby___c__DisplayClass66_0*  value) ;

constexpr void __cordl_internal_set_lobbyId(::Epic::OnlineServices::Utf8String*  value) ;

constexpr void __cordl_internal_set_lobbyReturnData(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass66_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass66_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass66_1(EOSLobby___c__DisplayClass66_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass66_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass66_1(EOSLobby___c__DisplayClass66_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19013};

/// @brief Field lobbyId, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::Utf8String*  ___lobbyId;

/// @brief Field lobbyReturnData, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  ___lobbyReturnData;

/// @brief Field CS$<>8__locals1, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby___c__DisplayClass66_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass66_1, ___lobbyId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass66_1, ___lobbyReturnData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass66_1, ___CS$__8__locals1) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass66_1) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass67_0
class CORDL_TYPE EOSLobby___c__DisplayClass67_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Lobby::LobbySearch*  search;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass67_0* New_ctor() ;

/// @brief Method <FindLobbies>b__0, addr 0x18157f6d0, size 0x1f0, virtual false, abstract: false, final false
inline void _FindLobbies_b__0(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>  callback) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Lobby::LobbySearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Lobby::LobbySearch*& __cordl_internal_get_search() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Lobby::LobbySearch*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass67_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass67_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass67_0(EOSLobby___c__DisplayClass67_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass67_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass67_0(EOSLobby___c__DisplayClass67_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19014};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbySearch*  ___search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass67_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass67_0, ___search) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass67_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass68_0
class CORDL_TYPE EOSLobby___c__DisplayClass68_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field attributeKeys, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_attributeKeys, put=__cordl_internal_set_attributeKeys)) ::ArrayW<::StringW>  attributeKeys;

/// @brief Field lobbyToJoin, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyToJoin, put=__cordl_internal_set_lobbyToJoin)) ::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyToJoin;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass68_0* New_ctor() ;

/// @brief Method <JoinLobby>b__0, addr 0x18157f8c0, size 0x4e0, virtual false, abstract: false, final false
inline void _JoinLobby_b__0(::by_ref<::Epic::OnlineServices::Lobby::JoinLobbyCallbackInfo>  callback) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_attributeKeys() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_attributeKeys() ;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetails* const& __cordl_internal_get_lobbyToJoin() const;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetails*& __cordl_internal_get_lobbyToJoin() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_attributeKeys(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_lobbyToJoin(::Epic::OnlineServices::Lobby::LobbyDetails*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass68_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass68_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass68_0(EOSLobby___c__DisplayClass68_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass68_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass68_0(EOSLobby___c__DisplayClass68_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19015};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

/// @brief Field lobbyToJoin, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbyDetails*  ___lobbyToJoin;

/// @brief Field attributeKeys, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___attributeKeys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass68_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass68_0, ___lobbyToJoin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass68_0, ___attributeKeys) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass68_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass69_0
class CORDL_TYPE EOSLobby___c__DisplayClass69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field search, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_search, put=__cordl_internal_set_search)) ::Epic::OnlineServices::Lobby::LobbySearch*  search;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass69_0* New_ctor() ;

/// @brief Method <JoinLobbyByID>b__0, addr 0x18157fda0, size 0x220, virtual false, abstract: false, final false
inline void _JoinLobbyByID_b__0(::by_ref<::Epic::OnlineServices::Lobby::LobbySearchFindCallbackInfo>  callback) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Lobby::LobbySearch* const& __cordl_internal_get_search() const;

constexpr ::Epic::OnlineServices::Lobby::LobbySearch*& __cordl_internal_get_search() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_search(::Epic::OnlineServices::Lobby::LobbySearch*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass69_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass69_0(EOSLobby___c__DisplayClass69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass69_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass69_0(EOSLobby___c__DisplayClass69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19016};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

/// @brief Field search, offset: 0x18, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbySearch*  ___search;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass69_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass69_0, ___search) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass69_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass71_0
class CORDL_TYPE EOSLobby___c__DisplayClass71_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field key, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_key, put=__cordl_internal_set_key)) ::StringW  key;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass71_0* New_ctor() ;

/// @brief Method <RemoveAttribute>b__0, addr 0x18157ffc0, size 0xe0, virtual false, abstract: false, final false
inline void _RemoveAttribute_b__0(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  callback) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_key() const;

constexpr ::StringW& __cordl_internal_get_key() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_key(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass71_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass71_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass71_0(EOSLobby___c__DisplayClass71_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass71_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass71_0(EOSLobby___c__DisplayClass71_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19017};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

/// @brief Field key, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass71_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass71_0, ___key) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass71_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies Epic.OnlineServices.Lobby.AttributeData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass72_0
class CORDL_TYPE EOSLobby___c__DisplayClass72_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field attribute, offset 0x18, size 0x40 
 __declspec(property(get=__cordl_internal_get_attribute, put=__cordl_internal_set_attribute)) ::Epic::OnlineServices::Lobby::AttributeData  attribute;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass72_0* New_ctor() ;

/// @brief Method <UpdateAttribute>b__0, addr 0x1815800a0, size 0x120, virtual false, abstract: false, final false
inline void _UpdateAttribute_b__0(::by_ref<::Epic::OnlineServices::Lobby::UpdateLobbyCallbackInfo>  callback) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr ::Epic::OnlineServices::Lobby::AttributeData const& __cordl_internal_get_attribute() const;

constexpr ::Epic::OnlineServices::Lobby::AttributeData& __cordl_internal_get_attribute() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_attribute(::Epic::OnlineServices::Lobby::AttributeData  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass72_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass72_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass72_0(EOSLobby___c__DisplayClass72_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass72_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass72_0(EOSLobby___c__DisplayClass72_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19018};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

/// @brief Field attribute, offset: 0x18, size: 0x40, def value: None
 ::Epic::OnlineServices::Lobby::AttributeData  ___attribute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass72_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass72_0, ___attribute) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass72_0) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby/<>c__DisplayClass78_0
class CORDL_TYPE EOSLobby___c__DisplayClass78_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::EOSLobby>  __4__this;

/// @brief Field isBanning, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBanning, put=__cordl_internal_set_isBanning)) bool  isBanning;

/// @brief Field pid, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pid, put=__cordl_internal_set_pid)) ::Epic::OnlineServices::ProductUserId*  pid;

static inline ::GlobalNamespace::EOSLobby___c__DisplayClass78_0* New_ctor() ;

/// @brief Method <KickMember>b__0, addr 0x1815801c0, size 0x80, virtual false, abstract: false, final false
inline void _KickMember_b__0(::by_ref<::Epic::OnlineServices::Lobby::KickMemberCallbackInfo>  result) ;

constexpr ::UnityW<::GlobalNamespace::EOSLobby> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::EOSLobby>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_isBanning() const;

constexpr bool& __cordl_internal_get_isBanning() ;

constexpr ::Epic::OnlineServices::ProductUserId* const& __cordl_internal_get_pid() const;

constexpr ::Epic::OnlineServices::ProductUserId*& __cordl_internal_get_pid() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::EOSLobby>  value) ;

constexpr void __cordl_internal_set_isBanning(bool  value) ;

constexpr void __cordl_internal_set_pid(::Epic::OnlineServices::ProductUserId*  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby___c__DisplayClass78_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass78_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby___c__DisplayClass78_0(EOSLobby___c__DisplayClass78_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby___c__DisplayClass78_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby___c__DisplayClass78_0(EOSLobby___c__DisplayClass78_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19019};

/// @brief Field pid, offset: 0x10, size: 0x8, def value: None
 ::Epic::OnlineServices::ProductUserId*  ___pid;

/// @brief Field isBanning, offset: 0x18, size: 0x1, def value: None
 bool  ___isBanning;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::EOSLobby>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass78_0, ___pid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass78_0, ___isBanning) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby___c__DisplayClass78_0, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby___c__DisplayClass78_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EOSLobby
class CORDL_TYPE EOSLobby : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CreateLobbyFailure = ::GlobalNamespace::EOSLobby_CreateLobbyFailure;

using CreateLobbySuccess = ::GlobalNamespace::EOSLobby_CreateLobbySuccess;

using FindLobbiesFailure = ::GlobalNamespace::EOSLobby_FindLobbiesFailure;

using FindLobbiesSuccess = ::GlobalNamespace::EOSLobby_FindLobbiesSuccess;

using JoinLobbyFailure = ::GlobalNamespace::EOSLobby_JoinLobbyFailure;

using JoinLobbySuccess = ::GlobalNamespace::EOSLobby_JoinLobbySuccess;

using LeaveLobbyFailure = ::GlobalNamespace::EOSLobby_LeaveLobbyFailure;

using LeaveLobbySuccess = ::GlobalNamespace::EOSLobby_LeaveLobbySuccess;

using LobbyAttributeUpdate = ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate;

using LobbyMemberStatusUpdate = ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate;

using UpdateAttributeFailure = ::GlobalNamespace::EOSLobby_UpdateAttributeFailure;

using UpdateAttributeSuccess = ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess;

using __c__DisplayClass66_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass66_0;

using __c__DisplayClass66_1 = ::GlobalNamespace::EOSLobby___c__DisplayClass66_1;

using __c__DisplayClass67_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass67_0;

using __c__DisplayClass68_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass68_0;

using __c__DisplayClass69_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass69_0;

using __c__DisplayClass71_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass71_0;

using __c__DisplayClass72_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass72_0;

using __c__DisplayClass78_0 = ::GlobalNamespace::EOSLobby___c__DisplayClass78_0;

/// @brief Field AttributeUpdateFailed, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttributeUpdateFailed, put=__cordl_internal_set_AttributeUpdateFailed)) ::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  AttributeUpdateFailed;

/// @brief Field AttributeUpdateSucceeded, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_AttributeUpdateSucceeded, put=__cordl_internal_set_AttributeUpdateSucceeded)) ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  AttributeUpdateSucceeded;

 __declspec(property(get=get_ConnectedLobbyDetails, put=set_ConnectedLobbyDetails)) ::Epic::OnlineServices::Lobby::LobbyDetails*  ConnectedLobbyDetails;

 __declspec(property(get=get_ConnectedToLobby, put=set_ConnectedToLobby)) bool  ConnectedToLobby;

/// @brief Field CreateLobbyFailed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreateLobbyFailed, put=__cordl_internal_set_CreateLobbyFailed)) ::GlobalNamespace::EOSLobby_CreateLobbyFailure*  CreateLobbyFailed;

/// @brief Field CreateLobbySucceeded, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_CreateLobbySucceeded, put=__cordl_internal_set_CreateLobbySucceeded)) ::GlobalNamespace::EOSLobby_CreateLobbySuccess*  CreateLobbySucceeded;

/// @brief Field FindLobbiesFailed, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_FindLobbiesFailed, put=__cordl_internal_set_FindLobbiesFailed)) ::GlobalNamespace::EOSLobby_FindLobbiesFailure*  FindLobbiesFailed;

/// @brief Field FindLobbiesSucceeded, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_FindLobbiesSucceeded, put=__cordl_internal_set_FindLobbiesSucceeded)) ::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  FindLobbiesSucceeded;

/// @brief Field JoinLobbyFailed, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinLobbyFailed, put=__cordl_internal_set_JoinLobbyFailed)) ::GlobalNamespace::EOSLobby_JoinLobbyFailure*  JoinLobbyFailed;

/// @brief Field JoinLobbySucceeded, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_JoinLobbySucceeded, put=__cordl_internal_set_JoinLobbySucceeded)) ::GlobalNamespace::EOSLobby_JoinLobbySuccess*  JoinLobbySucceeded;

/// @brief Field LeaveLobbyFailed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeaveLobbyFailed, put=__cordl_internal_set_LeaveLobbyFailed)) ::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  LeaveLobbyFailed;

/// @brief Field LeaveLobbySucceeded, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_LeaveLobbySucceeded, put=__cordl_internal_set_LeaveLobbySucceeded)) ::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  LeaveLobbySucceeded;

/// @brief Field LobbyAttributeUpdated, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyAttributeUpdated, put=__cordl_internal_set_LobbyAttributeUpdated)) ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  LobbyAttributeUpdated;

/// @brief Field LobbyMemberStatusUpdated, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_LobbyMemberStatusUpdated, put=__cordl_internal_set_LobbyMemberStatusUpdated)) ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  LobbyMemberStatusUpdated;

/// @brief Field <ConnectedLobbyDetails>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConnectedLobbyDetails_k__BackingField, put=__cordl_internal_set__ConnectedLobbyDetails_k__BackingField)) ::Epic::OnlineServices::Lobby::LobbyDetails*  _ConnectedLobbyDetails_k__BackingField;

/// @brief Field <ConnectedToLobby>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__ConnectedToLobby_k__BackingField, put=__cordl_internal_set__ConnectedToLobby_k__BackingField)) bool  _ConnectedToLobby_k__BackingField;

/// @brief Field currentLobbyId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentLobbyId, put=__cordl_internal_set_currentLobbyId)) ::StringW  currentLobbyId;

/// @brief Field foundLobbies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_foundLobbies, put=__cordl_internal_set_foundLobbies)) ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  foundLobbies;

/// @brief Field isLobbyOwner, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLobbyOwner, put=__cordl_internal_set_isLobbyOwner)) bool  isLobbyOwner;

/// @brief Field listOfBannedPlayers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_listOfBannedPlayers, put=__cordl_internal_set_listOfBannedPlayers)) ::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>*  listOfBannedPlayers;

/// @brief Field lobbyAttributeUpdateNotifyId, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyAttributeUpdateNotifyId, put=__cordl_internal_set_lobbyAttributeUpdateNotifyId)) uint64_t  lobbyAttributeUpdateNotifyId;

/// @brief Field lobbyData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyData, put=__cordl_internal_set_lobbyData)) ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  lobbyData;

/// @brief Field lobbyMemberStatusNotifyId, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lobbyMemberStatusNotifyId, put=__cordl_internal_set_lobbyMemberStatusNotifyId)) uint64_t  lobbyMemberStatusNotifyId;

/// @brief Method CreateLobby, addr 0x1815704b0, size 0x1e0, virtual true, abstract: false, final false
inline void CreateLobby(uint32_t  maxConnections, ::Epic::OnlineServices::Lobby::LobbyPermissionLevel  permissionLevel, bool  presenceEnabled, ::ArrayW<::Epic::OnlineServices::Lobby::AttributeData>  lobbyData) ;

/// @brief Method FindLobbies, addr 0x181570690, size 0x350, virtual true, abstract: false, final false
inline void FindLobbies(uint32_t  maxResults, ::ArrayW<::Epic::OnlineServices::Lobby::LobbySearchSetParameterOptions>  lobbySearchSetParameterOptions) ;

/// @brief Method GetCurrentLobbyId, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::StringW GetCurrentLobbyId() ;

/// @brief Method JoinLobby, addr 0x181570b90, size 0x1b0, virtual true, abstract: false, final false
inline void JoinLobby(::Epic::OnlineServices::Lobby::LobbyDetails*  lobbyToJoin, ::ArrayW<::StringW>  attributeKeys, bool  presenceEnabled) ;

/// @brief Method JoinLobbyByID, addr 0x1815709e0, size 0x1b0, virtual true, abstract: false, final false
inline void JoinLobbyByID(::StringW  lobbyID) ;

/// @brief Method KickMember, addr 0x181570d40, size 0x1f0, virtual false, abstract: false, final false
inline void KickMember(::Epic::OnlineServices::ProductUserId*  pid, bool  isBanning) ;

/// @brief Method LeaveLobby, addr 0x181570f30, size 0x260, virtual true, abstract: false, final false
inline void LeaveLobby() ;

static inline ::GlobalNamespace::EOSLobby* New_ctor() ;

/// @brief Method RemoveAttribute, addr 0x181571190, size 0x1f0, virtual true, abstract: false, final false
inline void RemoveAttribute(::StringW  key) ;

/// @brief Method Start, addr 0x181571380, size 0x110, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateAttribute, addr 0x1815716b0, size 0x2c0, virtual false, abstract: false, final false
inline void UpdateAttribute(::Epic::OnlineServices::Lobby::AttributeData  attribute) ;

/// @brief Method UpdateLobbyAttribute, addr 0x181571a60, size 0xe0, virtual false, abstract: false, final false
inline void UpdateLobbyAttribute(::StringW  key, ::StringW  newValue) ;

/// @brief Method UpdateLobbyAttribute, addr 0x181571c40, size 0xf0, virtual false, abstract: false, final false
inline void UpdateLobbyAttribute(::StringW  key, bool  newValue) ;

/// @brief Method UpdateLobbyAttribute, addr 0x181571b40, size 0x100, virtual false, abstract: false, final false
inline void UpdateLobbyAttribute(::StringW  key, double_t  newValue) ;

/// @brief Method UpdateLobbyAttribute, addr 0x181571970, size 0xf0, virtual false, abstract: false, final false
inline void UpdateLobbyAttribute(::StringW  key, int32_t  newValue) ;

/// @brief Method <LeaveLobby>b__70_0, addr 0x181571490, size 0xa0, virtual false, abstract: false, final false
inline void _LeaveLobby_b__70_0(::by_ref<::Epic::OnlineServices::Lobby::DestroyLobbyCallbackInfo>  callback) ;

/// @brief Method <LeaveLobby>b__70_1, addr 0x181571530, size 0xa0, virtual false, abstract: false, final false
inline void _LeaveLobby_b__70_1(::by_ref<::Epic::OnlineServices::Lobby::LeaveLobbyCallbackInfo>  callback) ;

/// @brief Method <Start>b__65_0, addr 0x1815715d0, size 0xb0, virtual false, abstract: false, final false
inline void _Start_b__65_0(::by_ref<::Epic::OnlineServices::Lobby::LobbyMemberStatusReceivedCallbackInfo>  data) ;

/// @brief Method <Start>b__65_1, addr 0x181571680, size 0x30, virtual false, abstract: false, final false
inline void _Start_b__65_1(::by_ref<::Epic::OnlineServices::Lobby::LobbyUpdateReceivedCallbackInfo>  callback) ;

constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeFailure* const& __cordl_internal_get_AttributeUpdateFailed() const;

constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeFailure*& __cordl_internal_get_AttributeUpdateFailed() ;

constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess* const& __cordl_internal_get_AttributeUpdateSucceeded() const;

constexpr ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*& __cordl_internal_get_AttributeUpdateSucceeded() ;

constexpr ::GlobalNamespace::EOSLobby_CreateLobbyFailure* const& __cordl_internal_get_CreateLobbyFailed() const;

constexpr ::GlobalNamespace::EOSLobby_CreateLobbyFailure*& __cordl_internal_get_CreateLobbyFailed() ;

constexpr ::GlobalNamespace::EOSLobby_CreateLobbySuccess* const& __cordl_internal_get_CreateLobbySucceeded() const;

constexpr ::GlobalNamespace::EOSLobby_CreateLobbySuccess*& __cordl_internal_get_CreateLobbySucceeded() ;

constexpr ::GlobalNamespace::EOSLobby_FindLobbiesFailure* const& __cordl_internal_get_FindLobbiesFailed() const;

constexpr ::GlobalNamespace::EOSLobby_FindLobbiesFailure*& __cordl_internal_get_FindLobbiesFailed() ;

constexpr ::GlobalNamespace::EOSLobby_FindLobbiesSuccess* const& __cordl_internal_get_FindLobbiesSucceeded() const;

constexpr ::GlobalNamespace::EOSLobby_FindLobbiesSuccess*& __cordl_internal_get_FindLobbiesSucceeded() ;

constexpr ::GlobalNamespace::EOSLobby_JoinLobbyFailure* const& __cordl_internal_get_JoinLobbyFailed() const;

constexpr ::GlobalNamespace::EOSLobby_JoinLobbyFailure*& __cordl_internal_get_JoinLobbyFailed() ;

constexpr ::GlobalNamespace::EOSLobby_JoinLobbySuccess* const& __cordl_internal_get_JoinLobbySucceeded() const;

constexpr ::GlobalNamespace::EOSLobby_JoinLobbySuccess*& __cordl_internal_get_JoinLobbySucceeded() ;

constexpr ::GlobalNamespace::EOSLobby_LeaveLobbyFailure* const& __cordl_internal_get_LeaveLobbyFailed() const;

constexpr ::GlobalNamespace::EOSLobby_LeaveLobbyFailure*& __cordl_internal_get_LeaveLobbyFailed() ;

constexpr ::GlobalNamespace::EOSLobby_LeaveLobbySuccess* const& __cordl_internal_get_LeaveLobbySucceeded() const;

constexpr ::GlobalNamespace::EOSLobby_LeaveLobbySuccess*& __cordl_internal_get_LeaveLobbySucceeded() ;

constexpr ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate* const& __cordl_internal_get_LobbyAttributeUpdated() const;

constexpr ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*& __cordl_internal_get_LobbyAttributeUpdated() ;

constexpr ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate* const& __cordl_internal_get_LobbyMemberStatusUpdated() const;

constexpr ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*& __cordl_internal_get_LobbyMemberStatusUpdated() ;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetails* const& __cordl_internal_get__ConnectedLobbyDetails_k__BackingField() const;

constexpr ::Epic::OnlineServices::Lobby::LobbyDetails*& __cordl_internal_get__ConnectedLobbyDetails_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ConnectedToLobby_k__BackingField() const;

constexpr bool& __cordl_internal_get__ConnectedToLobby_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_currentLobbyId() const;

constexpr ::StringW& __cordl_internal_get_currentLobbyId() ;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>* const& __cordl_internal_get_foundLobbies() const;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*& __cordl_internal_get_foundLobbies() ;

constexpr bool const& __cordl_internal_get_isLobbyOwner() const;

constexpr bool& __cordl_internal_get_isLobbyOwner() ;

constexpr ::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>* const& __cordl_internal_get_listOfBannedPlayers() const;

constexpr ::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>*& __cordl_internal_get_listOfBannedPlayers() ;

constexpr uint64_t const& __cordl_internal_get_lobbyAttributeUpdateNotifyId() const;

constexpr uint64_t& __cordl_internal_get_lobbyAttributeUpdateNotifyId() ;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>* const& __cordl_internal_get_lobbyData() const;

constexpr ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*& __cordl_internal_get_lobbyData() ;

constexpr uint64_t const& __cordl_internal_get_lobbyMemberStatusNotifyId() const;

constexpr uint64_t& __cordl_internal_get_lobbyMemberStatusNotifyId() ;

constexpr void __cordl_internal_set_AttributeUpdateFailed(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  value) ;

constexpr void __cordl_internal_set_AttributeUpdateSucceeded(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  value) ;

constexpr void __cordl_internal_set_CreateLobbyFailed(::GlobalNamespace::EOSLobby_CreateLobbyFailure*  value) ;

constexpr void __cordl_internal_set_CreateLobbySucceeded(::GlobalNamespace::EOSLobby_CreateLobbySuccess*  value) ;

constexpr void __cordl_internal_set_FindLobbiesFailed(::GlobalNamespace::EOSLobby_FindLobbiesFailure*  value) ;

constexpr void __cordl_internal_set_FindLobbiesSucceeded(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  value) ;

constexpr void __cordl_internal_set_JoinLobbyFailed(::GlobalNamespace::EOSLobby_JoinLobbyFailure*  value) ;

constexpr void __cordl_internal_set_JoinLobbySucceeded(::GlobalNamespace::EOSLobby_JoinLobbySuccess*  value) ;

constexpr void __cordl_internal_set_LeaveLobbyFailed(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  value) ;

constexpr void __cordl_internal_set_LeaveLobbySucceeded(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  value) ;

constexpr void __cordl_internal_set_LobbyAttributeUpdated(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  value) ;

constexpr void __cordl_internal_set_LobbyMemberStatusUpdated(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  value) ;

constexpr void __cordl_internal_set__ConnectedLobbyDetails_k__BackingField(::Epic::OnlineServices::Lobby::LobbyDetails*  value) ;

constexpr void __cordl_internal_set__ConnectedToLobby_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentLobbyId(::StringW  value) ;

constexpr void __cordl_internal_set_foundLobbies(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  value) ;

constexpr void __cordl_internal_set_isLobbyOwner(bool  value) ;

constexpr void __cordl_internal_set_listOfBannedPlayers(::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>*  value) ;

constexpr void __cordl_internal_set_lobbyAttributeUpdateNotifyId(uint64_t  value) ;

constexpr void __cordl_internal_set_lobbyData(::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  value) ;

constexpr void __cordl_internal_set_lobbyMemberStatusNotifyId(uint64_t  value) ;

/// @brief Method .ctor, addr 0x181571d30, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AttributeUpdateFailed, addr 0x181571e00, size 0x90, virtual false, abstract: false, final false
inline void add_AttributeUpdateFailed(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  value) ;

/// @brief Method add_AttributeUpdateSucceeded, addr 0x181571e90, size 0x90, virtual false, abstract: false, final false
inline void add_AttributeUpdateSucceeded(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  value) ;

/// @brief Method add_CreateLobbyFailed, addr 0x181571f20, size 0x80, virtual false, abstract: false, final false
inline void add_CreateLobbyFailed(::GlobalNamespace::EOSLobby_CreateLobbyFailure*  value) ;

/// @brief Method add_CreateLobbySucceeded, addr 0x181571fa0, size 0x80, virtual false, abstract: false, final false
inline void add_CreateLobbySucceeded(::GlobalNamespace::EOSLobby_CreateLobbySuccess*  value) ;

/// @brief Method add_FindLobbiesFailed, addr 0x181572020, size 0x90, virtual false, abstract: false, final false
inline void add_FindLobbiesFailed(::GlobalNamespace::EOSLobby_FindLobbiesFailure*  value) ;

/// @brief Method add_FindLobbiesSucceeded, addr 0x1815720b0, size 0x80, virtual false, abstract: false, final false
inline void add_FindLobbiesSucceeded(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  value) ;

/// @brief Method add_JoinLobbyFailed, addr 0x181572130, size 0x80, virtual false, abstract: false, final false
inline void add_JoinLobbyFailed(::GlobalNamespace::EOSLobby_JoinLobbyFailure*  value) ;

/// @brief Method add_JoinLobbySucceeded, addr 0x1815721b0, size 0x80, virtual false, abstract: false, final false
inline void add_JoinLobbySucceeded(::GlobalNamespace::EOSLobby_JoinLobbySuccess*  value) ;

/// @brief Method add_LeaveLobbyFailed, addr 0x181572230, size 0x90, virtual false, abstract: false, final false
inline void add_LeaveLobbyFailed(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  value) ;

/// @brief Method add_LeaveLobbySucceeded, addr 0x1815722c0, size 0x90, virtual false, abstract: false, final false
inline void add_LeaveLobbySucceeded(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  value) ;

/// @brief Method add_LobbyAttributeUpdated, addr 0x181572350, size 0x90, virtual false, abstract: false, final false
inline void add_LobbyAttributeUpdated(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  value) ;

/// @brief Method add_LobbyMemberStatusUpdated, addr 0x1815723e0, size 0x90, virtual false, abstract: false, final false
inline void add_LobbyMemberStatusUpdated(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  value) ;

/// @brief Method get_ConnectedLobbyDetails, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::Epic::OnlineServices::Lobby::LobbyDetails* get_ConnectedLobbyDetails() ;

/// @brief Method get_ConnectedToLobby, addr 0x1803a7410, size 0x10, virtual false, abstract: false, final false
inline bool get_ConnectedToLobby() ;

/// @brief Method remove_AttributeUpdateFailed, addr 0x181572470, size 0x90, virtual false, abstract: false, final false
inline void remove_AttributeUpdateFailed(::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  value) ;

/// @brief Method remove_AttributeUpdateSucceeded, addr 0x181572500, size 0x90, virtual false, abstract: false, final false
inline void remove_AttributeUpdateSucceeded(::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  value) ;

/// @brief Method remove_CreateLobbyFailed, addr 0x181572590, size 0x80, virtual false, abstract: false, final false
inline void remove_CreateLobbyFailed(::GlobalNamespace::EOSLobby_CreateLobbyFailure*  value) ;

/// @brief Method remove_CreateLobbySucceeded, addr 0x181572610, size 0x80, virtual false, abstract: false, final false
inline void remove_CreateLobbySucceeded(::GlobalNamespace::EOSLobby_CreateLobbySuccess*  value) ;

/// @brief Method remove_FindLobbiesFailed, addr 0x181572690, size 0x90, virtual false, abstract: false, final false
inline void remove_FindLobbiesFailed(::GlobalNamespace::EOSLobby_FindLobbiesFailure*  value) ;

/// @brief Method remove_FindLobbiesSucceeded, addr 0x181572720, size 0x80, virtual false, abstract: false, final false
inline void remove_FindLobbiesSucceeded(::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  value) ;

/// @brief Method remove_JoinLobbyFailed, addr 0x1815727a0, size 0x80, virtual false, abstract: false, final false
inline void remove_JoinLobbyFailed(::GlobalNamespace::EOSLobby_JoinLobbyFailure*  value) ;

/// @brief Method remove_JoinLobbySucceeded, addr 0x181572820, size 0x80, virtual false, abstract: false, final false
inline void remove_JoinLobbySucceeded(::GlobalNamespace::EOSLobby_JoinLobbySuccess*  value) ;

/// @brief Method remove_LeaveLobbyFailed, addr 0x1815728a0, size 0x90, virtual false, abstract: false, final false
inline void remove_LeaveLobbyFailed(::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  value) ;

/// @brief Method remove_LeaveLobbySucceeded, addr 0x181572930, size 0x90, virtual false, abstract: false, final false
inline void remove_LeaveLobbySucceeded(::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  value) ;

/// @brief Method remove_LobbyAttributeUpdated, addr 0x1815729c0, size 0x90, virtual false, abstract: false, final false
inline void remove_LobbyAttributeUpdated(::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  value) ;

/// @brief Method remove_LobbyMemberStatusUpdated, addr 0x181572a50, size 0x90, virtual false, abstract: false, final false
inline void remove_LobbyMemberStatusUpdated(::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  value) ;

/// @brief Method set_ConnectedLobbyDetails, addr 0x1802d9850, size 0x10, virtual false, abstract: false, final false
inline void set_ConnectedLobbyDetails(::Epic::OnlineServices::Lobby::LobbyDetails*  value) ;

/// @brief Method set_ConnectedToLobby, addr 0x1803a7480, size 0x10, virtual false, abstract: false, final false
inline void set_ConnectedToLobby(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EOSLobby() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EOSLobby(EOSLobby && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EOSLobby", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EOSLobby(EOSLobby const& ) = delete;

/// @brief Field DefaultAttributeKey offset 0xffffffff size 0x8
static constexpr ::ConstString  DefaultAttributeKey{u"default"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19020};

/// @brief Field hostAddressKey offset 0xffffffff size 0x8
static constexpr ::ConstString  hostAddressKey{u"host_address"};

/// @brief Field <ConnectedToLobby>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____ConnectedToLobby_k__BackingField;

/// @brief Field <ConnectedLobbyDetails>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Epic::OnlineServices::Lobby::LobbyDetails*  ____ConnectedLobbyDetails_k__BackingField;

/// @brief Field currentLobbyId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___currentLobbyId;

/// @brief Field isLobbyOwner, offset: 0x38, size: 0x1, def value: None
 bool  ___isLobbyOwner;

/// @brief Field foundLobbies, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::LobbyDetails*>*  ___foundLobbies;

/// @brief Field lobbyData, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Epic::OnlineServices::Lobby::Attribute>*  ___lobbyData;

/// @brief Field listOfBannedPlayers, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Epic::OnlineServices::ProductUserId*>*  ___listOfBannedPlayers;

/// @brief Field CreateLobbySucceeded, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_CreateLobbySuccess*  ___CreateLobbySucceeded;

/// @brief Field CreateLobbyFailed, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_CreateLobbyFailure*  ___CreateLobbyFailed;

/// @brief Field JoinLobbySucceeded, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_JoinLobbySuccess*  ___JoinLobbySucceeded;

/// @brief Field JoinLobbyFailed, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_JoinLobbyFailure*  ___JoinLobbyFailed;

/// @brief Field FindLobbiesSucceeded, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_FindLobbiesSuccess*  ___FindLobbiesSucceeded;

/// @brief Field FindLobbiesFailed, offset: 0x80, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_FindLobbiesFailure*  ___FindLobbiesFailed;

/// @brief Field LeaveLobbySucceeded, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_LeaveLobbySuccess*  ___LeaveLobbySucceeded;

/// @brief Field LeaveLobbyFailed, offset: 0x90, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_LeaveLobbyFailure*  ___LeaveLobbyFailed;

/// @brief Field AttributeUpdateSucceeded, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_UpdateAttributeSuccess*  ___AttributeUpdateSucceeded;

/// @brief Field AttributeUpdateFailed, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_UpdateAttributeFailure*  ___AttributeUpdateFailed;

/// @brief Field lobbyMemberStatusNotifyId, offset: 0xa8, size: 0x8, def value: None
 uint64_t  ___lobbyMemberStatusNotifyId;

/// @brief Field lobbyAttributeUpdateNotifyId, offset: 0xb0, size: 0x8, def value: None
 uint64_t  ___lobbyAttributeUpdateNotifyId;

/// @brief Field LobbyMemberStatusUpdated, offset: 0xb8, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_LobbyMemberStatusUpdate*  ___LobbyMemberStatusUpdated;

/// @brief Field LobbyAttributeUpdated, offset: 0xc0, size: 0x8, def value: None
 ::GlobalNamespace::EOSLobby_LobbyAttributeUpdate*  ___LobbyAttributeUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EOSLobby, ____ConnectedToLobby_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ____ConnectedLobbyDetails_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___currentLobbyId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___isLobbyOwner) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___foundLobbies) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___lobbyData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___listOfBannedPlayers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___CreateLobbySucceeded) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___CreateLobbyFailed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___JoinLobbySucceeded) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___JoinLobbyFailed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___FindLobbiesSucceeded) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___FindLobbiesFailed) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___LeaveLobbySucceeded) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___LeaveLobbyFailed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___AttributeUpdateSucceeded) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___AttributeUpdateFailed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___lobbyMemberStatusNotifyId) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___lobbyAttributeUpdateNotifyId) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___LobbyMemberStatusUpdated) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EOSLobby, ___LobbyAttributeUpdated) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EOSLobby) == 0xc8, "Size mismatch!");

} // namespace end def GlobalNamespace

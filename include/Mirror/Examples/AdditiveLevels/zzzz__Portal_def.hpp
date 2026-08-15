#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/Portal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Portal)
namespace Mirror::Examples::AdditiveLevels {
class Portal__SendPlayerToNewScene_d__8;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class TextMesh;
}
// Forward declare root types
namespace Mirror::Examples::AdditiveLevels {
class Portal;
}
namespace Mirror::Examples::AdditiveLevels {
class Portal__SendPlayerToNewScene_d__8;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveLevels::Portal*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::Portal*, "Mirror.Examples.AdditiveLevels", "Portal");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8*, "Mirror.Examples.AdditiveLevels", "Portal/<SendPlayerToNewScene>d__8");
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.Portal/<SendPlayerToNewScene>d__8
class CORDL_TYPE Portal__SendPlayerToNewScene_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::Portal>  __4__this;

/// @brief Field <conn>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__conn_5__2, put=__cordl_internal_set__conn_5__2)) ::Mirror::NetworkConnectionToClient*  _conn_5__2;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::UnityEngine::GameObject>  player;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156c190, size 0x370, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::Portal> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::Portal>& __cordl_internal_get___4__this() ;

constexpr ::Mirror::NetworkConnectionToClient* const& __cordl_internal_get__conn_5__2() const;

constexpr ::Mirror::NetworkConnectionToClient*& __cordl_internal_get__conn_5__2() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_player() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::Portal>  value) ;

constexpr void __cordl_internal_set__conn_5__2(::Mirror::NetworkConnectionToClient*  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Portal__SendPlayerToNewScene_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Portal__SendPlayerToNewScene_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Portal__SendPlayerToNewScene_d__8(Portal__SendPlayerToNewScene_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Portal__SendPlayerToNewScene_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Portal__SendPlayerToNewScene_d__8(Portal__SendPlayerToNewScene_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19371};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___player;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::Portal>  _____4__this;

/// @brief Field <conn>5__2, offset: 0x30, size: 0x8, def value: None
 ::Mirror::NetworkConnectionToClient*  ____conn_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8, ____conn_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies Mirror.NetworkBehaviour, UnityEngine.Vector3
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.Portal
class CORDL_TYPE Portal : public ::Mirror::NetworkBehaviour {
public:
// Declarations
using _SendPlayerToNewScene_d__8 = ::Mirror::Examples::AdditiveLevels::Portal__SendPlayerToNewScene_d__8;

 __declspec(property(get=get_NetworklabelText, put=set_NetworklabelText)) ::StringW  NetworklabelText;

/// @brief Field destinationScene, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_destinationScene, put=__cordl_internal_set_destinationScene)) ::StringW  destinationScene;

/// @brief Field label, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_label, put=__cordl_internal_set_label)) ::UnityW<::UnityEngine::TextMesh>  label;

/// @brief Field labelText, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_labelText, put=__cordl_internal_set_labelText)) ::StringW  labelText;

/// @brief Field startPosition, offset 0x70, size 0xc 
 __declspec(property(get=__cordl_internal_get_startPosition, put=__cordl_internal_set_startPosition)) ::UnityEngine::Vector3  startPosition;

/// @brief Method DeserializeSyncVars, addr 0x18156ab60, size 0x140, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::Examples::AdditiveLevels::Portal* New_ctor() ;

/// @brief Method OnLabelTextChanged, addr 0x18156aca0, size 0x30, virtual false, abstract: false, final false
inline void OnLabelTextChanged(::StringW  _, ::StringW  newValue) ;

/// @brief Method OnStartClient, addr 0x18156acd0, size 0x50, virtual true, abstract: false, final false
inline void OnStartClient() ;

/// @brief Method OnStartServer, addr 0x18156ad20, size 0x90, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method OnTriggerEnter, addr 0x18156adb0, size 0x120, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method SendPlayerToNewScene, addr 0x18156aed0, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendPlayerToNewScene(::UnityEngine::GameObject*  player) ;

/// @brief Method SerializeSyncVars, addr 0x18156af70, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

constexpr ::StringW const& __cordl_internal_get_destinationScene() const;

constexpr ::StringW& __cordl_internal_get_destinationScene() ;

constexpr ::UnityW<::UnityEngine::TextMesh> const& __cordl_internal_get_label() const;

constexpr ::UnityW<::UnityEngine::TextMesh>& __cordl_internal_get_label() ;

constexpr ::StringW const& __cordl_internal_get_labelText() const;

constexpr ::StringW& __cordl_internal_get_labelText() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startPosition() ;

constexpr void __cordl_internal_set_destinationScene(::StringW  value) ;

constexpr void __cordl_internal_set_label(::UnityW<::UnityEngine::TextMesh>  value) ;

constexpr void __cordl_internal_set_labelText(::StringW  value) ;

constexpr void __cordl_internal_set_startPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworklabelText, addr 0x1802e5800, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_NetworklabelText() ;

/// @brief Method set_NetworklabelText, addr 0x18156afc0, size 0x120, virtual false, abstract: false, final false
inline void set_NetworklabelText(::ByRefConst<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Portal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Portal", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Portal(Portal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Portal", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Portal(Portal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19372};

/// @brief Field destinationScene, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___destinationScene;

/// @brief Field startPosition, offset: 0x70, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startPosition;

/// @brief Field label, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextMesh>  ___label;

/// @brief Field labelText, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___labelText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal, ___destinationScene) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal, ___startPosition) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal, ___label) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::Portal, ___labelText) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::Portal) == 0x90, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels

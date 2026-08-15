#pragma once
// IWYU pragma private; include "GoogleSheetsForUnity/DriveConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DriveConnection)
namespace GoogleSheetsForUnity {
class ConnectionData;
}
namespace GoogleSheetsForUnity {
class DriveConnection__CoExecuteRequest_d__2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace GoogleSheetsForUnity {
class DriveConnection;
}
namespace GoogleSheetsForUnity {
class DriveConnection__CoExecuteRequest_d__2;
}
// Write type traits
MARK_REF_T(::GoogleSheetsForUnity::DriveConnection*);
MARK_REF_T(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2*);
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::DriveConnection*, "GoogleSheetsForUnity", "DriveConnection");
DEFINE_IL2CPP_CLASS(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2*, "GoogleSheetsForUnity", "DriveConnection/<CoExecuteRequest>d__2");
// Dependencies System.Object
namespace GoogleSheetsForUnity {
// Is value type: false
// CS Name: GoogleSheetsForUnity.DriveConnection/<CoExecuteRequest>d__2
class CORDL_TYPE DriveConnection__CoExecuteRequest_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GoogleSheetsForUnity::DriveConnection>  __4__this;

/// @brief Field <elapsedTime>5__2, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__elapsedTime_5__2, put=__cordl_internal_set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

/// @brief Field www, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_www, put=__cordl_internal_set_www)) ::UnityEngine::Networking::UnityWebRequest*  www;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x1803d1380, size 0x1b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2* New_ctor(int32_t  __1__state) ;

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

constexpr ::UnityW<::GoogleSheetsForUnity::DriveConnection> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GoogleSheetsForUnity::DriveConnection>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__elapsedTime_5__2() const;

constexpr float_t& __cordl_internal_get__elapsedTime_5__2() ;

constexpr ::UnityEngine::Networking::UnityWebRequest* const& __cordl_internal_get_www() const;

constexpr ::UnityEngine::Networking::UnityWebRequest*& __cordl_internal_get_www() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GoogleSheetsForUnity::DriveConnection>  value) ;

constexpr void __cordl_internal_set__elapsedTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_www(::UnityEngine::Networking::UnityWebRequest*  value) ;

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
constexpr DriveConnection__CoExecuteRequest_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DriveConnection__CoExecuteRequest_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DriveConnection__CoExecuteRequest_d__2(DriveConnection__CoExecuteRequest_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DriveConnection__CoExecuteRequest_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DriveConnection__CoExecuteRequest_d__2(DriveConnection__CoExecuteRequest_d__2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5811};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field www, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequest*  ___www;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GoogleSheetsForUnity::DriveConnection>  _____4__this;

/// @brief Field <elapsedTime>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  ____elapsedTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2, ___www) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2, ____elapsedTime_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2) == 0x38, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity
// Dependencies UnityEngine.MonoBehaviour
namespace GoogleSheetsForUnity {
// Is value type: false
// CS Name: GoogleSheetsForUnity.DriveConnection
class CORDL_TYPE DriveConnection : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _CoExecuteRequest_d__2 = ::GoogleSheetsForUnity::DriveConnection__CoExecuteRequest_d__2;

/// @brief Field connectionData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionData, put=__cordl_internal_set_connectionData)) ::UnityW<::GoogleSheetsForUnity::ConnectionData>  connectionData;

/// @brief Method CoExecuteRequest, addr 0x1803c0ff0, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CoExecuteRequest(::UnityEngine::Networking::UnityWebRequest*  www, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  postData) ;

/// @brief Method ExecuteRequest, addr 0x1803c1050, size 0x70, virtual false, abstract: false, final false
inline void ExecuteRequest(::UnityEngine::Networking::UnityWebRequest*  www, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  postData) ;

static inline ::GoogleSheetsForUnity::DriveConnection* New_ctor() ;

constexpr ::UnityW<::GoogleSheetsForUnity::ConnectionData> const& __cordl_internal_get_connectionData() const;

constexpr ::UnityW<::GoogleSheetsForUnity::ConnectionData>& __cordl_internal_get_connectionData() ;

constexpr void __cordl_internal_set_connectionData(::UnityW<::GoogleSheetsForUnity::ConnectionData>  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DriveConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DriveConnection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DriveConnection(DriveConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DriveConnection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DriveConnection(DriveConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5812};

/// @brief Field connectionData, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GoogleSheetsForUnity::ConnectionData>  ___connectionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GoogleSheetsForUnity::DriveConnection, ___connectionData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GoogleSheetsForUnity::DriveConnection) == 0x28, "Size mismatch!");

} // namespace end def GoogleSheetsForUnity

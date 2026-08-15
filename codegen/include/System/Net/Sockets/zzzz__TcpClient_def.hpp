#pragma once
// IWYU pragma private; include "System/Net/Sockets/TcpClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/Sockets/zzzz__AddressFamily_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TcpClient)
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net::Sockets {
class NetworkStream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Sockets {
class TcpClient;
}
// Write type traits
MARK_REF_T(::System::Net::Sockets::TcpClient*);
DEFINE_IL2CPP_CLASS(::System::Net::Sockets::TcpClient*, "System.Net.Sockets", "TcpClient");
// Dependencies System.Net.Sockets.AddressFamily, System.Object
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.TcpClient
class CORDL_TYPE TcpClient : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Client, put=set_Client)) ::System::Net::Sockets::Socket*  Client;

 __declspec(property(get=get_Connected)) bool  Connected;

 __declspec(property(put=set_NoDelay)) bool  NoDelay;

 __declspec(property(put=set_ReceiveTimeout)) int32_t  ReceiveTimeout;

 __declspec(property(put=set_SendTimeout)) int32_t  SendTimeout;

/// @brief Field m_Active, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Active, put=__cordl_internal_set_m_Active)) bool  m_Active;

/// @brief Field m_CleanedUp, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_CleanedUp, put=__cordl_internal_set_m_CleanedUp)) bool  m_CleanedUp;

/// @brief Field m_ClientSocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ClientSocket, put=__cordl_internal_set_m_ClientSocket)) ::System::Net::Sockets::Socket*  m_ClientSocket;

/// @brief Field m_DataStream, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DataStream, put=__cordl_internal_set_m_DataStream)) ::System::Net::Sockets::NetworkStream*  m_DataStream;

/// @brief Field m_Family, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Family, put=__cordl_internal_set_m_Family)) ::System::Net::Sockets::AddressFamily  m_Family;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginConnect, addr 0x181da3810, size 0x1e0, virtual false, abstract: false, final false
inline ::System::IAsyncResult* BeginConnect(::StringW  host, int32_t  port, ::System::AsyncCallback*  requestCallback, ::System::Object*  state) ;

/// @brief Method Close, addr 0x181da39f0, size 0x30, virtual false, abstract: false, final false
inline void Close() ;

/// @brief Method Connect, addr 0x181da3bb0, size 0x590, virtual false, abstract: false, final false
inline void Connect(::StringW  hostname, int32_t  port) ;

/// @brief Method Connect, addr 0x181da3b00, size 0xb0, virtual false, abstract: false, final false
inline void Connect(::System::Net::IPEndPoint*  remoteEP) ;

/// @brief Method ConnectAsync, addr 0x181da3a20, size 0xe0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ConnectAsync(::StringW  host, int32_t  port) ;

/// @brief Method Dispose, addr 0x181da4140, size 0x20, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x181da4160, size 0x100, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndConnect, addr 0x181da4260, size 0x40, virtual false, abstract: false, final false
inline void EndConnect(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Finalize, addr 0x1815bcac0, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetStream, addr 0x181da42a0, size 0x100, virtual false, abstract: false, final false
inline ::System::Net::Sockets::NetworkStream* GetStream() ;

static inline ::System::Net::Sockets::TcpClient* New_ctor() ;

static inline ::System::Net::Sockets::TcpClient* New_ctor(::System::Net::Sockets::Socket*  acceptedSocket) ;

static inline ::System::Net::Sockets::TcpClient* New_ctor(::System::Net::Sockets::AddressFamily  family) ;

constexpr bool const& __cordl_internal_get_m_Active() const;

constexpr bool& __cordl_internal_get_m_Active() ;

constexpr bool const& __cordl_internal_get_m_CleanedUp() const;

constexpr bool& __cordl_internal_get_m_CleanedUp() ;

constexpr ::System::Net::Sockets::Socket* const& __cordl_internal_get_m_ClientSocket() const;

constexpr ::System::Net::Sockets::Socket*& __cordl_internal_get_m_ClientSocket() ;

constexpr ::System::Net::Sockets::NetworkStream* const& __cordl_internal_get_m_DataStream() const;

constexpr ::System::Net::Sockets::NetworkStream*& __cordl_internal_get_m_DataStream() ;

constexpr ::System::Net::Sockets::AddressFamily const& __cordl_internal_get_m_Family() const;

constexpr ::System::Net::Sockets::AddressFamily& __cordl_internal_get_m_Family() ;

constexpr void __cordl_internal_set_m_Active(bool  value) ;

constexpr void __cordl_internal_set_m_CleanedUp(bool  value) ;

constexpr void __cordl_internal_set_m_ClientSocket(::System::Net::Sockets::Socket*  value) ;

constexpr void __cordl_internal_set_m_DataStream(::System::Net::Sockets::NetworkStream*  value) ;

constexpr void __cordl_internal_set_m_Family(::System::Net::Sockets::AddressFamily  value) ;

/// @brief Method .ctor, addr 0x181da43a0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x181da4430, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::Socket*  acceptedSocket) ;

/// @brief Method .ctor, addr 0x181da4480, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Sockets::AddressFamily  family) ;

/// @brief Method get_Client, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Net::Sockets::Socket* get_Client() ;

/// @brief Method get_Connected, addr 0x181da4570, size 0x10, virtual false, abstract: false, final false
inline bool get_Connected() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method initialize, addr 0x181da4580, size 0x70, virtual false, abstract: false, final false
inline void initialize() ;

/// @brief Method set_Client, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Client(::System::Net::Sockets::Socket*  value) ;

/// @brief Method set_NoDelay, addr 0x181da45f0, size 0x30, virtual false, abstract: false, final false
inline void set_NoDelay(bool  value) ;

/// @brief Method set_ReceiveTimeout, addr 0x181da4620, size 0x30, virtual false, abstract: false, final false
inline void set_ReceiveTimeout(int32_t  value) ;

/// @brief Method set_SendTimeout, addr 0x181da4650, size 0x30, virtual false, abstract: false, final false
inline void set_SendTimeout(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TcpClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TcpClient(TcpClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TcpClient", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TcpClient(TcpClient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12109};

/// @brief Field m_ClientSocket, offset: 0x10, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  ___m_ClientSocket;

/// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
 bool  ___m_Active;

/// @brief Field m_DataStream, offset: 0x20, size: 0x8, def value: None
 ::System::Net::Sockets::NetworkStream*  ___m_DataStream;

/// @brief Field m_Family, offset: 0x28, size: 0x4, def value: None
 ::System::Net::Sockets::AddressFamily  ___m_Family;

/// @brief Field m_CleanedUp, offset: 0x2c, size: 0x1, def value: None
 bool  ___m_CleanedUp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_ClientSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_Active) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_DataStream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_Family) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::Sockets::TcpClient, ___m_CleanedUp) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::System::Net::Sockets::TcpClient) == 0x30, "Size mismatch!");

} // namespace end def System::Net::Sockets

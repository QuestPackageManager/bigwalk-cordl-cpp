#pragma once
// IWYU pragma private; include "Dissonance/Networking/PacketWriter.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Dissonance/Networking/zzzz__PacketWriter_def.hpp"
#include "Dissonance/Networking/Client/zzzz__OpenChannel_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_1_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.get_Written
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Networking::PacketWriter::*)()>(&::Dissonance::Networking::PacketWriter::get_Written)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e3960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"get_Written", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketWriter::*)(::ArrayW<uint8_t>)>(&::Dissonance::Networking::PacketWriter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e38f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketWriter::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Networking::PacketWriter::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {".ctor", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketWriter::*)(int32_t, ::StringW)>(&::Dissonance::Networking::PacketWriter::Check)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e3a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Check", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.FastWriteByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint8_t)>(&::Dissonance::Networking::PacketWriter::FastWriteByte)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e3b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"FastWriteByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint8_t)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805e5c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint16_t)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1805e55a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e5670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(::StringW)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x1805e5980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1805e5b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(::Dissonance::CodecSettings)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805e5d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(::StringW, uint16_t, ::Dissonance::CodecSettings)>(&::Dissonance::Networking::PacketWriter::Write)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1805e5800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteMagic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)()>(&::Dissonance::Networking::PacketWriter::WriteMagic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e4980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteMagic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteHandshakeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(::StringW, ::Dissonance::CodecSettings)>(&::Dissonance::Networking::PacketWriter::WriteHandshakeRequest)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1805e43f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteHandshakeRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteHandshakeResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, uint16_t)>(&::Dissonance::Networking::PacketWriter::WriteHandshakeResponse)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1805e46f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteHandshakeResponse", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteHandshakeP2P
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, uint16_t)>(&::Dissonance::Networking::PacketWriter::WriteHandshakeP2P)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e4260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteHandshakeP2P", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteClientState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, ::StringW, uint16_t, ::Dissonance::CodecSettings, ::Dissonance::Rooms*)>(&::Dissonance::Networking::PacketWriter::WriteClientState)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805e3e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteClientState", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>(), ::i2c::type_of<::Dissonance::Rooms*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteClientState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, ::StringW, uint16_t, ::Dissonance::CodecSettings, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*)>(&::Dissonance::Networking::PacketWriter::WriteClientState)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x1805e3b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteClientState", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteRemoveClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, uint16_t)>(&::Dissonance::Networking::PacketWriter::WriteRemoveClient)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e49e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteRemoveClient", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteVoiceData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, uint16_t, uint16_t, uint8_t, ::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*, ::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Networking::PacketWriter::WriteVoiceData)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x1805e4f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteVoiceData", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteTextPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, uint16_t, ::Dissonance::ChannelType, uint16_t, ::StringW)>(&::Dissonance::Networking::PacketWriter::WriteTextPacket)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x1805e4b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteTextPacket", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteErrorWrongSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t)>(&::Dissonance::Networking::PacketWriter::WriteErrorWrongSession)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1805e4150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteErrorWrongSession", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketWriter.WriteDeltaChannelState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::PacketWriter (::Dissonance::Networking::PacketWriter::*)(uint32_t, bool, uint16_t, ::StringW)>(&::Dissonance::Networking::PacketWriter::WriteDeltaChannelState)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1805e3f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteDeltaChannelState", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::PacketWriter::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::PacketWriter>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Networking::PacketWriter::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::PacketWriter>();
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Networking::PacketWriter::get_Written()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"get_Written", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Dissonance::Networking::PacketWriter::_ctor(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline void Dissonance::Networking::PacketWriter::_ctor(::System::ArraySegment_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {".ctor", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline void Dissonance::Networking::PacketWriter::Check(int32_t  count, ::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Check", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, type);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::FastWriteByte(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"FastWriteByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, b);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, b);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(uint16_t  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, u);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(uint32_t  u)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, u);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, s);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, data);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, codecSettings);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::Write(::StringW  playerName, uint16_t  playerId, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"Write", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, playerName, playerId, codecSettings);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteMagic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteMagic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteHandshakeRequest(::StringW  name, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteHandshakeRequest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, name, codecSettings);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteHandshakeResponse(uint32_t  session, uint16_t  clientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteHandshakeResponse", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, clientId);
}
template<typename TPeer>
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteHandshakeResponse(uint32_t  session, uint16_t  clientId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  clients, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>*  peersByRoom)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                    {"WriteHandshakeResponse", {::i2c::class_of<TPeer>()}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPeer>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, clientId, clients, peersByRoom);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteHandshakeP2P(uint32_t  session, uint16_t  peerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteHandshakeP2P", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, peerId);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteClientState(uint32_t  session, ::StringW  name, uint16_t  clientId, ::Dissonance::CodecSettings  codecSettings, ::Dissonance::Rooms*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteClientState", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>(), ::i2c::type_of<::Dissonance::Rooms*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, name, clientId, codecSettings, rooms);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteClientState(uint32_t  session, ::StringW  name, uint16_t  clientId, ::Dissonance::CodecSettings  codecSettings, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteClientState", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::CodecSettings>(), ::i2c::type_of<::System::Collections::ObjectModel::ReadOnlyCollection_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, name, clientId, codecSettings, rooms);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteRemoveClient(uint32_t  session, uint16_t  clientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteRemoveClient", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, clientId);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteVoiceData(uint32_t  session, uint16_t  senderId, uint16_t  sequenceNumber, uint8_t  channelSession, ::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*  channels, ::System::ArraySegment_1<uint8_t>  encodedAudio)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteVoiceData", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::Dissonance::Networking::Client::OpenChannel>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, senderId, sequenceNumber, channelSession, channels, encodedAudio);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteTextPacket(uint32_t  session, uint16_t  senderId, ::Dissonance::ChannelType  recipient, uint16_t  target, ::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteTextPacket", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, senderId, recipient, target, data);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteErrorWrongSession(uint32_t  session)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteErrorWrongSession", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session);
}
template<typename TPeer>
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteRelay(uint32_t  session, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  destinations, ::System::ArraySegment_1<uint8_t>  segment, bool  reliable)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                    {"WriteRelay", {::i2c::class_of<TPeer>()}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*>(), ::i2c::type_of<::System::ArraySegment_1<uint8_t>>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TPeer>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, destinations, segment, reliable);
}
inline ::Dissonance::Networking::PacketWriter Dissonance::Networking::PacketWriter::WriteDeltaChannelState(uint32_t  session, bool  joined, uint16_t  peer, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketWriter>(),
                        {"WriteDeltaChannelState", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::PacketWriter>(*this, ___internal_method, session, joined, peer, name);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::PacketWriter::PacketWriter(::System::ArraySegment_1<uint8_t>  _array, int32_t  _count) noexcept  {
this->_array = _array;
this->_count = _count;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::PacketWriter::PacketWriter()   {
}

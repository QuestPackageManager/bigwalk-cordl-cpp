#pragma once
// IWYU pragma private; include "Dissonance/Networking/PacketReader.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "Dissonance/Networking/zzzz__PacketReader_def.hpp"
#include "Dissonance/Networking/Client/zzzz__VoicePacketOptions_def.hpp"
#include "Dissonance/Networking/zzzz__ChannelBitField_def.hpp"
#include "Dissonance/Networking/zzzz__ClientInfo_def.hpp"
#include "Dissonance/Networking/zzzz__MessageTypes_def.hpp"
#include "Dissonance/Networking/zzzz__TextPacket_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.get_Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::get_Read)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e3960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"get_Read", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.get_Unread
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::get_Unread)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e39c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"get_Unread", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.get_All
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::get_All)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f6880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"get_All", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::System::ArraySegment_1<uint8_t>)>(&::Dissonance::Networking::PacketReader::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e3890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {".ctor", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::ArrayW<uint8_t>)>(&::Dissonance::Networking::PacketReader::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1805e38f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(int32_t, ::StringW)>(&::Dissonance::Networking::PacketReader::Check)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e1f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"Check", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.FastReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::FastReadByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805e1fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"FastReadByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805e2110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadByte", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadUInt16)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805e34a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadUInt16", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadUInt32)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1805e3520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadUInt32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadByteSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ArraySegment_1<uint8_t> (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadByteSegment)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805e1fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadByteSegment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadString)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e3180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadCodecSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::CodecSettings (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadCodecSettings)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e24c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadCodecSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadClientInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::ClientInfo (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadClientInfo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e2170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadClientInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadPacketHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Dissonance::Networking::PacketReader::*)(::by_ref<::Dissonance::Networking::MessageTypes>)>(&::Dissonance::Networking::PacketReader::ReadPacketHeader)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e2e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadPacketHeader", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::MessageTypes>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadHandshakeRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<::StringW>, ::by_ref<::Dissonance::CodecSettings>)>(&::Dissonance::Networking::PacketReader::ReadHandshakeRequest)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1805e2720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadHandshakeRequest", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Dissonance::CodecSettings>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadHandshakeResponseHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<uint32_t>, ::by_ref<uint16_t>)>(&::Dissonance::Networking::PacketReader::ReadHandshakeResponseHeader)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1805e2d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadHandshakeResponseHeader", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadHandshakeResponseBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<uint16_t>*>*)>(&::Dissonance::Networking::PacketReader::ReadHandshakeResponseBody)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x1805e2810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadHandshakeResponseBody", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<uint16_t>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadhandshakeP2P
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<uint16_t>)>(&::Dissonance::Networking::PacketReader::ReadhandshakeP2P)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadhandshakeP2P", {}, {::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadClientStateHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::ClientInfo (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadClientStateHeader)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e2300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadClientStateHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadClientStateRooms
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Dissonance::Networking::PacketReader::ReadClientStateRooms)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805e23e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadClientStateRooms", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadRemoveClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<uint16_t>)>(&::Dissonance::Networking::PacketReader::ReadRemoveClient)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadRemoveClient", {}, {::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadVoicePacketHeader1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<uint16_t>)>(&::Dissonance::Networking::PacketReader::ReadVoicePacketHeader1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadVoicePacketHeader1", {}, {::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadVoicePacketHeader2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<::Dissonance::Networking::Client::VoicePacketOptions>, ::by_ref<uint16_t>, ::by_ref<uint16_t>)>(&::Dissonance::Networking::PacketReader::ReadVoicePacketHeader2)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805e36e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadVoicePacketHeader2", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::Client::VoicePacketOptions>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadVoicePacketChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<::Dissonance::Networking::ChannelBitField>, ::by_ref<uint16_t>)>(&::Dissonance::Networking::PacketReader::ReadVoicePacketChannel)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x1805e35e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadVoicePacketChannel", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::ChannelBitField>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadTextPacket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Dissonance::Networking::TextPacket (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadTextPacket)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1805e3310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadTextPacket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadErrorWrongSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Dissonance::Networking::PacketReader::*)()>(&::Dissonance::Networking::PacketReader::ReadErrorWrongSession)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805e2700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadErrorWrongSession", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadRelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::System::Collections::Generic::List_1<uint16_t>*, ::by_ref<::System::ArraySegment_1<uint8_t>>)>(&::Dissonance::Networking::PacketReader::ReadRelay)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1805e2ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadRelay", {}, {::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Dissonance::Networking::PacketReader.ReadDeltaChannelState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Dissonance::Networking::PacketReader::*)(::by_ref<bool>, ::by_ref<uint16_t>, ::by_ref<::StringW>)>(&::Dissonance::Networking::PacketReader::ReadDeltaChannelState)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x1805e25a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadDeltaChannelState", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Dissonance::Networking::PacketReader::setStaticF_Log(::Dissonance::Log*  value)  {
::cordl_internals::setStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::PacketReader>(std::forward<::Dissonance::Log*>(value));
}
inline ::Dissonance::Log* Dissonance::Networking::PacketReader::getStaticF_Log()  {
return ::cordl_internals::getStaticField<::Dissonance::Log*, "Log", ::Dissonance::Networking::PacketReader>();
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Networking::PacketReader::get_Read()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"get_Read", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Networking::PacketReader::get_Unread()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"get_Unread", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Networking::PacketReader::get_All()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"get_All", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline void Dissonance::Networking::PacketReader::_ctor(::System::ArraySegment_1<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {".ctor", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline void Dissonance::Networking::PacketReader::_ctor(::ArrayW<uint8_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
inline void Dissonance::Networking::PacketReader::Check(int32_t  count, ::StringW  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"Check", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, count, type);
}
inline uint8_t Dissonance::Networking::PacketReader::FastReadByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"FastReadByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint8_t Dissonance::Networking::PacketReader::ReadByte()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadByte", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline uint16_t Dissonance::Networking::PacketReader::ReadUInt16()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadUInt16", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint32_t Dissonance::Networking::PacketReader::ReadUInt32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadUInt32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::System::ArraySegment_1<uint8_t> Dissonance::Networking::PacketReader::ReadByteSegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadByteSegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<uint8_t>>(*this, ___internal_method);
}
inline ::StringW Dissonance::Networking::PacketReader::ReadString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::Dissonance::CodecSettings Dissonance::Networking::PacketReader::ReadCodecSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadCodecSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(*this, ___internal_method);
}
inline ::Dissonance::Networking::ClientInfo Dissonance::Networking::PacketReader::ReadClientInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadClientInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ClientInfo>(*this, ___internal_method);
}
inline bool Dissonance::Networking::PacketReader::ReadPacketHeader(::by_ref<::Dissonance::Networking::MessageTypes>  messageType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadPacketHeader", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::MessageTypes>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, messageType);
}
inline void Dissonance::Networking::PacketReader::ReadHandshakeRequest(::by_ref<::StringW>  name, ::by_ref<::Dissonance::CodecSettings>  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadHandshakeRequest", {}, {::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::Dissonance::CodecSettings>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, codecSettings);
}
inline void Dissonance::Networking::PacketReader::ReadHandshakeResponseHeader(::by_ref<uint32_t>  session, ::by_ref<uint16_t>  clientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadHandshakeResponseHeader", {}, {::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, session, clientId);
}
inline void Dissonance::Networking::PacketReader::ReadHandshakeResponseBody(::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*  clients, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<uint16_t>*>*  outputRoomsToPeerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadHandshakeResponseBody", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<uint16_t>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clients, outputRoomsToPeerId);
}
inline void Dissonance::Networking::PacketReader::ReadhandshakeP2P(::by_ref<uint16_t>  peerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadhandshakeP2P", {}, {::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, peerId);
}
inline ::Dissonance::Networking::ClientInfo Dissonance::Networking::PacketReader::ReadClientStateHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadClientStateHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ClientInfo>(*this, ___internal_method);
}
inline void Dissonance::Networking::PacketReader::ReadClientStateRooms(::System::Collections::Generic::List_1<::StringW>*  rooms)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadClientStateRooms", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rooms);
}
inline void Dissonance::Networking::PacketReader::ReadRemoveClient(::by_ref<uint16_t>  clientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadRemoveClient", {}, {::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, clientId);
}
inline void Dissonance::Networking::PacketReader::ReadVoicePacketHeader1(::by_ref<uint16_t>  senderId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadVoicePacketHeader1", {}, {::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, senderId);
}
inline void Dissonance::Networking::PacketReader::ReadVoicePacketHeader2(::by_ref<::Dissonance::Networking::Client::VoicePacketOptions>  options, ::by_ref<uint16_t>  sequenceNumber, ::by_ref<uint16_t>  numChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadVoicePacketHeader2", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::Client::VoicePacketOptions>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, options, sequenceNumber, numChannels);
}
inline void Dissonance::Networking::PacketReader::ReadVoicePacketChannel(::by_ref<::Dissonance::Networking::ChannelBitField>  bitfield, ::by_ref<uint16_t>  recipient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadVoicePacketChannel", {}, {::i2c::type_of<::by_ref<::Dissonance::Networking::ChannelBitField>>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bitfield, recipient);
}
inline ::Dissonance::Networking::TextPacket Dissonance::Networking::PacketReader::ReadTextPacket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadTextPacket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::TextPacket>(*this, ___internal_method);
}
inline uint32_t Dissonance::Networking::PacketReader::ReadErrorWrongSession()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadErrorWrongSession", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void Dissonance::Networking::PacketReader::ReadRelay(::System::Collections::Generic::List_1<uint16_t>*  destinations, ::by_ref<::System::ArraySegment_1<uint8_t>>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadRelay", {}, {::i2c::type_of<::System::Collections::Generic::List_1<uint16_t>*>(), ::i2c::type_of<::by_ref<::System::ArraySegment_1<uint8_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destinations, data);
}
inline void Dissonance::Networking::PacketReader::ReadDeltaChannelState(::by_ref<bool>  joined, ::by_ref<uint16_t>  peer, ::by_ref<::StringW>  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::PacketReader>(),
                        {"ReadDeltaChannelState", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, joined, peer, name);
}
// Ctor Parameters [CppParam { name: "_array", ty: "::System::ArraySegment_1<uint8_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Dissonance::Networking::PacketReader::PacketReader(::System::ArraySegment_1<uint8_t>  _array, int32_t  _count) noexcept  {
this->_array = _array;
this->_count = _count;
}
// Ctor Parameters []
constexpr ::Dissonance::Networking::PacketReader::PacketReader()   {
}

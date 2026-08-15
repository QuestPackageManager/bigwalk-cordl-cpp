#pragma once
// IWYU pragma private; include "kcp2k/Kcp.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "kcp2k/zzzz__Kcp_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "kcp2k/zzzz__AckItem_def.hpp"
#include "kcp2k/zzzz__Kcp_def.hpp"
#include "kcp2k/zzzz__Pool_1_def.hpp"
#include "kcp2k/zzzz__Segment_def.hpp"
//  Writing Method size for method: ::kcp2k::Kcp___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp___c::*)()>(&::kcp2k::Kcp___c::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp___c.__ctor_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::kcp2k::Segment* (::kcp2k::Kcp___c::*)()>(&::kcp2k::Kcp___c::__ctor_b__61_0)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814530f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp___c*>(),
                        {"<.ctor>b__61_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp___c.__ctor_b__61_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp___c::*)(::kcp2k::Segment*)>(&::kcp2k::Kcp___c::__ctor_b__61_1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181453150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp___c*>(),
                        {"<.ctor>b__61_1", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
    return ___internal_method;
  }
};
inline void kcp2k::Kcp___c::setStaticF___9(::kcp2k::Kcp___c*  value)  {
::cordl_internals::setStaticField<::kcp2k::Kcp___c*, "<>9", ::kcp2k::Kcp___c*>(std::forward<::kcp2k::Kcp___c*>(value));
}
inline ::kcp2k::Kcp___c* kcp2k::Kcp___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::kcp2k::Kcp___c*, "<>9", ::kcp2k::Kcp___c*>();
}
inline void kcp2k::Kcp___c::setStaticF___9__61_0(::System::Func_1<::kcp2k::Segment*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::kcp2k::Segment*>*, "<>9__61_0", ::kcp2k::Kcp___c*>(std::forward<::System::Func_1<::kcp2k::Segment*>*>(value));
}
inline ::System::Func_1<::kcp2k::Segment*>* kcp2k::Kcp___c::getStaticF___9__61_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::kcp2k::Segment*>*, "<>9__61_0", ::kcp2k::Kcp___c*>();
}
inline void kcp2k::Kcp___c::setStaticF___9__61_1(::System::Action_1<::kcp2k::Segment*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::kcp2k::Segment*>*, "<>9__61_1", ::kcp2k::Kcp___c*>(std::forward<::System::Action_1<::kcp2k::Segment*>*>(value));
}
inline ::System::Action_1<::kcp2k::Segment*>* kcp2k::Kcp___c::getStaticF___9__61_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::kcp2k::Segment*>*, "<>9__61_1", ::kcp2k::Kcp___c*>();
}
inline void kcp2k::Kcp___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::kcp2k::Segment* kcp2k::Kcp___c::__ctor_b__61_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp___c*>(),
                        {"<.ctor>b__61_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::kcp2k::Segment*>(this, ___internal_method);
}
inline void kcp2k::Kcp___c::__ctor_b__61_1(::kcp2k::Segment*  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp___c*>(),
                        {"<.ctor>b__61_1", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, segment);
}
inline ::kcp2k::Kcp___c* kcp2k::Kcp___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::Kcp___c*>());
}
// Ctor Parameters []
constexpr ::kcp2k::Kcp___c::Kcp___c()   {
}
//  Writing Method size for method: ::kcp2k::Kcp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t, ::System::Action_2<::ArrayW<uint8_t>,int32_t>*)>(&::kcp2k::Kcp::_ctor)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181452a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.SegmentNew
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::kcp2k::Segment* (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::SegmentNew)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814525e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SegmentNew", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.SegmentDelete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(::kcp2k::Segment*)>(&::kcp2k::Kcp::SegmentDelete)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814525b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SegmentDelete", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.get_WaitSnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::get_WaitSnd)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181452db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"get_WaitSnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.WndUnused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::WndUnused)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181452a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"WndUnused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.Receive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::Kcp::*)(::ArrayW<uint8_t>, int32_t)>(&::kcp2k::Kcp::Receive)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x1814522b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Receive", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.PeekSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::PeekSize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181452100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"PeekSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.Send
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::Kcp::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::kcp2k::Kcp::Send)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181452610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.UpdateAck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(int32_t)>(&::kcp2k::Kcp::UpdateAck)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181452950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"UpdateAck", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.ShrinkBuf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::ShrinkBuf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181452900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ShrinkBuf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.ParseAck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t)>(&::kcp2k::Kcp::ParseAck)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181451d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseAck", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.ParseUna
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t)>(&::kcp2k::Kcp::ParseUna)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181452020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseUna", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.ParseFastack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t, uint32_t)>(&::kcp2k::Kcp::ParseFastack)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181451f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseFastack", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.AckPush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t, uint32_t)>(&::kcp2k::Kcp::AckPush)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181450ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"AckPush", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.ParseData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(::kcp2k::Segment*)>(&::kcp2k::Kcp::ParseData)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181451db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseData", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.InsertSegmentInReceiveBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(::kcp2k::Segment*)>(&::kcp2k::Kcp::InsertSegmentInReceiveBuffer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181451b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"InsertSegmentInReceiveBuffer", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.MoveReceiveBufferReadySegmentsToQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::MoveReceiveBufferReadySegmentsToQueue)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181451c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"MoveReceiveBufferReadySegmentsToQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.Input
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::kcp2k::Kcp::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::kcp2k::Kcp::Input)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x1814513d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Input", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.MakeSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(::by_ref<int32_t>, int32_t)>(&::kcp2k::Kcp::MakeSpace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181451bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"MakeSpace", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.FlushBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(int32_t)>(&::kcp2k::Kcp::FlushBuffer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181450c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"FlushBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)()>(&::kcp2k::Kcp::Flush)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x181450ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Flush", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t)>(&::kcp2k::Kcp::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814529f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Update", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::kcp2k::Kcp::*)(uint32_t)>(&::kcp2k::Kcp::Check)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x181450b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Check", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.SetMtu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t)>(&::kcp2k::Kcp::SetMtu)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181452820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetMtu", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.SetInterval
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t)>(&::kcp2k::Kcp::SetInterval)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814527f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetInterval", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.SetNoDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t, uint32_t, int32_t, bool)>(&::kcp2k::Kcp::SetNoDelay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181452890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetNoDelay", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::kcp2k::Kcp.SetWindowSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::kcp2k::Kcp::*)(uint32_t, uint32_t)>(&::kcp2k::Kcp::SetWindowSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814528e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetWindowSize", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_conv()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conv;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_conv() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___conv;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_conv(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___conv = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_mtu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mtu;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_mtu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mtu;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_mtu(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mtu = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_mss()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mss;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_mss() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mss;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_mss(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mss = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_snd_una()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_una;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_snd_una() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_una;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_snd_una(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snd_una = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_snd_nxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_nxt;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_snd_nxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_nxt;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_snd_nxt(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snd_nxt = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_rcv_nxt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_nxt;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_rcv_nxt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_nxt;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rcv_nxt(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcv_nxt = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_ssthresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssthresh;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_ssthresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ssthresh;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_ssthresh(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ssthresh = value;
}
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_rx_rttval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_rttval;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_rx_rttval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_rttval;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rx_rttval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rx_rttval = value;
}
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_rx_srtt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_srtt;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_rx_srtt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_srtt;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rx_srtt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rx_srtt = value;
}
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_rx_rto()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_rto;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_rx_rto() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_rto;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rx_rto(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rx_rto = value;
}
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_rx_minrto()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_minrto;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_rx_minrto() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rx_minrto;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rx_minrto(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rx_minrto = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_snd_wnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_wnd;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_snd_wnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_wnd;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_snd_wnd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snd_wnd = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_rcv_wnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_wnd;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_rcv_wnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_wnd;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rcv_wnd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcv_wnd = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_rmt_wnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rmt_wnd;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_rmt_wnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rmt_wnd;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rmt_wnd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rmt_wnd = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_cwnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cwnd;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_cwnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cwnd;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_cwnd(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cwnd = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_probe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probe;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_probe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probe;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_probe(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probe = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interval;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_interval(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interval = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_ts_flush()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts_flush;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_ts_flush() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts_flush;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_ts_flush(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ts_flush = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_xmit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xmit;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_xmit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xmit;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_xmit(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xmit = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_nodelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodelay;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_nodelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodelay;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_nodelay(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodelay = value;
}
constexpr bool& kcp2k::Kcp::__cordl_internal_get_updated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updated;
}
constexpr bool const& kcp2k::Kcp::__cordl_internal_get_updated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updated;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_updated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updated = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_ts_probe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts_probe;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_ts_probe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ts_probe;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_ts_probe(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ts_probe = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_probe_wait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probe_wait;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_probe_wait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probe_wait;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_probe_wait(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probe_wait = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_dead_link()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dead_link;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_dead_link() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dead_link;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_dead_link(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dead_link = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_incr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incr;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_incr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___incr;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_incr(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___incr = value;
}
constexpr uint32_t& kcp2k::Kcp::__cordl_internal_get_current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr uint32_t const& kcp2k::Kcp::__cordl_internal_get_current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_current(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current = value;
}
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_fastresend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastresend;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_fastresend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastresend;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_fastresend(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastresend = value;
}
constexpr int32_t& kcp2k::Kcp::__cordl_internal_get_fastlimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastlimit;
}
constexpr int32_t const& kcp2k::Kcp::__cordl_internal_get_fastlimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fastlimit;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_fastlimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fastlimit = value;
}
constexpr bool& kcp2k::Kcp::__cordl_internal_get_nocwnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nocwnd;
}
constexpr bool const& kcp2k::Kcp::__cordl_internal_get_nocwnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nocwnd;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_nocwnd(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nocwnd = value;
}
constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*& kcp2k::Kcp::__cordl_internal_get_snd_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_queue;
}
constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>* const& kcp2k::Kcp::__cordl_internal_get_snd_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_queue;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_snd_queue(::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snd_queue = value;
}
constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*& kcp2k::Kcp::__cordl_internal_get_rcv_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_queue;
}
constexpr ::System::Collections::Generic::Queue_1<::kcp2k::Segment*>* const& kcp2k::Kcp::__cordl_internal_get_rcv_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_queue;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rcv_queue(::System::Collections::Generic::Queue_1<::kcp2k::Segment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcv_queue = value;
}
constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>*& kcp2k::Kcp::__cordl_internal_get_snd_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_buf;
}
constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>* const& kcp2k::Kcp::__cordl_internal_get_snd_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snd_buf;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_snd_buf(::System::Collections::Generic::List_1<::kcp2k::Segment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snd_buf = value;
}
constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>*& kcp2k::Kcp::__cordl_internal_get_rcv_buf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_buf;
}
constexpr ::System::Collections::Generic::List_1<::kcp2k::Segment*>* const& kcp2k::Kcp::__cordl_internal_get_rcv_buf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcv_buf;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_rcv_buf(::System::Collections::Generic::List_1<::kcp2k::Segment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcv_buf = value;
}
constexpr ::System::Collections::Generic::List_1<::kcp2k::AckItem>*& kcp2k::Kcp::__cordl_internal_get_acklist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acklist;
}
constexpr ::System::Collections::Generic::List_1<::kcp2k::AckItem>* const& kcp2k::Kcp::__cordl_internal_get_acklist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acklist;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_acklist(::System::Collections::Generic::List_1<::kcp2k::AckItem>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acklist = value;
}
constexpr ::ArrayW<uint8_t>& kcp2k::Kcp::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<uint8_t> const& kcp2k::Kcp::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_buffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>*& kcp2k::Kcp::__cordl_internal_get_output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr ::System::Action_2<::ArrayW<uint8_t>,int32_t>* const& kcp2k::Kcp::__cordl_internal_get_output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___output;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_output(::System::Action_2<::ArrayW<uint8_t>,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___output = value;
}
constexpr ::kcp2k::Pool_1<::kcp2k::Segment*>*& kcp2k::Kcp::__cordl_internal_get_SegmentPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SegmentPool;
}
constexpr ::kcp2k::Pool_1<::kcp2k::Segment*>* const& kcp2k::Kcp::__cordl_internal_get_SegmentPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SegmentPool;
}
constexpr void kcp2k::Kcp::__cordl_internal_set_SegmentPool(::kcp2k::Pool_1<::kcp2k::Segment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SegmentPool = value;
}
inline void kcp2k::Kcp::_ctor(uint32_t  conv, ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Action_2<::ArrayW<uint8_t>,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conv, output);
}
inline ::kcp2k::Segment* kcp2k::Kcp::SegmentNew()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SegmentNew", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::kcp2k::Segment*>(this, ___internal_method);
}
inline void kcp2k::Kcp::SegmentDelete(::kcp2k::Segment*  seg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SegmentDelete", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seg);
}
inline int32_t kcp2k::Kcp::get_WaitSnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"get_WaitSnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint32_t kcp2k::Kcp::WndUnused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"WndUnused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline int32_t kcp2k::Kcp::Receive(::ArrayW<uint8_t>  buffer, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Receive", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, len);
}
inline int32_t kcp2k::Kcp::PeekSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"PeekSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t kcp2k::Kcp::Send(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Send", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, len);
}
inline void kcp2k::Kcp::UpdateAck(int32_t  rtt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"UpdateAck", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rtt);
}
inline void kcp2k::Kcp::ShrinkBuf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ShrinkBuf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::Kcp::ParseAck(uint32_t  sn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseAck", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sn);
}
inline void kcp2k::Kcp::ParseUna(uint32_t  una)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseUna", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, una);
}
inline void kcp2k::Kcp::ParseFastack(uint32_t  sn, uint32_t  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseFastack", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sn, ts);
}
inline void kcp2k::Kcp::AckPush(uint32_t  sn, uint32_t  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"AckPush", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sn, ts);
}
inline void kcp2k::Kcp::ParseData(::kcp2k::Segment*  newseg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"ParseData", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newseg);
}
inline void kcp2k::Kcp::InsertSegmentInReceiveBuffer(::kcp2k::Segment*  newseg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"InsertSegmentInReceiveBuffer", {}, {::i2c::type_of<::kcp2k::Segment*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newseg);
}
inline void kcp2k::Kcp::MoveReceiveBufferReadySegmentsToQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"MoveReceiveBufferReadySegmentsToQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t kcp2k::Kcp::Input(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Input", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, data, offset, size);
}
inline void kcp2k::Kcp::MakeSpace(::by_ref<int32_t>  size, int32_t  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"MakeSpace", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, space);
}
inline void kcp2k::Kcp::FlushBuffer(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"FlushBuffer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void kcp2k::Kcp::Flush()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Flush", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void kcp2k::Kcp::Update(uint32_t  currentTimeMilliSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Update", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTimeMilliSeconds);
}
inline uint32_t kcp2k::Kcp::Check(uint32_t  current_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"Check", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, current_);
}
inline void kcp2k::Kcp::SetMtu(uint32_t  mtu)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetMtu", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mtu);
}
inline void kcp2k::Kcp::SetInterval(uint32_t  interval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetInterval", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interval);
}
inline void kcp2k::Kcp::SetNoDelay(uint32_t  nodelay, uint32_t  interval, int32_t  resend, bool  nocwnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetNoDelay", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodelay, interval, resend, nocwnd);
}
inline void kcp2k::Kcp::SetWindowSize(uint32_t  sendWindow, uint32_t  receiveWindow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::kcp2k::Kcp*>(),
                        {"SetWindowSize", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sendWindow, receiveWindow);
}
inline ::kcp2k::Kcp* kcp2k::Kcp::New_ctor(uint32_t  conv, ::System::Action_2<::ArrayW<uint8_t>,int32_t>*  output)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::kcp2k::Kcp*>(conv, output));
}
// Ctor Parameters []
constexpr ::kcp2k::Kcp::Kcp()   {
}

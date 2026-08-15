#pragma once
// IWYU pragma private; include "NAudio/Wave/WaveFileWriter.hpp"
#include "System/IO/zzzz__Stream_impl.hpp"
#include "NAudio/Wave/zzzz__WaveFileWriter_def.hpp"
#include "NAudio/Wave/zzzz__WaveFormat_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/IO/zzzz__SeekOrigin_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::System::IO::Stream*, ::NAudio::Wave::WaveFormat*)>(&::NAudio::Wave::WaveFileWriter::_ctor)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x1805d5820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::StringW, ::NAudio::Wave::WaveFormat*)>(&::NAudio::Wave::WaveFileWriter::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d5790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.WriteDataChunkHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::WriteDataChunkHeader)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d55c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"WriteDataChunkHeader", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.CreateFactChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::CreateFactChunk)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1805d50f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"CreateFactChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.HasFactChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::HasFactChunk)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"HasFactChunk", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_Filename)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"get_Filename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.set_Filename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::StringW)>(&::NAudio::Wave::WaveFileWriter::set_Filename)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180308de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"set_Filename", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_Length)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d5c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::NAudio::Wave::WaveFormat* (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e75e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.set_WaveFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::NAudio::Wave::WaveFormat*)>(&::NAudio::Wave::WaveFileWriter::set_WaveFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f8080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"set_WaveFormat", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_CanRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_CanRead)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_CanWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_CanWrite)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_CanSeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_CanSeek)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::NAudio::Wave::WaveFileWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::NAudio::Wave::WaveFileWriter::Read)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d52d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.Seek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::NAudio::Wave::WaveFileWriter::*)(int64_t, ::System::IO::SeekOrigin)>(&::NAudio::Wave::WaveFileWriter::Seek)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d52f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.SetLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(int64_t)>(&::NAudio::Wave::WaveFileWriter::SetLength)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d5310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::get_Position)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1805d5c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(int64_t)>(&::NAudio::Wave::WaveFileWriter::set_Position)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d5c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::NAudio::Wave::WaveFileWriter::Write)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1805d5740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.WriteSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(float_t)>(&::NAudio::Wave::WaveFileWriter::WriteSample)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1805d5670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"WriteSample", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.WriteSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::ArrayW<float_t>, int32_t, int32_t)>(&::NAudio::Wave::WaveFileWriter::WriteSamples)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1805d56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"WriteSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::Flush)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1805d52a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(bool)>(&::NAudio::Wave::WaveFileWriter::Dispose)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1805d51d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.UpdateHeader
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::System::IO::BinaryWriter*)>(&::NAudio::Wave::WaveFileWriter::UpdateHeader)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1805d5410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.UpdateDataChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::System::IO::BinaryWriter*)>(&::NAudio::Wave::WaveFileWriter::UpdateDataChunk)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1805d5330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"UpdateDataChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.UpdateRiffChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::System::IO::BinaryWriter*)>(&::NAudio::Wave::WaveFileWriter::UpdateRiffChunk)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d5540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"UpdateRiffChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.UpdateFactChunk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)(::System::IO::BinaryWriter*)>(&::NAudio::Wave::WaveFileWriter::UpdateFactChunk)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1805d5390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"UpdateFactChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::NAudio::Wave::WaveFileWriter.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::NAudio::Wave::WaveFileWriter::*)()>(&::NAudio::Wave::WaveFileWriter::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1805d5280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                    {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 1}
                ));
    return ___internal_method;
  }
};
constexpr ::System::IO::Stream*& NAudio::Wave::WaveFileWriter::__cordl_internal_get__outStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outStream;
}
constexpr ::System::IO::Stream* const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__outStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outStream;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__outStream(::System::IO::Stream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outStream = value;
}
constexpr ::System::IO::BinaryWriter*& NAudio::Wave::WaveFileWriter::__cordl_internal_get__writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr ::System::IO::BinaryWriter* const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____writer;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__writer(::System::IO::BinaryWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____writer = value;
}
constexpr int64_t& NAudio::Wave::WaveFileWriter::__cordl_internal_get__dataSizePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSizePos;
}
constexpr int64_t const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__dataSizePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataSizePos;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__dataSizePos(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataSizePos = value;
}
constexpr int64_t& NAudio::Wave::WaveFileWriter::__cordl_internal_get__factSampleCountPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factSampleCountPos;
}
constexpr int64_t const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__factSampleCountPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____factSampleCountPos;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__factSampleCountPos(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____factSampleCountPos = value;
}
constexpr int32_t& NAudio::Wave::WaveFileWriter::__cordl_internal_get__dataChunkSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataChunkSize;
}
constexpr int32_t const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__dataChunkSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataChunkSize;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__dataChunkSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataChunkSize = value;
}
constexpr ::StringW& NAudio::Wave::WaveFileWriter::__cordl_internal_get__Filename_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Filename_k__BackingField;
}
constexpr ::StringW const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__Filename_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Filename_k__BackingField;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__Filename_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Filename_k__BackingField = value;
}
constexpr ::NAudio::Wave::WaveFormat*& NAudio::Wave::WaveFileWriter::__cordl_internal_get__WaveFormat_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveFormat_k__BackingField;
}
constexpr ::NAudio::Wave::WaveFormat* const& NAudio::Wave::WaveFileWriter::__cordl_internal_get__WaveFormat_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaveFormat_k__BackingField;
}
constexpr void NAudio::Wave::WaveFileWriter::__cordl_internal_set__WaveFormat_k__BackingField(::NAudio::Wave::WaveFormat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaveFormat_k__BackingField = value;
}
inline void NAudio::Wave::WaveFileWriter::_ctor(::System::IO::Stream*  outStream, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::Stream*>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outStream, format);
}
inline void NAudio::Wave::WaveFileWriter::_ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filename, format);
}
inline void NAudio::Wave::WaveFileWriter::WriteDataChunkHeader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"WriteDataChunkHeader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NAudio::Wave::WaveFileWriter::CreateFactChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"CreateFactChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool NAudio::Wave::WaveFileWriter::HasFactChunk()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"HasFactChunk", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW NAudio::Wave::WaveFileWriter::get_Filename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"get_Filename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void NAudio::Wave::WaveFileWriter::set_Filename(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"set_Filename", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t NAudio::Wave::WaveFileWriter::get_Length()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFormat* NAudio::Wave::WaveFileWriter::get_WaveFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"get_WaveFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::NAudio::Wave::WaveFormat*>(this, ___internal_method);
}
inline void NAudio::Wave::WaveFileWriter::set_WaveFormat(::NAudio::Wave::WaveFormat*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"set_WaveFormat", {}, {::i2c::type_of<::NAudio::Wave::WaveFormat*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool NAudio::Wave::WaveFileWriter::get_CanRead()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool NAudio::Wave::WaveFileWriter::get_CanWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool NAudio::Wave::WaveFileWriter::get_CanSeek()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t NAudio::Wave::WaveFileWriter::Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, buffer, offset, count);
}
inline int64_t NAudio::Wave::WaveFileWriter::Seek(int64_t  offset, ::System::IO::SeekOrigin  origin)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, offset, origin);
}
inline void NAudio::Wave::WaveFileWriter::SetLength(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t NAudio::Wave::WaveFileWriter::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void NAudio::Wave::WaveFileWriter::set_Position(int64_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void NAudio::Wave::WaveFileWriter::Write(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, count);
}
inline void NAudio::Wave::WaveFileWriter::WriteSample(float_t  sample)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"WriteSample", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sample);
}
inline void NAudio::Wave::WaveFileWriter::WriteSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"WriteSamples", {}, {::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, samples, offset, count);
}
inline void NAudio::Wave::WaveFileWriter::Flush()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void NAudio::Wave::WaveFileWriter::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void NAudio::Wave::WaveFileWriter::UpdateHeader(::System::IO::BinaryWriter*  writer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void NAudio::Wave::WaveFileWriter::UpdateDataChunk(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"UpdateDataChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void NAudio::Wave::WaveFileWriter::UpdateRiffChunk(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"UpdateRiffChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void NAudio::Wave::WaveFileWriter::UpdateFactChunk(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(),
                        {"UpdateFactChunk", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void NAudio::Wave::WaveFileWriter::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::NAudio::Wave::WaveFileWriter*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::NAudio::Wave::WaveFileWriter* NAudio::Wave::WaveFileWriter::New_ctor(::System::IO::Stream*  outStream, ::NAudio::Wave::WaveFormat*  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NAudio::Wave::WaveFileWriter*>(outStream, format));
}
inline ::NAudio::Wave::WaveFileWriter* NAudio::Wave::WaveFileWriter::New_ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::NAudio::Wave::WaveFileWriter*>(filename, format));
}
// Ctor Parameters []
constexpr ::NAudio::Wave::WaveFileWriter::WaveFileWriter()   {
}

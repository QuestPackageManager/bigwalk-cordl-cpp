#pragma once
// IWYU pragma private; include "NAudio/Wave/WaveFileWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WaveFileWriter)
namespace NAudio::Wave {
class WaveFormat;
}
namespace System::IO {
class BinaryWriter;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace NAudio::Wave {
class WaveFileWriter;
}
// Write type traits
MARK_REF_T(::NAudio::Wave::WaveFileWriter*);
DEFINE_IL2CPP_CLASS(::NAudio::Wave::WaveFileWriter*, "NAudio.Wave", "WaveFileWriter");
// Dependencies System.IO.Stream
namespace NAudio::Wave {
// Is value type: false
// CS Name: NAudio.Wave.WaveFileWriter
class CORDL_TYPE WaveFileWriter : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Filename, put=set_Filename)) ::StringW  Filename;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_WaveFormat, put=set_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Field <Filename>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Filename_k__BackingField, put=__cordl_internal_set__Filename_k__BackingField)) ::StringW  _Filename_k__BackingField;

/// @brief Field <WaveFormat>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveFormat_k__BackingField, put=__cordl_internal_set__WaveFormat_k__BackingField)) ::NAudio::Wave::WaveFormat*  _WaveFormat_k__BackingField;

/// @brief Field _dataChunkSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__dataChunkSize, put=__cordl_internal_set__dataChunkSize)) int32_t  _dataChunkSize;

/// @brief Field _dataSizePos, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataSizePos, put=__cordl_internal_set__dataSizePos)) int64_t  _dataSizePos;

/// @brief Field _factSampleCountPos, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__factSampleCountPos, put=__cordl_internal_set__factSampleCountPos)) int64_t  _factSampleCountPos;

/// @brief Field _outStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__outStream, put=__cordl_internal_set__outStream)) ::System::IO::Stream*  _outStream;

/// @brief Field _writer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__writer, put=__cordl_internal_set__writer)) ::System::IO::BinaryWriter*  _writer;

/// @brief Method CreateFactChunk, addr 0x1805d50f0, size 0xe0, virtual false, abstract: false, final false
inline void CreateFactChunk() ;

/// @brief Method Dispose, addr 0x1805d51d0, size 0xb0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x1805d5280, size 0x20, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method Flush, addr 0x1805d52a0, size 0x30, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method HasFactChunk, addr 0x1802f6470, size 0x10, virtual false, abstract: false, final false
inline bool HasFactChunk() ;

static inline ::NAudio::Wave::WaveFileWriter* New_ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format) ;

static inline ::NAudio::Wave::WaveFileWriter* New_ctor(::System::IO::Stream*  outStream, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method Read, addr 0x1805d52d0, size 0x20, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0x1805d52f0, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x1805d5310, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method UpdateDataChunk, addr 0x1805d5330, size 0x60, virtual false, abstract: false, final false
inline void UpdateDataChunk(::System::IO::BinaryWriter*  writer) ;

/// @brief Method UpdateFactChunk, addr 0x1805d5390, size 0x80, virtual false, abstract: false, final false
inline void UpdateFactChunk(::System::IO::BinaryWriter*  writer) ;

/// @brief Method UpdateHeader, addr 0x1805d5410, size 0x130, virtual true, abstract: false, final false
inline void UpdateHeader(::System::IO::BinaryWriter*  writer) ;

/// @brief Method UpdateRiffChunk, addr 0x1805d5540, size 0x80, virtual false, abstract: false, final false
inline void UpdateRiffChunk(::System::IO::BinaryWriter*  writer) ;

/// @brief Method Write, addr 0x1805d5740, size 0x50, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count) ;

/// @brief Method WriteDataChunkHeader, addr 0x1805d55c0, size 0xb0, virtual false, abstract: false, final false
inline void WriteDataChunkHeader() ;

/// @brief Method WriteSample, addr 0x1805d5670, size 0x40, virtual false, abstract: false, final false
inline void WriteSample(float_t  sample) ;

/// @brief Method WriteSamples, addr 0x1805d56b0, size 0x90, virtual false, abstract: false, final false
inline void WriteSamples(::ArrayW<float_t>  samples, int32_t  offset, int32_t  count) ;

constexpr ::StringW const& __cordl_internal_get__Filename_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Filename_k__BackingField() ;

constexpr ::NAudio::Wave::WaveFormat* const& __cordl_internal_get__WaveFormat_k__BackingField() const;

constexpr ::NAudio::Wave::WaveFormat*& __cordl_internal_get__WaveFormat_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__dataChunkSize() const;

constexpr int32_t& __cordl_internal_get__dataChunkSize() ;

constexpr int64_t const& __cordl_internal_get__dataSizePos() const;

constexpr int64_t& __cordl_internal_get__dataSizePos() ;

constexpr int64_t const& __cordl_internal_get__factSampleCountPos() const;

constexpr int64_t& __cordl_internal_get__factSampleCountPos() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__outStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__outStream() ;

constexpr ::System::IO::BinaryWriter* const& __cordl_internal_get__writer() const;

constexpr ::System::IO::BinaryWriter*& __cordl_internal_get__writer() ;

constexpr void __cordl_internal_set__Filename_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__WaveFormat_k__BackingField(::NAudio::Wave::WaveFormat*  value) ;

constexpr void __cordl_internal_set__dataChunkSize(int32_t  value) ;

constexpr void __cordl_internal_set__dataSizePos(int64_t  value) ;

constexpr void __cordl_internal_set__factSampleCountPos(int64_t  value) ;

constexpr void __cordl_internal_set__outStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__writer(::System::IO::BinaryWriter*  value) ;

/// @brief Method .ctor, addr 0x1805d5790, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method .ctor, addr 0x1805d5820, size 0x440, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  outStream, ::NAudio::Wave::WaveFormat*  format) ;

/// @brief Method get_CanRead, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x1802e2bd0, size 0x10, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Filename, addr 0x1802e0b30, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Filename() ;

/// @brief Method get_Length, addr 0x1805d5c60, size 0x10, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x1805d5c60, size 0x10, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_WaveFormat, addr 0x1802e75e0, size 0x10, virtual false, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

/// @brief Method set_Filename, addr 0x180308de0, size 0x10, virtual false, abstract: false, final false
inline void set_Filename(::StringW  value) ;

/// @brief Method set_Position, addr 0x1805d5c70, size 0x20, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// @brief Method set_WaveFormat, addr 0x1802f8080, size 0x10, virtual false, abstract: false, final false
inline void set_WaveFormat(::NAudio::Wave::WaveFormat*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaveFileWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaveFileWriter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaveFileWriter(WaveFileWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaveFileWriter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaveFileWriter(WaveFileWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16772};

/// @brief Field _outStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____outStream;

/// @brief Field _writer, offset: 0x30, size: 0x8, def value: None
 ::System::IO::BinaryWriter*  ____writer;

/// @brief Field _dataSizePos, offset: 0x38, size: 0x8, def value: None
 int64_t  ____dataSizePos;

/// @brief Field _factSampleCountPos, offset: 0x40, size: 0x8, def value: None
 int64_t  ____factSampleCountPos;

/// @brief Field _dataChunkSize, offset: 0x48, size: 0x4, def value: None
 int32_t  ____dataChunkSize;

/// @brief Field <Filename>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____Filename_k__BackingField;

/// @brief Field <WaveFormat>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::NAudio::Wave::WaveFormat*  ____WaveFormat_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____outStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____writer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____dataSizePos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____factSampleCountPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____dataChunkSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____Filename_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::NAudio::Wave::WaveFileWriter, ____WaveFormat_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::NAudio::Wave::WaveFileWriter) == 0x60, "Size mismatch!");

} // namespace end def NAudio::Wave
